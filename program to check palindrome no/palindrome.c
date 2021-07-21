#include<stdio.h>
int main(){
	int a=102,x,y=0;
	int b=a;
	while(a){
		x=a%10;
		y=y*10+x;
		a=a/10;
	}
	if(b==y)
	   printf("given no is palindrome no a=%d,y=%d",b,y);
	else
	   printf("not palindrome no");
	   
	return 0;
}
