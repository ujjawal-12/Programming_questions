#include<stdio.h>
int main(){
	int a=5,b;
	b=run(a);
	printf("sum is %d",b);
	return 0;
}

int run(int no){
int sum;
	if(no==1){
		return 1;
	}
	return (no+run(no-1));
	
}
