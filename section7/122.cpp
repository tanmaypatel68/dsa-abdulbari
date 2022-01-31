#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// finding multiple missing element in an array starting from a random number
void find(struct Array arr,int n){
    int diff=arr.a[0]-0;
    for(int i=0;i<arr.length;i++){
        if(arr.a[i]-i!=diff){
            while(diff<arr.a[i]-i){
                cout<<i+diff<<" ";
                diff++;
            }
        }
    }
}
int main(){
    struct Array arr={{6,7,8,9,11,12,15,16,17,18,19},20,11};
    find(arr,11);
    cout<<endl;
    return 0;
}
