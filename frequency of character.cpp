/*
C++ Program to Find the Frequency of a given Character in a String.

*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char str[100],ch;
    int i,count=0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to find frequency: ");
    scanf("%c",&ch);

    for(i=0; str[i]!='\0';i++){
        if(ch==str[i]){
            ++count;
        }
    }
    printf("Frequency of %c is %d",ch,count);
}
