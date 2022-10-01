#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 scanf("%d",&n);
 int array[n];

 for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
 }

 for(int i=0;i<n-1;i++){
    int diference=abs(array[i]-array[i+1]);
    if(diference>n-1){
        printf("Not Jolly");
        return 0;
    } 
 }
    printf("Jolly");
    return 0;
}