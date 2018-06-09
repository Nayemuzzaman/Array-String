/*
C++ Program to Check whether two Strings are Anagrams.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char str[100];
    char cstr[100];
    int i,j,temp;
    int count1=0,count2=0;

    printf("Enter your 1st string:\n");
    scanf("%[^\n]s",str);

    for(i=0;i<strlen(str);i++){
        count1=count1+str[i];
    }
     //cout<<count1;

    printf("\nEnter your 2nd string:\n");
    //scanf("%[^\n]s",cstr);//why not accept this
    //gets(cstr);
    scanf("%s",cstr);

    for(j=0;j<strlen(cstr);j++){
        count2=count2+cstr[j];
    }
   // cout<<count2;

    if(count1==count2){
        printf("\nAnagrams");
    }else{
            printf("\nNot Anagrams");
    }

}
