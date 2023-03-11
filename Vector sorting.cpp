#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cout<<"Enter number of input:";
    cin>>n;
    vector<int> v;
    int t=n;
    cout<<"Enter value:";
    while(t--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    } 
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
