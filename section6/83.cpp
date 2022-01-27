#include<iostream>
using namespace std;
int main(){
    int *p;
    p=new int[5];  // in c - p=(int *)malloc(5*sizeof(int));

    for(int i=0;i<5;i++){
        p[i]=i+1;
        cout<<p[i]<<" ";
    }
    cout<<endl;

    delete []p;  // in c - free(p);

    // memory created in heap should be deleted after use
}

// dynamic memory allocation in heap