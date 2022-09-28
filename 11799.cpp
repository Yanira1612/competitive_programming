#include<bits/stdc++.h>
using namespace std;

int main(){
    
 int Test, Entry, current, speed;
    
    scanf("%d", &Test);
    
    for (int t = 1; t <= Test; ++t){
        speed = 0;
        scanf("%d", &   Entry);
        
        while (Entry--){
            scanf("%d", &current);
            if (current>speed)
                speed=current;
        }
        
        printf("Case %d: %d\n", t, speed);
    }

    return 0; 
}