#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle *p;
    // p=(struct rectangle *)malloc(sizeof(struct rectangle)); // in c
    p= new rectangle;  // in c++
    p->length=5;
    p->breadth=6;
    cout<<p->length<<" "<<p->breadth<<endl;
    cout<<endl;
    return 0;
}

// creating a structure to pointer in heap
// dynamic object (object created in heap)

// we can also write only rectangle in place of struct rectangle in c++