#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
// negative numbers on left side and all positive numbers on right side
void side(struct Array *arr){
    int l=0,r=arr->length-1;
    while(l<r){
        while(arr->a[l]<0) l++;
        while(arr->a[r]>=0) r--;
        if(l<r){
        swap(&arr->a[l],&arr->a[r]);
        }
    }
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    cout<<endl;
}
int main(){
    struct Array arr={{-6,3,-8,10,5,-7,-9,12,-4,2},10,10};
    display(arr);
    side(&arr);
    display(arr);
    return 0;
}