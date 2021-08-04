/*
  input:- aabaccd
  output:-a3b1c2d1
*/
#include<stdio.h>
#define max 30
int main(){
	char arr[max],let;
	int i,j,k,inc;
	printf("Enter a String\n");
	scanf("%[^\n]s",arr);
     for(i=0;arr[i]!='\0';++i){
     	inc=1;
     	let=arr[i];
     	for(j=i+1;arr[j]!='\0';++j){
     		if(arr[j]==let){
     			++inc;
     			for(k=j;arr[k]!='\0';++k){
     				arr[k]=arr[k+1];
				 }
				 --j;
			 }
		 }
		 printf("\n %c %d",arr[i],inc);
	 }
	return 0;
}
