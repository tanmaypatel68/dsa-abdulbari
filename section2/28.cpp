#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(){
        length=1;
        breadth=1;
    }
    rectangle(int l,int b);
    int area();
    int perimeter();
    int getlength(){return length;}
    int getbreadth(){return breadth;}
    void setlength(int l);
    void setbreadth(int b);
    ~rectangle();
};
int main(){
    rectangle r(2,4);
    cout<<"area is : "<<r.area()<<endl;
    cout<<"perimeter is : "<<r.perimeter()<<endl;
    r.setlength(5);
    cout<<"new length is : "<<r.getlength()<<endl;
    return 0;
}
rectangle::rectangle(int l,int b){
    length=l;breadth=b;
}
int rectangle::area(){
    return length*breadth;
}
int rectangle::perimeter(){
    return 2*(length+breadth);
}
void rectangle::setlength(int l){
    length=l;
}
void rectangle::setbreadth(int b){
    breadth=b;
}
rectangle::~rectangle(){};
