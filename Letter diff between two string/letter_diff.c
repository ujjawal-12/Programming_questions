#include<stdio.h>
int main(){
	char arr[15];
	char arr1[15];
	int i,j=0;
	printf("enter a string 1\n");
	scanf("%[^\n]s",arr);
	printf("\nenter a string 2\n");
	fflush(stdin);
	scanf("%[^\n]s",arr1);
	for(i=0;arr[i]!='\0';++i){
		if(arr[i]!=arr1[i]){
			++j;
		}
	}
	printf("\ndiff beteen two string is %d",j);
	
	return 0;
}
