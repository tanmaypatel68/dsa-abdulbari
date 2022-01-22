#include<iostream>
using namespace std;
template <class t>
class addition{
    private:
    t a;
    t b;
    public:
    addition(t a,t b);
    t add();
};
int main(){
    addition<int> x(4,5);
    cout<<"addition is "<<x.add()<<endl;
    return 0;
}
template <class t>
addition<t>::addition(t a,t b){
    this->a=a;
    this->b=b;
}
template <class t>
t addition<t>::add(){
    t c;
    c=a+b;
    return c;
}