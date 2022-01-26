#include<iostream>
using namespace std;
int pow(int m,int n){
    if(n==1)
    return 1;
    else
    return m*pow(m,n-1);
}
int main(){
    int m,n;
    cout<<" enter the value of m and n : "<<endl;
    cin>>m>>n;
    cout<<pow(m,n)<<endl;
    return 0;
}

// power of a number using recursion