#include<iostream>
using namespace std;
double ho(int m,int n){
    static double s=1;
    if(n==0)
    return s;
    else{
        s=1+m*s/n;
        return ho(m,n-1);
    }
}
int main(){
    cout<<ho(2,3)<<endl;
    return 0;
}

// taylor serires by horners rule

    