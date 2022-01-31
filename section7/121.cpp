#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// finding single missing element in an array
int find(struct Array arr,int n){
    int x=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<arr.length;i++)
    sum+=arr.a[i];
    return x-sum;
}
int main(){
    struct Array arr={{1,2,3,4,5,6,8,9,10,11,12},20,11};
    cout<<find(arr,12)<<endl;
}
