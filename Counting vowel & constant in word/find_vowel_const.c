#include<stdio.h>
#define max_len 20
int main(){
	char arr[max_len],vow[10],con[10];
	int i=0,vowel=0,cons=0;
    puts("enter the letter to find no of vowel and constatnt exits init");
    gets(arr);
    while(arr[i]!='\0'){
    	if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
    		vow[vowel]=arr[i];
			++vowel;
		}
		else{
			con[cons]=arr[i];
			++cons;
		}
		++i;
	}
	printf("In given letter %s \n no of vowel is:- %d (%s)\n constatnt is:- %d (%s)",arr,vowel,vow,cons,con);
	return 0;
}
