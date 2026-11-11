#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={2,7,11,15};
    
    int start=0;
    int end= vec.size()-1;
    int currsum=0;
    int key=9;
    while(start<end)
    {
        currsum= vec[start]+vec[end];
        if(currsum==key)
        {
            cout<<start<<","<<end;
            break;
        }
        else if(currsum>key)
        {
           end--;
        }
        else if(currsum<key)
        {
            start++;
        }
        currsum=0;


    }
    return 0;
}