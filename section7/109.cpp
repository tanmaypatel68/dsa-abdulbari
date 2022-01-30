#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
int get(struct Array arr,int index){
    if(index>=0&&index<arr.length)
    return arr.a[index];
    return -1;
}
void set(struct Array *arr,int index,int n){
    if(index>=0&&index<arr->length)
    arr->a[index]=n;
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }
    cout<<endl;
}
int max(struct Array arr){
    int max=arr.a[0];
    for(int i=1;i<arr.length;i++)
    if(arr.a[i]>max) max=arr.a[i];
    return max;
}
int min(struct Array arr){
    int min=arr.a[0];
    for(int i=1;i<arr.length;i++)
    if(arr.a[i]<min) min=arr.a[i];
    return min;
}
int sum(struct Array arr){
    int sum=0;
    for(int i=0;i<arr.length;i++)
    sum+=arr.a[i];
    return sum;
}
float avg(struct Array arr){
    return (float)sum(arr)/arr.length;
}
int main(){
    struct Array arr={{1,2,3,4,5},10,5};
    display(arr);
    cout<<get(arr,3)<<endl;
    display(arr);
    cout<<sum(arr)<<endl;
    cout<<avg(arr)<<endl;
    set(&arr,2,7);
    display(arr);
    cout<<max(arr)<<endl;
    cout<<min(arr)<<endl;
    cout<<sum(arr)<<endl;
    cout<<avg(arr)<<endl;
    return 0;
}