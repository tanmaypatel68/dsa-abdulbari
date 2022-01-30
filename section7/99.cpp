#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
void del(struct Array *arr,int n){
    for(int i=n;i<arr->length-1;i++){
        arr->a[i]=arr->a[i+1];
    }
    arr->length--;
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    struct Array arr={{1,2,3,4,5},10,5};
    display(arr);
    del(&arr,3);
    display(arr);
    return 0;

}