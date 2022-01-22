#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p;
    p=&a;
    // &a=address of a
    // &p=address of p
    cout<<a<<" "<<*p<<" "<<p<<endl;
    cout<<&a<<" "<<&p<<endl<<endl;
    
    int b[]={1,2,3,4,5};
    int *c;
    c=b; // or c=&b[0]; // c=&b; is wrong it is invalid syntax
    cout<<b<<" "<<*c<<" "<<c<<endl;
    cout<<&b<<" "<<&p<<endl;
    cout<<c[0]<<endl<<endl;

    for(int i=0;i<5;i++)
    cout<<c[i]<<" ";
    cout<<endl;

}
