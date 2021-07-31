#include<stdio.h>
int addAllDigit(int);
int main(){
	int num=9;
	if(num<10)
	printf("%d",num);
	else
	printf("sum is %d ",addAllDigit(num));
	return 0;
}
int addAllDigit(int num){
	int sum,n,x;
	n=num;
	if(num<10)
	return num;
	else{
		sum=0;
	while(n){
		x=n%10;
		sum=sum+x;
		n/=10;	
	}
	return (sum+addAllDigit(sum));
  }
}
