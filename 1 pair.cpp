#include<iostream>
using namespace std;
int main(){
    pair<int , string> p;
    p = {23,"arvind"};
    cout<<p.first<<endl<<p.second<<endl;

    pair<int , string> p1;
    p1=p;
    p1.first = 3;
    cout<<p.first<<endl;

    //copy by reference
    pair<int , string> &p2 = p;
    p2.first = 4;
    cout<<p.first;

}
