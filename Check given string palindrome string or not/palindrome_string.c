#include<stdio.h>
int main(){
	char nme[]={"radar"};
	char nme1[10];
	int i=0,k=0,flag=1;
	while(nme[i]!='\0'){
		++i;
	}
    for(--i;i>=0;--i){
    	nme1[k]=nme[i];
    	++k;
	}
	for(i=0;i<k;++i){
		if(nme1[i]!=nme[i]){
			flag=0;
		}
	}
  flag==1?printf("palindrome string"):printf("not palindrome string");
	return 0;
}
