#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,t;
    cin>>n;
    t=n;
    vector<int> v;
    while(t--)
    {
        long long y;
        cin>>y;
        v.push_back(y);
    }
    cin>>x;
    v.erase(v.begin()+(x-1));
    n=n-1;
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    n=n-(b-a);
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
