#include<iostream>
#include <cstring>
using namespace std;
void upper(char word[], int n){
    for(int i = 0; i <n; i++){
        char ch = word[i];
        if(ch >= 'a' && ch <= 'z')continue; //uppercase
        else{
            word[i] = ch-'A'+'a';
        }
    }
}
int main(){
    char word[] = "ApPle";
    upper(word, strlen(word));
    cout<<word<<endl;
    return 0;
}