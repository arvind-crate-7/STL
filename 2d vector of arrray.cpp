#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter size:";
    cin>>size;
    cout<<endl;

    //creating vector of array
    vector<int> v[size];
    for(int i=0;i<size;i++){
        int vector_size;
        cout<<"Enter size of the vector:";
        cin>>vector_size;
        for(int j=0;j<vector_size;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }

    //printing 
    for(int i=0;i<size;i++){
        print(v[i]);
    }
}
