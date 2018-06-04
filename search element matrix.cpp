
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
   int a[10],b[10];
   int temp,number;
   int i;

   printf("Enter Size of Array: ");
   scanf("%d",&temp);

   printf("\nEnter Array elements:\n");
   for(i=0;i<temp;i++){
    scanf("%d",&a[i]);
   }

   printf("\nEnter your searching key: ");
   scanf("%d",&number);

int   min=0;
int   max=(temp-1);

   while(min <= max){
        if(number==a[min]){
            printf("Successfully find\n");
            return 0;

        }
        min++;

   }
   printf("Unsuccessful to find\n");

}
