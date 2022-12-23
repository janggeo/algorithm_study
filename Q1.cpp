#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i,j,sum=0;
	scanf("%d %d",&i,&j);
	
	for(int k=1;k<=i;k++){
		if(k%j==0){
			sum+=k;
		}
	}
	printf("%d",sum);
	return 0;
}
