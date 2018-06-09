/*
C++ Program to Check if the Substring is present in the given String.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char str[100],src[100];
    int count1=0,count2=0,i,j,flag;

    printf("Enter you sentence:\n");
    scanf("%s",str);

    printf("Enter your searching words/letter:\n");
    scanf("%s",src);

    while(str[count1]!='\0'){
        count1++;
    }
    while(src[count2]!='\0'){
        count2++;
    }
   /*printf("%d\n",count1);
    printf("%d\n",count2);*/

    for(i=0;i<=count1-count2;i++){

        for(j=i;j<i+count2;j++){

            flag=1;

            if(str[j]!=src[j-i]){
                flag=0;
                break;
            }
        }
        if(flag == 1)
            break;
    }
    if(flag==1){
        printf("Found");
    }
    else{
        printf("not found\n");
    }

}
