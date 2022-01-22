#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle r={10,5};
    struct rectangle *p=&r;   // pointer to struct

    // for accessing structure we should either use 
    //(*p).length; or p->length;

    cout<<r.length<<" "<<p->length<<endl;
    p->length=12;
    cout<<r.length<<" "<<p->length<<endl;
    cout<<endl;
    return 0;

}