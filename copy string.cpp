/*
C++ Program to Copy a String.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char a[100],b[100];

    int i;
    int j=0;
    printf("Enter a string: ");
    gets(a);

    for(i=0;a[i]!='\0';i++,j++){
        b[j]=a[i];

    }
    b[j]='\0';

    printf("copy string from A to B: ");
    cout<<b;
}
