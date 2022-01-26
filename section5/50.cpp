#include<iostream>
using namespace std;
void fun(int x){
    if(x>0){
        cout<<x;
        fun(x-1);
    }
}
void fun1(int x){
    if(x>0){
        fun1(x-1);
        cout<<x;
    }
}
int main(){
    int x=5;
    fun(x);
    cout<<endl;
    fun1(x);
    cout<<endl;
    return 0;
}