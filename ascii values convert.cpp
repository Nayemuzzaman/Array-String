/*
C++ Program to Find the Sum of ASCII values of All Characters in a given String

*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char b[100];
    printf("Enter string to convert ASCII: ");
    scanf("%[^\n]s",b);

    int i,j,total=0;

    for(i=0;b[i]!='\0';i++){
        total= total + b[i];
    }
    cout<<"ASCII value: "<<total<<endl;
}
