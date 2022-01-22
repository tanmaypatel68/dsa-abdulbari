#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle r={1,2};
    int area=r.length*r.breadth;
    int perimeter=2*(r.length+r.breadth);
    cout<<"size of : "<<sizeof(r)<<endl;
    cout<<"area of rectangle : "<<area<<endl;
    cout<<"perimeter of rectangle is : "<<perimeter<<endl;
    r.length=2;r.breadth=4;
    area=r.length*r.breadth;
    perimeter=2*(r.length+r.breadth);
    cout<<"area of rectangle : "<<area<<endl;
    cout<<"perimeter of rectangle is : "<<perimeter<<endl;

    return 0;
}