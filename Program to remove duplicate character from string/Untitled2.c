#include<stdio.h>
#define len 1000
int main() {
    char s[]="i am good";
    char s1[10],s2[10];
    int i,j,k;
    printf("%s\n",s);
    printf("enter a string to replace\n");
    scanf("%s",s1);
    printf("enter a string to replace with\n");
    scanf("%s",s2);
    j=0;
    for(i=0;s[i]!='\0';++i){
    	if(s2[j]==s[i]){
    		for(k=0;s1[k]!='\0';++k){
    			
    			s[i]=s1[k];
    			++i;
			}
			break;
		}
	}
	puts(s);
    return 0;
}
