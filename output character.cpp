/*
C++ Program to Remove all Characters in a String except alphabet.
*/

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char str[200];
    int i,j;
    printf("Enter your string: ");
    scanf("%[^\n]s",str);

    for(i=0;str[i]!='\0';i++){
        while(!((str[i] >='a' && str[i] <= 'z') || (str[i]>='A' && str[i]<='Z') ||(str[i]=='\0'))){
            for(j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }
    cout<<"print Characters in a String except alphabet."<<str<<endl;
}
