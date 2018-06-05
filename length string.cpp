/*C++ Program to Find the Length of a String.
*/

#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char str[100];
    int i,count=0;

    printf("Enter a string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        count++;
    }
    printf("length of string is: %d",count);
}
