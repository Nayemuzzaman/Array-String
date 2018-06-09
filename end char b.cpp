/*
 C++ Program to Print the Words in a string Ending with Letter/ character 'b'.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    int i,j;

    char str[100];
    printf("Enter your string:\n");
    scanf("%[^\n]s",str);

    int length= strlen(str);

    for(i=0;i<length;i++){
        if(str[length-1]=='b'){
            printf("yes your end string b\n");
            break;
        }else{
            printf("nope. ending char isn't b\n");
            break;
        }
    }
}
