#include<bits/stdc++.h>
using namespace std;

int main(){

    int Test;
	scanf("%d",&Test);	

	for(int i=1;i<=Test;i++){
		int j;
		char websites[10][100]; // List of websites 
		int v[10]; //List of values of websites
		int highest=0; //highest value
		for(j=0;j<10;j++) //Separate in two lists
			scanf("%s %d",websites[j],&v[j]);
		for(j=0;j<10;j++) //Search highest value
			if(v[j]>highest)
				highest=v[j];

		printf("Case #%d:\n",i); 

		for(j=0;j<10;j++)// print website with the highest value
			if(v[j]==highest)
				printf("%s\n",websites[j]);
	}
     return 0; 
}