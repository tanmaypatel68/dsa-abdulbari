#include<iostream>
#include<unordered_map>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// check if sum of two elements is 10 in an sorted array
void find(struct Array arr,int n){
    int i=0,j=n-1;
    while(i<j){
        int x=arr.a[i]+arr.a[j];
        if(arr.a[i]+arr.a[j]==10){
            cout<<arr.a[i++]<<" and "<<arr.a[j--]<<endl;
        }
        else if(x>10)
        j--;
        else
        i++;
    }
}
int main(){
    struct Array arr={{1,3,4,5,6,8,9,10,12,14},20,10};
    find(arr,10);
    return 0;
}
