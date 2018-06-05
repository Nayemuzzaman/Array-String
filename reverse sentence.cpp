/*C++ Program to Reverse a Sentence/ String.*/
#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char str[100];
    char ch[100];
int i,j=0;
    printf("write a sentence: ");
    gets(str);
    int lenght = strlen(str);

    for(i=lenght-1;i>=0;i--){
        ch[j]=str[i];
        j++;
    }
    ch[j]='\0';

    printf("%s",ch);
}
