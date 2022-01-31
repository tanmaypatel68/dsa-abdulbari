#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// finding duplicate elements in an array 
void find(struct Array arr,int n){
    int last=0;
    for(int i=1;i<arr.length;i++){
        if(arr.a[i]==arr.a[i-1]&&arr.a[i]!=last){
        last=arr.a[i];
        cout<<arr.a[i]<<" ";
        }
    }
    cout<<endl;
}
int main(){
    struct Array arr={{3,6,8,8,10,12,15,15,15,20},20,10};
    find(arr,10);
    return 0;
}
