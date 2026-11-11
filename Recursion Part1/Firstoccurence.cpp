#include<iostream>
#include<vector>
using namespace std;

void search(vector<int> arr  , int i , int key)
{
    if(i==arr.size())
    {
        
        cout<<"Element not found"<<endl;
        return;
    }
    if(arr[i]==key)
    {
        cout<<"Element found at= "<<i<<endl;
        return;
    }
    search(arr ,i+1,key);

}
int main()
{
    vector <int> arr={1,2,3,3,4,3,5};
    search(arr,0,5);
    return 0;
}