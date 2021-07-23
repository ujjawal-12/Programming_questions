#include<stdio.h>
#define max_len 20
int main(){
	char arr[max_len],item;
	int i,j,inc=0;
	printf("enter a string\n");
	scanf("%s",arr);
	fflush(stdin);
	printf("enter a character to be search in string\n");
	scanf("%c",&item);
	for(i=0;arr[i]!='\0';++i){
		if(arr[i]==item){
			++inc;
		}
	}
	printf("%c occur %d times in given string",item,inc);
	return 0;
}
