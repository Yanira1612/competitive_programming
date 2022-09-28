#include<bits/stdc++.h>
using namespace std;

int main(){
 
 int v,t;

    while(scanf("%d %d",&v,&t) == 2){
        if((v<=100)&&(v>=-100)&&(t>=0)&&(t<=200)){
                cout<<v*t*2<< endl;
        }
    }
    return 0; 
}