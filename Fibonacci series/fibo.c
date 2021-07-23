#include<stdio.h>
int main(){
	int n1=0,n2=1,i,num,n=0;
	puts("enter a number you want fibonacci series upto");
	scanf("%d",&num);
	for(i=0;i<num;++i){
		printf("%d\n",n);
		n=n1+n2;
		n2=n1;
		n1=n;
		
	}
	return 0;
}
