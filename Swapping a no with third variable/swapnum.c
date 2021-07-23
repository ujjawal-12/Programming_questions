#include<stdio.h>
int main(){
	int a,b,c;
	puts("enter a two no\n");
	scanf("%d %d",&a,&b);
	printf("Before swapping a :- %d b:- %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swapping a:- %d b:- %d",a,b);
	return 0;
}
