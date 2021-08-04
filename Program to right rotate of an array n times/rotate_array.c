/*
input:- {2,4,1,6,8,9},k=2
output:-{8,9,2,4,1,6}
*/
#include<stdio.h>
int main(){
	int arr[]={2,4,1,6,8,9},size=6,i,j,k=2,temp;
	printf("Before rotation\n");
	for(i=0;i<size;++i){
		printf("%d ",arr[i]);
	}
	for(j=0;j<k;++j){
	temp=arr[size-1];
	for(i=size-1;i>=1;--i){
	   arr[i]=arr[i-1];	
	}
	arr[0]=temp;
}
	printf("\nAfter rotation\n");
	for(i=0;i<size;++i){
		printf("%d ",arr[i]);
	}
	return 0;
}
