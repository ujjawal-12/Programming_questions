#include<stdio.h>
int main(){
	int len=8,i,sum=0,arr[]={2,3,6,4,8,9,10,1};
	for(i=0;i<len;++i){
	  sum=sum+arr[i];
	}
	printf("Sum of all element is:- %d",sum);
	return 0;
}
