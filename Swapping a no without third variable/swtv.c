#include<stdio.h>
int main(){
	int a,b;
	puts("enter a two no\n");
	scanf("%d %d",&a,&b);
	printf("Before swapping a:- %d b:- %d",a,b);
	b=a+b;
	a=b-a;
	b=b-a;
		printf("After swapping a:- %d b:- %d",a,b);
	return 0;
}
