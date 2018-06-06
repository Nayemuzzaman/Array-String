/* C++ program to Concatenate Two Strings.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char a[100],b[100],c[100];

    printf("Enter your first string:\n");
    gets(a);

    printf("Enter your second string:\n");
    gets(b);

    int i,j;
    for(i=0; a[i]!='\0'; i++);

        for(j=0;b[j] !='\0';j++,i++){
            a[i] = b[j];
        }

    printf("your concatenate string:\n");
    cout<<a;
}
