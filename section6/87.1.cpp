#include<iostream>
using namespace std;
int main(){
    int **a;
    a=new int *[3];
    a[0]=new int[4];
    a[1]=new int[4];
    a[2]=new int[4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            a[i][j]=4*i+j+1;
            cout<<a[i][j]<<" \t";
        }
        cout<<endl;
    }
    return 0;
}

// using double pointers
// whole 2d array is created inside heap