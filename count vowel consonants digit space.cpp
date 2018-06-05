/*C Program to Find the Number of Vowels, Consonants, Digits and White space in a String*/
#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
    char str[100],ch[100];
    int vowel, consonent, digit, space;

    vowel=0;
    consonent=0;
    digit=0;
    space=0;
    int i,j;


    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; ++i){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
                if(ch[j]!=str[i]){
                    ++vowel;

                }

        }
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
            ++consonent;
        }
        else if(str[i]>='o' && str[i]<='9'){
            ++digit;
        }
        else if(str[i]==' '){
            ++space;
        }
    }
    printf(" Number of Vowels: %d ",vowel);
    printf("\nNumber of Consonants: %d ",consonent);
    printf("\nNumber of Digits: %d ",digit);
    printf("\nNumber of Space: %d ",space);

    return 0;


}
