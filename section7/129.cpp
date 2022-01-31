#include<iostream>
#include<unordered_map>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// check if sum of two elements in 10
void find(struct Array arr,int n){
    int max=arr.a[0];
    int min=arr.a[0];
    for(int i=1;i<n;i++){
        if(arr.a[i]>max)
        max=arr.a[i];
        else if(arr.a[i]<min)
        min=arr.a[i];
    }
    cout<<"max is : "<<max<<endl;
    cout<<"min is : "<<min<<endl;
}
int main(){
    struct Array arr={{5,8,3,9,6,2,10,7,-1,4},20,10};
    find(arr,10);
    return 0;
}
