#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
 rectangle(int l,int b){
    length=l;
    breadth=b;
}
 int area(){
    return length*breadth;
}
 int perimeter(){
    return 2*(length+breadth);
}
};
int main(){
    int l,b;
    cout<<"enter the value of length and breadth"<<endl;
    cin>>l>>b;
    rectangle r{l,b};
    int a=r.area();
    int peri=r.perimeter();
    cout<<"area is "<<a<<endl;
    cout<<"perimeter is "<<peri<<endl;
    return 0;
}

//object-oriented program