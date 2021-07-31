#include<stdio.h>
#define max_len 20
int main(){
	int arr[max_len],i,num;
	float sum=0;
	puts("enter the no of element");
	scanf("%d",&num);
	puts("Enter the element in list");
	for(i=0;i<num;++i){
		scanf("%d",&arr[i]);
	}
	i=0;
	while(i<num){
		sum=sum+arr[i];
	   ++i;
	}
	printf("Average is %.2f",(sum/num));
	return 0;
}
