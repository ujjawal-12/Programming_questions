#include<stdio.h>
int main(){
	int num,total;
	puts("enter a number to finf factorial");
	scanf("%d",&num);
	total=fact(num);
	printf("factorial og given number is %d",total);
	return 0;
}

int fact(int num){
	
	if(num==1)
	   return 1;
	   
	return (num*fact(num-1));
}
