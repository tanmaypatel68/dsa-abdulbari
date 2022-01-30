#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
void left(struct Array *arr){
    int x=arr->a[0];
    for(int i=1;i<arr->length;i++)
    arr->a[i-1]=arr->a[i];
    arr->a[arr->length-1]=x;
}
void right(struct Array *arr){
    int x=arr->a[arr->length-1];
    for(int i=arr->length-1;i>0;i--)
    arr->a[i]=arr->a[i-1];
    arr->a[0]=x;
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    cout<<endl;
}
int main(){
    struct Array arr={{1,2,3,4,5,},10,5};
    display(arr);
    left(&arr);
    display(arr);
    right(&arr);
    display(arr);
    return 0;
}