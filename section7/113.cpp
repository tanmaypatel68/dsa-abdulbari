#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
void insert(struct Array *arr,int x){
    int n=arr->length-1;
    if(arr->length==arr->size)
    return ;
    while(n>=0&&arr->a[n]>x){
        arr->a[n+1]=arr->a[n];
        n--;
    }
    arr->a[n+1]=x;
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    cout<<endl;
}
int main(){
    struct Array arr={{4,8,13,16,20,25,28,33},10,8};
    insert(&arr,2);
    display(arr);
    return 0;
}