#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool exits(char s[],char c){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c){
            return true;
        }
    }
    return false;
}

int main(){
   char a[100],b[100];
    int c=0;
    gets(a);
    for(int i=0; a[i]!='\0'; i++){
        if(!exits(b,a[i])){ //here b pass all char & a[i] pass individual char
            b[c]=a[i];
            c++;
        }
    }
    b[c]='\0';
    //printf("%ch",b);
    cout<<b;
}
