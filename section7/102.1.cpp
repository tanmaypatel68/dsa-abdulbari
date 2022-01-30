#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
// linear search
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int linear(struct Array *arr,int n){
    for(int i=0;i<n;i++){
        if(arr->a[i]==n){
            swap(&arr->a[i],&arr->a[0]);   // move to front/ head for improving linear search
            return i;
        }
    }
    return -1;
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    cout<<endl;
}
int main(){
    struct Array arr={{1,2,3,4,5},10,5};
    display(arr);
    cout<<linear(&arr,4)<<endl;
    display(arr);
    return 0;
}