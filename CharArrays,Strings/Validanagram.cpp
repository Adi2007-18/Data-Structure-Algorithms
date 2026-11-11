#include <iostream>
#include <string>
using namespace std;

bool valid_anagram(string str1, string str2) // Since string is a class no need to pass it's object size
{
    if (str1.length() != str2.length())
    {
        cout << "Not a valid Anagram";
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i] - 'a']++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        if (count[str2[i] - 'a'] == 0)
        {
            cout << "Not a valid Anagram";
            return false;
        }
        count[str2[i] - 'a']--;
    }
    cout << "A valid Anagram";
    return true;
}

int main()
{
    string str1 = "aditya";
    string str2 = "iaytda";
    valid_anagram(str1, str2);
    return 0;
}