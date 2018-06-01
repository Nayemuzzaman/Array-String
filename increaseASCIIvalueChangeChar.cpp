#include<iostream>

#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char a[100];
    int t,n,i;

    printf("write a sentence: ");

    gets(a);

    printf("Skip char: ");
    scanf("%d",&n);

   for(int i=2;i<strlen(a);i+=3){
        a[i]+=2;
   }
   printf("%s",a);


}
