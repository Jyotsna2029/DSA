#include <iostream>
#include <cstring> // Needed for strlen

using namespace std;

int main() {
    char work[5];
    cin >> work;
    cout << "Your word was: " << work << endl;
    cout << "Length: " << strlen(work) << endl;

    char sentence[50];
    cin.getline(sentence, 30, '*');
    cout << "Your word was: " << work << endl;
    cout << "Length: " << strlen(work) << endl;
    return 0;
}
