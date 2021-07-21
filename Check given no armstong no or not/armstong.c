#include<stdio.h>
int main(){
	int a=153,y=0,x;
	int c=a;
	while(a){
		x=a%10;
		y=y+x*x*x;
		printf("%d\n",y);
		a/=10;
	}
	if(c==y)
	 printf("yes it is armstong no");
	 else
	  printf("not a armstong");
	return 0;
}
