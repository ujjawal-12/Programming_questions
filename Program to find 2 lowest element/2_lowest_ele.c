#include<stdio.h>
int main(){
	int arr[]={10,13,2,1,16,68},len=6,min,i,mini;
	min=arr[0];
	mini=arr[0];
	for(i=1;i<=6;++i){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	for(i=1;i<=6;++i){
		if(mini>arr[i]){
			if(arr[i]>min){
				mini=arr[i];
			}
		}
	}
	printf("minimum element is:- %d",min);
		printf("\n 2 minimum element is:- %d",mini);
	return 0;
}
