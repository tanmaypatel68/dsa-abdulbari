#include<iostream>
using namespace std;
double ho(int m,int n){
    double s=1;
    for(;n>0;n--){
        s=1+m*s/n;
    }
    return s;
}
int main(){
    cout<<ho(2,3)<<endl;
    return 0;
}

//  horners rule iterative approach