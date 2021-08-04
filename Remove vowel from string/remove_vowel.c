#include<stdio.h>
int main(){
	int s[]={2,4,5,6,3},i;
	int min,min2;
	min=s[0];
	min2=s[0];
	for(i=i;i<5;++i){
		if(min>s[i]){
			min=s[i];
		}
	}
	for(i=i;i<5;++i){
		if(min2>s[i]){
			if(s[i]>min)
			min2=s[i];
		}
	}
	printf("%d %d",min,min2);
	return 0;
}
