#include<stdio.h>
int fibo(int);
int main(){
	int num,i;
	printf("enter a no to how many term of fibonaci series u want");
	scanf("%d",&num);
	for(i=1;i<num;++i){
		printf("%d ",fibo(i));
	}
	return 0;
}
int fibo(int num){
	if(num==1 || num==2){
		return 1;
	}
	else{
		return (fibo(num-1)+fibo(num-2));
	}
}
