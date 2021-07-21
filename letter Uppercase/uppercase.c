#include<stdio.h>
#define max 10
int main(){
	char nme[max];
	int i;
	puts("enter a name");
	gets(nme);
    for(i=0;nme[i]!='\0';++i){
    	nme[i]=nme[i]-32;
	}
	puts("letter covert in uppercase");
	puts(nme);
	return 0;
}
