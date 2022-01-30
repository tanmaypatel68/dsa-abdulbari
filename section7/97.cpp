#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }
    cout<<endl;
}
void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->a[arr->length]=x;
        arr->length++;
    }
}
void insert(struct Array *arr,int x,int n){
    if(n>=0 && n<=(arr->length)){
        for(int i=arr->length;i>n;i--){
        arr->a[i]=arr->a[i-1];
    }
    arr->a[n]=x;
    arr->length++;
    }
}
int main(){
    struct Array arr={{1,2,3,4,5},10,5};
    display(arr);
    append(&arr,6);
    display(arr);
    insert(&arr,7,4);
    display(arr);
    return 0;
}