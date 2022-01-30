#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
// union
// if list is not sorted the basic simple for loop inside loop solution
// when the list is sorted
struct Array* un(struct Array *arr1,struct Array *arr2){
    struct Array *arr=new struct Array[10];
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length&&j<arr2->length){
        if(arr1->a[i]==arr2->a[j]){
            arr->a[k++]=arr1->a[i];
            i++;j++;
            arr->length++;
        }
        else if(arr1->a[i]<arr2->a[j]){
            arr->a[k++]=arr1->a[i++];
            arr->length++;
        }
        else{
            arr->a[k++]=arr2->a[j++];
            arr->length++;
        }
    }
    for(;i<arr1->length;i++){
        arr->a[k++]=arr1->a[i++];
        arr->length++;
    }
    for(;j<arr2->length;j++){
        arr->a[k++]=arr2->a[j++];
        arr->length++;
    }
    return arr;
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
    cout<<endl;
}
int main(){
struct Array arr1={{2,9,21,28,35},10,5};
struct Array arr2={{2,3,9,18,28},10,5};
struct Array *arr;
arr=un(&arr1,&arr2);
display(*arr);
return 0;
}