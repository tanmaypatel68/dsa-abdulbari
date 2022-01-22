#include<iostream>
using namespace std;
void fun(int a[],int n){ // we can also write *a in place of a[] here 

    a[0]=6;

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    fun(a,n);
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

// passing by value 