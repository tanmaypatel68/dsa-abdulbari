#include<iostream>
using namespace std;
double tay(int m,int n){
    static double p=1,f=1;
    double r;
    if(n==0)
    return 1;
    else{
        r=tay(m,n-1);
        p=p*m;
        f=f*n;
        return r+p/f;
    }
}
int main(){
    cout<<tay(2,3)<<endl;
    return 0;
}