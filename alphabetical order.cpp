/*
 C++ Program to Sort Elements in Lexicographical Order (Dictionary Order).
*/
#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char str[10][10],cstr[10][10],temp[10];
    int n, i,j;
    printf("Enter the value of input:");
    scanf("%d",&n);

    printf("please input %d words\n",n);

    for(i=0;i<n;i++){
        scanf("%s",str[i]);

    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nName sorted:\n");

    for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }

}
