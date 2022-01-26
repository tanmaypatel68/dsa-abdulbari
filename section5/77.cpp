#include<iostream>
using namespace std;
void toh(int n,int a,int b,int c){
    if(n>0){
        toh(n-1,a,c,b);
        cout<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
        }
}
int main(){
    int n;
    int a=1,b=2,c=3;
    cout<<"enter the value of n : "<<endl;
    cin>>n;
    toh(n,a,b,c);
    return 0;
}