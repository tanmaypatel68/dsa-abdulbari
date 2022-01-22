#include<iostream>
using namespace std;
int area(int length,int breadth){
    return length*breadth;
}
int perimeter(int length,int breadth){
    return 2*(length+breadth);
}
int main(){
    int length,breadth;
    cout<<"enter the value of length and breadth"<<endl;
    cin>>length>>breadth;
    int a=area(length,breadth);
    int peri=perimeter(length,breadth);
    cout<<"area is "<<a<<endl;
    cout<<"perimeter is "<<peri<<endl;
    return 0;
}

// modular program