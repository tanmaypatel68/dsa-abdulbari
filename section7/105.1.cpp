#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
int binary(struct Array arr,int n,int l,int h){
    if(l<=h){  // loop method 
        int mid=(l+h)/2;
        if(arr.a[mid]==n)
        return mid;
        else if(n<arr.a[mid])
        return binary(arr,n,l,mid-1);
        else 
        return binary(arr,n,mid+1,h);
    }
    return -1;
}
// binary search - time complexity  O(logn)
int main(){
    struct Array arr={{1,2,3,4,5},10,5};
    int l=0,h=arr.length-1;
    cout<<binary(arr,4,l,h)<<endl;
    return 0;
}