#include<iostream>
using namespace std;
int fac(int n){
    if(n==0)
    return 1;
    else
    return n*fac(n-1);
}
int main(){
    int n;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    cout<<fac(n)<<endl;
    return 0;
}