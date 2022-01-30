#include<iostream>
using namespace std;
struct Array{
    int *a;
    int size;
    int length;
};
void display(struct Array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    cout<<endl;
}
int main(){
    struct Array arr;
    int n;
    cout<<"enter the size of array : ";
    cin>>arr.size;
    arr.a=new int[arr.size];
    arr.length=0;
    cout<<"enter the value of n : ";
    cin>>n;
    arr.length=n;

    cout<<"enter the values inside array : ";
    for(int i=0;i<n;i++)
    cin>>arr.a[i];
    display(arr);
    return 0;
}