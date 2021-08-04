/*
input:- [2,3,5,2,4,3]
output:-[2,3,5,4]
*/
#include<stdio.h>
int main(){
	int arr[]={2,3,5,2,4,3},i,j,n=6,flag;
	for(i=0;i<n;++i){
		flag=1;
		for(j=i-1;j>=0;--j){
			if(arr[i]==arr[j]){
				flag=0;
			}
		}
		if(flag){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
