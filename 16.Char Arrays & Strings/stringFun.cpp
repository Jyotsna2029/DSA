#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100] = "abc";
    char str2[100] = "";
    cout << strcpy(str2, str1) << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << strcat(str1, str2) << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << strcmp(str1, str2) << endl;
    // Since "abcabc" > "abc", the return will be a positive number (specifically, 'a' - '\0' = 97)
    // Output: a positive integer (exact value depends on implementation but likely >0, possibly 99 if comparing 'a' vs '\0')
    return 0;

    // abc
    // abc
    // abc
    // abcabc
    // abcabc
    // abc
    // 99
    
}