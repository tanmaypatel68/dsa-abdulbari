#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// finding duplicate elements in an array 
void find(struct Array arr,int n){
    int j;
    for(int i=0;i<arr.length-1;i++){
        if(arr.a[i]==arr.a[i+1]){
            j=i+1;
            while(arr.a[j]==arr.a[i]){
                j++;
            }
            cout<<arr.a[i]<<" "<<j-i<<" times"<<endl;
            i=j-1;
        }
    }
    cout<<endl;
}
int main(){
    struct Array arr={{3,6,8,8,10,12,15,15,15,20},20,10};
    find(arr,10);
    return 0;
}
