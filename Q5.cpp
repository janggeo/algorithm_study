/*나이계산*/
#include<stdio.h>
#define current 19
using namespace std;

int main(void){
	freopen("5.txt","rt",stdin);
	char a[20];
	int age,temp;
	char sex,s;
	scanf("%s",&a);
	
	s = a[7];
	
	if(s=='1' || s =='2'){
		temp = (a[0]-48)*10+(a[1]-48);
		age = 100-temp+current+1;
	}
	
	if(s=='3' || s=='4'){
		temp = (a[0]-48)*10+(a[1]-48);
		age = current-temp+1;
	}
	
	if(s=='1' || s=='3'){
		sex='M';
	}
	
	if(s=='2' || s=='4'){
		sex='W';
	}
	
	printf("%d %c",age,sex);
	return 0;
	
}
