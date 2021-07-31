#include<stdio.h>
int main(){
	char arr[]="character",i,j,k;
	printf(" Original String is:-");
	puts(arr);
	for(i=0;arr[i]!='\0';++i){
		for(j=i+1;arr[j]!='\0';++j){
			if(arr[i]==arr[j]){
				for(k=j;arr[k]!='\0';++k){
					arr[k]=arr[k+1];
				}
				--j;
			}
		}
	}
	printf("After removing duplicate character\n");
	puts(arr);
	return 0;
}
