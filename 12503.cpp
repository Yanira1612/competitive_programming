#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
 
 int Test,temp;
 int num_steps;
 string instruction;

    scanf("%d",&Test);
    
    while(Test--){

        int position=0;

        scanf("%d",&num_steps);
        int steps[num_steps];

        for(int i=1 ; i <= num_steps; i++) {

            cin>>instruction;

            if(instruction == "LEFT") {
                steps[i] = -1;
                position -= 1;
            }
            else if (instruction == "RIGHT") {
                steps[i] = 1;
                position += 1;
            }
            else {
                scanf("%*s %d", &temp);
                steps[i] = steps[temp];
                position += steps[temp];
            }
        }
    cout<<position;
    }

    return 0; 
}