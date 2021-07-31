#include<stdio.h>
int main(){
	int len=8,i,arr[]={2,3,6,4,8,9,10,1};
	for(i=1;i<len;++i){
		if(arr[0]>arr[i]){
			arr[0]=arr[i];
		}
	}
	printf("Smallest element is:- %d",arr[0]);
	return 0;
}
