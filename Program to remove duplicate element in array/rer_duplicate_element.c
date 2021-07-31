#include<stdio.h>
int main(){
	int arr[]={2,13,16,13,28,40,40},len=7,i,j,k;
	printf("Before removing duplicate element\n");
	for(i=0;i<len;++i){
		printf("%d ",arr[i]);
	}
	for(i=0;i<len;++i){
		for(j=i+1;j<len;++j){
			if(arr[i]==arr[j]){
				for(k=j;j<len;++j){
					arr[j]=arr[j+1];
				}
				--len;
				--j;
			}
		}
	}
	
	printf("\nAfter remove duplicate element is:- ");
	for(i=0;i<len;++i){
		printf("%d ",arr[i]);
	}
	return 0;
}
