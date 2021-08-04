/*
input:- {1,2,0,3,0,0,6,7,0}
output-{1,2,3,6,7,0,0,0,0}
*/
#include<stdio.h>
int main(){
	int arr[]={1,0,0,3,0,0,6,7,0},size=9,i,j,n,k;
	for(i=0;i<size;++i){
		for(k=0;k<size;++k){
		if(arr[k]==0){
			n=arr[k];
			for(j=k;j<size-1;++j){
			  arr[j]=arr[j+1];	
			}
			arr[j]=n;
		}
	}
	}
	for(i=0;i<size;++i){
		printf("%d ",arr[i]);
	}
	return 0;
}
