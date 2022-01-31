#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// finding duplicate elements in an array 
struct Array find(struct Array arr,int n,struct Array *arr1){
    arr1->length=arr.a[n-1]+1;
    for(int i=0;i<n;i++){
        arr1->a[arr.a[i]]++;
    }
    return *arr1;
}
int main(){
    struct Array arr={{3,6,8,8,10,12,15,15,15,20},20,10};
    struct Array arr1={{},30,0};
    arr1=find(arr,10,&arr1);
    for(int i=0;i<arr1.length;i++){
        if(arr1.a[i]>1) 
        cout<<i<<" "<<arr1.a[i]<<" times"<<endl;
    }
    return 0;
}

// wrong needs correction later
