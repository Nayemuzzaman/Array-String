#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
   int a[] = {14,25,5,23,16,3,2,1,43,14,25};
   int i,j,temp;

   for(i=0;i<11;i++){
      for(j=0;j<11;j++){
           if(a[j]<a[j+1]){
               temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp;
           }
      }
   }
   printf("{ ");
   for(int k=0; k<11;k++){
        printf("%d ",a[k]);
   }
   printf("}");
}
