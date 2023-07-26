#include<bits/stdc++.h>
using namespace std;
void printvec(vector <int> v)
{
    cout<<"The size of the array vector:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector <int> v;
    int n;
    cout<<"Enter the No of element in array vector:";
    cin>>n;
    cout<<"Enter element:";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    printvec(v);
}
