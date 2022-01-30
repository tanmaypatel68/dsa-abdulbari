#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
int binary(struct Array arr,int n){
    int l=0,h=arr.length-1;
    while(l<=h){  // loop method 
        int mid=(l+h)/2;
        if(arr.a[mid]==n)
        return mid;
        if(n<arr.a[mid])
        h=mid-1;
        else 
        l=mid+1;
    }
    return -1;
}
// binary search - time complexity  O(logn)
int main(){
    struct Array arr={{1,2,3,4,5},10,5};
    cout<<binary(arr,4)<<endl;
    return 0;
}