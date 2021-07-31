#include<stdio.h>
int main(){
	int len=10,i,j,num;
	int arr[]={2,4,6,8,3,9,10,22,32,21};
	printf("Element in list before sorted\n");
	for(i=0;i<len;++i){
		printf("%d\t",arr[i]);
	}
	for(i=0;i<len;++i){
		for(j=i+1;j<len;++j){
			if(arr[i]>arr[j]){
				num=arr[j];
				arr[j]=arr[i];
				arr[i]=num;
			}
		}
	}
	printf("\nElement in list after sorted\n");
	for(i=0;i<len;++i){
		printf("%d\t",arr[i]);
	}
	return 0;
}
