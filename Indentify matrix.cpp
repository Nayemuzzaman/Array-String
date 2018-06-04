/*
C++ Program to Check if a given Matrix is an Identity Matrix.
Identity Matrix
1 0 0
0 1 0
0 0 1
*/
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    int a[10][10];
    int b[10][10];
    int row,column,i,j;
    int flag=0;

    printf("Enter Row && Column: ");
    scanf("%d %d",&row, &column);

    printf("\nEnter Array element:\n");

    for(i=0;i<row;i++){

        for(j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nshow Array: \n");

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(a[i][j]!=1 && a[j][i] !=0){
                flag =1;
                break;
            }
        }
    }
    if(flag==1){
        cout<<"Identity Matrix"<<endl;
    }else{
        cout<<"its not Identity Matrix"<<endl;
    }

}
