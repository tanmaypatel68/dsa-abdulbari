#include<iostream>
int fac(int n){
    if(n==0)
    return 1;
    return n*fac(n-1);
}
int fun(int n,int r){
    int t1=fac(n);
    int t2=fac(r);
    int t3=fac(n-r);
    return t1/(t2*t3);
}
using namespace std;
int main(){
    int n,r;
    cout<<"enter the value of n and r : "<<endl;
    cin>>n>>r;
    cout<<fun(n,r)<<endl;
    return 0;
}

// nCr using recursion 