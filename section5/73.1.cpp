#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1)
    return n;
    int s,t0=0,t1=1;
    for(int i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
int main(){
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}

// iterative function of fibonacci series