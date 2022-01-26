#include<iostream>
using namespace std;
// if we create int x=0; here then it is global variable
int fun(int n){
    static int x=0; // it is a static variable
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main(){
    int r=fun(5);
    cout<<r<<endl;
    r=fun(5);
    cout<<r<<endl;
    return 0;
}