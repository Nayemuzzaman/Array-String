#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
   int a[] = {14,26,5,23,16,3,2,1,43,14,25};
   int b[] = {14,25,5,23,16,3,2,1,43,14,25};
   int i,j=0,temp;
   int c[20];

   char k;
   cout<<"for Addition press 'a' || for Subtraction press 's' ";
   cin>>k;

   for(i=0;i<11;i++){
     switch(k){
       case 'a':
            c[j]=a[i]+b[i];
            j++;
       case 's':
            c[j]=a[i]-b[i];
            j++;
         }
   }
   for(i=0;i<11;i++){
    printf("%d ",c[i]);
   }
}
