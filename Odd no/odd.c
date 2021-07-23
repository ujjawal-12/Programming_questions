#include<stdio.h>
int main(){
	int num,i;
	puts("enter a number you want a odd no upto");
	scanf("%d",&num);
	puts("Odds no are:-");
	for(i=1;i<=num;++i)
     {
     	if(i%2!=0)
		 printf("%d\n",i);
	 }
   return 0;
}
