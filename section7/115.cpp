#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
void insert(struct Array *arr1,struct Array *arr2,struct Array *arr){
    int i=0,j=0,k=0;
    while(i<arr1->length&&j<arr2->length){
        if(arr1->a[i]<arr2->a[j]){
            arr->a[k++]=arr1->a[i++];
            arr->length++;
        }
        else{
            arr->a[k++]=arr2->a[j++];
            arr->length++;
        }
    }
    for(;i<arr1->length;i++){
    arr->a[k++]=arr1->a[i]; 
    arr->length++;
    }
    for(;j<arr2->length;j++){
    arr->a[k++]=arr2->a[j]; 
    arr->length++;
    }
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    cout<<endl;
}
int main(){
    struct Array arr1={{3,8,16,20,25},10,5};
    struct Array arr2={{4,10,12,22,23},10,5};
    struct Array arr={{},10,0};
    insert(&arr1,&arr2,&arr);
    display(arr1);
    display(arr2);
    display(arr);
    return 0;
}