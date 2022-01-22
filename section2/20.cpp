#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void fun(struct rectangle r){
    r.length=3;
    cout<<r.length<<" "<<r.breadth<<endl;
}
int main(){
    struct rectangle r={2,4};
    cout<<r.length<<" "<<r.breadth<<endl;
    fun(r);
    cout<<r.length<<" "<<r.breadth<<endl;
    return 0;
}