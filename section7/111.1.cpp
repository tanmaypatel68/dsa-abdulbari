#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
// reverse an array by interchanging elements from front and end
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void rev(struct Array *arr){
    int l=0,r=arr->length-1;
    while(l<r){
        swap(&arr->a[l],&arr->a[r]);
        l++;r--;
    }
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    cout<<endl;
}
int main(){
    struct Array arr={{1,2,3,4,5},10,5};
    rev(&arr);
    display(arr);
    return 0;
}
