#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
// reverse an array by creating another array of same size
void rev(struct Array *arr){
    struct Array b;
    b.length=arr->length;
    b.size=arr->size;
    for(int i=0;i<b.length;i++){
        b.a[b.length-1-i]=arr->a[i];
    }
    for(int i=0;i<arr->length;i++){
        arr->a[i]=b.a[i];
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