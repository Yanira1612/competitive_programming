#include<bits/stdc++.h>
using namespace std;

int main(){
 
 int n,a,b;
 scanf("%d ",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        if(a>b) printf(">\n");
        if(a<b) printf("<\n");
        if(a==b) printf("=\n");
    }
    return 0; 
}