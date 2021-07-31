#include<stdio.h>
int main(){
	int len=8,i,even=0,odd=0;
	int arr[]={2,3,4,5,6,7,8,9};
	for(i=0;i<len;++i){
		if(arr[i]%2==0){
			even+=arr[i];
		}
		else{
			odd+=arr[i];
		}
	}
	printf("Sum of odd no in list is %d\nSum of even no in list is %d",odd,even);	
	return 0;
}
