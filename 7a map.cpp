#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="arvind";
    m[4]="kumar";
    m[3]="rahul";

    //printing element in map
    map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<"\n\n";

    //erasing element in map
    m.erase(1);
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<"\n\n";

    //finding element in map
    map<int,string> ::iterator itt=m.find(3);
    if(itt==m.end())
    {
        cout<<"No value.";
    }
    else{
        cout<<(*itt).first<<" "<<(*itt).second<<endl;
    }

    //erasing all element in map
    m.clear();
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<"\n\n";
    //inserting element in map
    m[5]="wow";
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}
