#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}