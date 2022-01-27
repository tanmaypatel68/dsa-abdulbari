#include<iostream>
using namespace std;
int main(){
    int *p=new int[5];
    for(int i=0;i<5;i++){
        p[i]=i+1;
    }

    int *q=new int[10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    cout<<endl;

    delete []p;
    p=q;
    q=NULL;

    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}

// increase array size in heap

// we cannot increase array size rather we can create a new array in heap and paste all values of previous heap in that array