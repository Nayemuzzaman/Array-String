
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

bool exits(int a,int b[],int s){
        for(int i=0; i<s; i++){
            if(a==b[i]){
                return true;
            }
        }
        return false;
}

int main(){
   // int a[100],b[100];
    int a[12]= {1,3,5,2,3,6,2,5,6,3,1,2};
    int b[12]={};
    int c=0;

    for(int i=0;i<12;i++){
            int count=1;
        if(!exits(a[i],b,12)){
            b[c]=a[i];
            c++;
        for(int j=i+1; j<12;j++){
                if(a[i]==a[j]){
                    count++;
                }
        }
        cout<<"present of "<<a[i]<<" is ="<<count<<endl;
      }

    }


}
