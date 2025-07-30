#include <iostream>
#include <string>
using namespace std;
bool validAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        cout << "Not valid Anagram";
        return false;
    }

    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int idx = s[i] - 'a';
        count[idx]++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        int idx = t[i] - 'a';
        if (count[idx] == 0)
        {
            cout << "Not valid Anagram";
            return false;
        }
        count[idx]--;
    }
    cout<<"valid anagram";
    return true;
}
int main()
{
    string str1 = "rat";
    string str2 = "car";
    validAnagram(str1, str2);
    return 0;
}