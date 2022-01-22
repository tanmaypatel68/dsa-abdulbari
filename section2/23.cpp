#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"enter the value of length and breadth"<<endl;
    cin>>length>>breadth;
    int area=length*breadth;
    int peri=2*(length+breadth);
    cout<<"area is "<<area<<endl;
    cout<<"perimeter is "<<peri<<endl;
    return 0;
}

// monolithic program