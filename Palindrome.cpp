/*
    C++ Program to Check if a given String is Palindrome.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char a[100];
    int flag=0;
    int i,length;

    printf("Enter a string: ");
    scanf("%s",&a);

    length = strlen(a);
    //cout<<length;
    for(i=0; i<length;i++){
        if(a[i]!=a[length-i-1]){
            flag=1;
        }
    }
    if(flag){
            cout<<flag;
        printf("%s is not a palindrome\n",a);
    }else{
        printf("%s is  a palindrome\n",a);
    }
    return 0;
}
