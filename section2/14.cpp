#include<iostream>
using namespace std;
int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int x=5,y=6;
    int z;
    z=add(x,y);
    cout<<z<<endl;
    return 0;
}
