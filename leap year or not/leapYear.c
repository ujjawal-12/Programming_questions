#include<stdio.h>
int main(){
	int a;
	printf("enter the year to check leap year or not");
	scanf("%d",&a);
	if(a%400==0){
		puts("given number is leap year");
	}
	else if(a%100==0){
		puts("given number is not leap year");
	}
	else if(a%4==0){
		puts("given number is leap year");
	}
	else{
		puts("given number is not leap year");
	}
	return 0;
}
