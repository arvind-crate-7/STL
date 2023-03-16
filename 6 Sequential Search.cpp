// same as 6 no code but one problem that is : time limit exceed.
//Because this is sequential search.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long n;
    cin>>n;
    vector<long long int> v;
    long long t=n;
    while(t--)
    {
        long int y;
        cin>>y;
        v.push_back(y);
    }
    int q;
    cin>>q;
    while(q--)
    {
        long long x;
        cin>>x;
        for(long long i=0;i<n;i++)
        {
            if(v[i]==x)
            {
                cout<<"Yes"<<" "<<i+1<<endl;
                break;
            }
            if(v[i]>x)
            {
                cout<<"No"<<" "<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
