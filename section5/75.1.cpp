#include<iostream>
using namespace std;
int fun(int n,int r){
    if(r==0||n==r)
    return 1;
    return fun(n-1,r-1)+fun(n-1,r);
}
int main(){
    int n,r;
    cout<<"enter the value of n and r : "<<endl;
    cin>>n>>r;
    cout<<fun(n,r)<<endl;
    return 0;
}

// value of nCr using pascals triangle recursion