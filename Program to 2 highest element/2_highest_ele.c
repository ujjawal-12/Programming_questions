#include<stdio.h>
int main(){
	int arr[]={23,43,85,11,65,92},len=6,max,i,maxi;
	max=arr[0];
	maxi=arr[0];
	for(i=1;i<=6;++i){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	for(i=1;i<=6;++i){
		if(maxi<arr[i]){
			if(arr[i]<max){
				maxi=arr[i];
			}
		}
	}
	printf("maximum element is:- %d",max);
		printf("\n 2 maximum element is:- %d",maxi);
	return 0;
}
