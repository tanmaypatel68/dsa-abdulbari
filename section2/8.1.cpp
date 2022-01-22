#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){

    // creating an array in heap using pointer

    int *p;
    p=new int[5]; // in c++ language             // p=(int *)malloc(5*sizeof(int)); // in C language
    p[0]=10; p[1]=12; p[2]=14; p[3]=16; p[4] =18;
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }

    delete [] p; // in c++, release memory when we have finished using it         // free(p);  // in c language

    cout<<endl;
    return 0;
}