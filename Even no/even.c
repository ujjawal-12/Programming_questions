#include<stdio.h>
int main(){
	int num,i;
	puts("enter the number that you want even no upto");
	scanf("%d",&num);
	puts("Even numbers are:-");
	for(i=1;i<=num;++i){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	return 0;
}
