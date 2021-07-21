#include<stdio.h>
int main(){
	int a=1345,x,y=0;
	printf("Before A is: %d",a);
	while(a){
		x=a%10;		
        y=y*10+x;
		a=a/10;
	}
printf("After A is: %d",y);
	return 0;
}
