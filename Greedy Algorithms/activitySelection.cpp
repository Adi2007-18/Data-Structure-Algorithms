#include<iostream>
#include<vector>
using namespace std;


int max_activities(vector <int> &start , vector<int> &end)
{
    //Select A0 Activity
    //End time sorted 
    cout<<"Selecting Acivity A0 "<<endl;
    int count=1;
    int endtime=end[0];
    for (int i=0 ; i<start.size(); i++)
    {
        if(start[i]>= endtime)// Non-Overlapping condition
        {
            cout<<"Selecting Acivity A"<<i<<endl;
            count++;
            endtime= end[i];

        }
      
    }
    return count;
}

int main()
{
    vector<int> start= {1,3,0,5,8,5};
    vector<int> end= {2,4,6,7,9,9};

    cout<<"The maximum Activities that can be performed are= "<<max_activities(start , end)<<endl;
    return 0;

}