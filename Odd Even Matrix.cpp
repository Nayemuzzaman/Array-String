#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
   int a[10][10];
   int b[10][10];
   int i=0,j=0,temp=1,row1,colum1,row2,colum2;

   int k=0,l=0;
   int even=0,odd=0;

    cout<<"Enter Matrix A row And Column: ";
    scanf("%d %d",&row1,&colum1);


    cout<<"Enter 2D Array A Element"<<endl;
    for(i=0;i<row1;i++){
      for(j=0;j<colum1;j++){
            scanf("%d",&a[i][j]);
       }
    }


     cout<<"\n2D Array A Element is"<<endl;
     for(i=0;i<row1;i++){
        for(j=0;j<colum1;j++){
            printf("%d",a[i][j]);
        }
     }

     for(i=0;i<row1;i++){
        for(j=0;j<colum1;j++){
            if((a[i][j]%2)==0){
               ++even;
            }
            else{
                ++odd;
            }

        }
     }


    printf("\nodd number frequency %d\n",odd);
    printf("\neven number frequency %d\n",even);
}

