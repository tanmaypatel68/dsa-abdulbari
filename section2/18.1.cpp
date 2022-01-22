#include<iostream>
using namespace std;
int *fun(int n){
    int *p;
    p=new int[n];
    for(int i=0;i<n;i++)
    p[i]=i+1;
    return p;
}
int main(){
    int *ptr,s=5;
    ptr=fun(s);
    for(int i=0;i<s;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    return 0;
}