#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4};
    for(int value:v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    vector <int> ::iterator  it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // line 11 to 15 code resuced by auto.
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    for(pair<int,int> &value:v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    //same code line 24 to 28.
    vector<pair<int,int>>v_pp={{1,2},{2,3},{3,4}};
    for(auto &value:v_pp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}
