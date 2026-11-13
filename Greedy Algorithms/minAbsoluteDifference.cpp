#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int min_difference(vector<int> a, vector<int>b)
{
    int n= a.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<pair<int , int>> pairs(n, make_pair(0,0));
    for (int i=0 ; i<n ; i++)
    {
        pairs[i]= make_pair(a[i],b[i]);
    }

    int ans=0;
    for(int i=0 ; i<n ;i++)
    {
        ans+= abs(pairs[i].first - pairs[i].second);
    }
    return ans;

}


int main()
{
    vector<int> a={4,1,8,7};
    vector<int> b={2,3,6,5};
   cout<<"The Absolute difference is= "<<  min_difference(a, b)<<endl;
     return 0;

}