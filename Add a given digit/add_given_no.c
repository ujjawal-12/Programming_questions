#include<stdio.h>
int main(){
	int a=1345,x,y=0;
	while(a){
		x=a%10;
		y+=x;
		a=a/10;
	}
	printf("sum of %d no is %d",a,y);
	return 0;
}
