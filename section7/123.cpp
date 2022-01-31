#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// finding multiple missing element in an unsorted array 
void find(struct Array arr,int n,struct Array *arr1){
    for(int i=0;i<n;i++){
        int x=arr.a[i]-1;
        arr1->a[x]=1;
    }
}
int main(){
    struct Array arr={{3,7,4,9,12,6,1,11,2,10},20,10};
    struct Array arr1={{},20,10};
    find(arr,10,&arr1);
    for(int i=0;i<10;i++){
        if(arr1.a[i]==0)
        cout<<i+1<<" ";
    }
    cout<<endl;
    return 0;
}
