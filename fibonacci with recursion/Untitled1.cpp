#include<stdio.h>
int fibonacci(int);
int main(){
	int num3,fibo;
	printf("enter a no to get factorial");
	scanf("%d",&num3);
	for(i=0;)
	fibo=fibonacci(num3);
	printf("factorial of %d is %d",num3,fact);
	return 0;
}

int fibonacci(int num){
	
	if(num==1){
		return 1;
	}
	
	return num*factorial(num-1);
}
