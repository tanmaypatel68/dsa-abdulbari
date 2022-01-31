#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// finding single missing element in an array starting from a random number
int find(struct Array arr,int n){
    int a=arr.a[n-1],b=arr.a[0]-1;
    int x=a*(a+1)/2-b*(b+1)/2;
    int sum=0;
    for(int i=0;i<arr.length;i++)
    sum+=arr.a[i];
    return x-sum;
}
int find1(struct Array arr,int n){
    int diff=arr.a[0]-0;
    for(int i=0;i<arr.length;i++){
        if(arr.a[i]-i!=diff)
        return arr.a[i]-1;
    }
    return -1;
}
int main(){
    struct Array arr={{6,7,8,9,10,11,13,14,15,16,17},20,11};
    cout<<find(arr,11)<<endl;
    return 0;
}
