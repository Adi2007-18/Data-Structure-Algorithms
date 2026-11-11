#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string str, reverse_str;
cout<<"Enter a string";
getline(cin, str);
reverse_str = str;
 reverse(reverse_str.begin() ,reverse_str.end());
if(str==reverse_str)
{
    cout<<"String is palindrome";

}
else{

    cout<<"String is not a palindrome";
}
return 0;
}