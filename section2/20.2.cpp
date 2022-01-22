#include<iostream>
using namespace std;
struct  rectangle{
    int length;
    int breadth;
};
struct rectangle *fun(){
    struct rectangle *p;
    p=new rectangle;
    p->length=4;
    p->breadth=5;
    return p;
}
int main(){
    struct rectangle *ptr=fun();
    cout<<ptr->length<<" "<<ptr->breadth<<endl;

    return 0;
}