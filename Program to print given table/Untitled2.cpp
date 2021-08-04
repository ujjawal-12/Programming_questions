#include<stdio.h>
int main(){
	int num,i;
	printf("enter a no to display a table\n");
	scanf("%d",&num);
	for(i=1;i<=10;++i){
		printf("\n%d*%d=%d",num,i,(i*num));
	}
	return 0;
}
