#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
main(){
    vector<pair<int,int>> v;
    cout<<"Enter the size of the vector of pair:";
    int size;
    cin>>size;

    //taking input
    for(int i=0;i<size;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        //another way
        //v.push_back(make_pair(x,y));
    }

    //printing vector of array
    print(v);

}
