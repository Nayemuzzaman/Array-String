/*
C++ Program to Count the Total Number of Words in the Sentence/ String.
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char a[100];
    int i;
    static int count=1;

    printf("Enter your string/sentence: ");
    //scanf("%s",a);
    scanf("%[^\n]s", a);

    for(i=0;a[i]!='\0';i++){

        if(a[i] == ' '){
            count++;
        }
    }
    cout<<"Total words: "<<count<<endl;
}
