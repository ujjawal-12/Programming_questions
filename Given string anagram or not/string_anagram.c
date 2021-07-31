#include<stdio.h>
int main(){
	char str1[]="cat";
	char str2[]="acj";
	char ch; int i,j,len1=0,len2=0,flag=1;
	i=0;
	while(str1[i]!=0){
		++len1;
		++i;
	}
	i=0;
	while(str2[i]!=0){
		++len2;
		++i;
	}
	if(len1==len2){
	for(i=0;i<len1;++i){
		for(j=i+1;j<len1;++j){
			if(str1[i]>str1[j]){
				ch=str1[j];
				str1[j]=str1[i];
				str1[i]=ch;
			}
			if(str2[i]>str2[j]){
				ch=str2[j];
				str2[j]=str2[i];
				str2[i]=ch;
			}
		}
	}
	for(i=0;i<len1;++i){
		if(str1[i]!=str2[i]){
			flag=0;
			break;
		}
	}
	
}
    else{
    	flag=0;
	}
if(flag==1){
	printf("string is anagram");
}
else{
	printf("string is not anagram");
}
	return 0;
}
