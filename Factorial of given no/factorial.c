#include<stdio.h>
int main(){
	int num,fact=1,n;
	printf("enter a no for factorial\n");
	scanf("%d",&num);
	n=num;
	while(num){
		fact=fact*num;
		--num;
	}
	printf("factorial of %d number is %d",n,fact);
	return 0;
}
