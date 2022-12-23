/*나이차이*/
#include<iostream>

using namespace std;

int main(void){
	freopen("4.txt","rt",stdin);
	
	int i,temp,min,max,num;
	
	cin>>num;
	
	for(i=0;i<num;i++){
		cin>>temp;
		if(i==0){
			min=temp;
			max=temp;
			continue;
		}
		if(temp<min){
			min=temp;
			continue;
		}
		if(temp>max){
			max=temp;
			continue;
		}
	}	
	
	printf("%d",max-min);
	return 0;
}
