#include<stdio.h>
int main(){
	int a,b,i,j,flag;
	puts("enter a interval to get a prime no upto");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;++i){
		if(i==1||i==0){
			continue;
		}
		flag=1;
		for(j=2;j<=i/2;++j){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1){printf("\n%d",i);}
		
	}
	return 0;
}
