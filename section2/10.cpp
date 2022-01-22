#include<iostream>
using namespace std;
int main(){
    int a=5;
    int &r=a;

    // r is another name of a
    // reference is another name given to the variable

    cout<<a<<" "<<r<<endl;
    r++;
    cout<<a<<" "<<r<<endl;

    int b=10;
    r=b;
    cout<<a<<" "<<r<<endl;
    return 0;
}