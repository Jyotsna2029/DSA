#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str[100];  
    cout << "Enter a string: ";
    cin.getline(str, 100);
    
    int size = strlen(str);
    int lowerVowel = 0;

    for(int i = 0; i < size; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u') {
            lowerVowel++;
        }
    }

    cout << "The total number of lowercase vowel" 
         << (lowerVowel == 1 ? " is: " : "s are: ") 
         << lowerVowel << endl;

    return 0;
}
