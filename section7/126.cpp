#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// finding duplicate elements in an unsorted array 
void find(struct Array arr,int n){
    for(int i=0;i<n;i++){
        int count=1;
        if(arr.a[i]!=-1){
            for(int j=i+1;j<n;j++){
            if(arr.a[i]==arr.a[j]){
            count++;
            arr.a[j]=-1;
            }
        }
        }
        if(count>1)
        cout<<arr.a[i]<<" "<<count<<" times"<<endl;
    }
}
int main(){
    struct Array arr={{8,3,6,4,6,5,6,8,2,7},20,10};
    find(arr,10);
    return 0;
}
