#include<stdio.h>
int main(){
	int n1,n2,inc=1,max,min;
	printf("enter the two no to find lcm\n");
	scanf("%d %d",&n1,&n2);
	max=n1>n2?n1:n2;
	min=n1<n2?n1:n2;
		while(1){
			if(max%min==0){
				printf("lcm of two no is %d",max);	
				break;
			}
			max*=inc;
			++inc;
		}
	return 0;
}
