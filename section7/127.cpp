#include<iostream>
#include<unordered_map>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// check if sum of two elements in 10
void find(struct Array arr,int n,unordered_map<int,int> mp){
    for(int i=0;i<n;i++){
        int x=10-arr.a[i];
        if(mp.find(x)!=mp.end()){
            cout<<x<<" and "<<10-x<<endl;
        }
        else{
            mp[arr.a[i]]=x;
        }
    }
}
int main(){
    struct Array arr={{8,3,6,4,6,5,6,8,2,7},20,10};
    unordered_map<int,int> mp;
    find(arr,10,mp);
    return 0;
}
