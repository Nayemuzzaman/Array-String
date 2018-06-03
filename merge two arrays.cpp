#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    int a[10]={1,2,3,4};
    int b[10] = {13,23,33,34};
    int i;
    int c[20];

    for(i=0;i<4;i++){
        c[i]=a[i];
        c[i+4]=b[i];
    }
    printf("{");
    for(int j=0;j<8;j++){
      printf("%d ",c[j]);
      //  cout<<c[j];
    }
    printf("}");
}

