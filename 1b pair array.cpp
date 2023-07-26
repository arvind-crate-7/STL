#include<iostream>
using namespace std;
int main(){
    pair<int,int> p_array[2];
    p_array[0] = {1,44};
    p_array[1] = {23,433};
    
    //printing pair array
    for(int i=0;i<2;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
}
