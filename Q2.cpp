/*자연수의합*/
#include<iostream>

int main(void){
	int i,j,sum=0;
	
	
	scanf("%d %d",&i,&j);
	for(int k=i; k<=j; k++){
		if(k==j){
			printf("%d = ",k);
		}
		else{
			printf("%d + ",k);
		}
		sum+=k;
	}
	printf("%d",sum);
	return 0;
}     
