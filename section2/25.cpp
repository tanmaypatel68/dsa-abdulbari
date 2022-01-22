#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void initialization(struct rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}
int area(struct rectangle r){
    return r.length*r.breadth;
}
int perimeter(struct rectangle r){
    return 2*(r.length+r.breadth);
}
int main(){
    struct rectangle r{0,0};
    int l,b;
    cout<<"enter the value of length and breadth"<<endl;
    cin>>l>>b;
    initialization(&r,l,b);
    int a=area(r);
    int peri=perimeter(r);
    cout<<"area is "<<a<<endl;
    cout<<"perimeter is "<<peri<<endl;
    return 0;
}

// structure and functions