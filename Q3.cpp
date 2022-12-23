/*진약수의합*/
#include<iostream>

int main(void){
	int i,j,sum=1;
	
	scanf("%d",&j);
	
	printf("1 ");
	for(i=2;i<j;i++){
		if(j%i==0){
			printf("+ %d ",i);
			sum+=i;
		}
	}
	printf("= %d",sum);
	return 0;	
}
