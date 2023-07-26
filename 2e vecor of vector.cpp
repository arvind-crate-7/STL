#include<bits/stdc++.h>
using namespace std;
//printing vector
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int row;
    cout<<"Enter size of the row:";
    cin>>row;
    vector<vector<int>> v;

    for(int i=0;i<row;i++){

        //entring size of the col 
        int col;
        cout<<"Enter size of the col:";
        cin>>col;

        vector<int> v_col;

        //taking input 
        for(int j=0;j<col;j++){
            int x;
            cin>>x;
            v_col.push_back(x);
        }
        v.push_back(v_col);
    }

    //printing vector
    for(int i=0;i<row;i++){
        print(v[i]);
    }
}
