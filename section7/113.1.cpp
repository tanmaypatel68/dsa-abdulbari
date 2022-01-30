#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
bool sorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++)
    if(arr.a[i]>arr.a[i+1])
    return false;
    return true;
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    cout<<endl;
}
int main(){
    struct Array arr={{4,8,13,16,20,25,28,33},10,8};
    cout<<sorted(arr)<<endl;
    display(arr);
    return 0;
}