#include<stdio.h>
int main(){
	char s[]="cattac";
	int inc=0,i,j;
	for(i=0;s[i]!='\0';++i){
		for(j=0;s[j]!='\0';++j){
			if(s[i]==s[j]){
				++inc;
			}
		}
		if(inc==1){
			printf("%c",s[i]);
			break;
		}
		inc=0;
	}
	return 0;
}
