#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    int a[10][10];
    int i,j,row,column;

    printf("Enter row column: ");
    scanf("%d %d",&row,&column);

    printf("entry 2D matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("given matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d",a[i][j]);
        }
    }
    printf("\nTranspose of matrix: \n");
    for(j=0;j<row;j++){
        for(i=0;i<column;i++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}
