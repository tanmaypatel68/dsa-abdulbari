#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
    return 0;
    else
    return sum(n-1)+n;
}
int main(){
    int x;
    cout<<"enter the value of n : "<<endl;
    cin>>x;
    cout<<sum(x)<<endl;
}
