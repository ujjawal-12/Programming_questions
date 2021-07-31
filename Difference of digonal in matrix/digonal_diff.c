#include<stdio.h>
int main(){
	int mat1[10][10],sum1=0,sum2=0,n,i,j;
	printf("enter the no of row and column\n");
	scanf("%d",&n);
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			printf("\nenter in [%d][%d] :- ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			if(i==j){
				sum1=sum1+mat1[i][j];
			}
			if(i+j==n-1){
				sum2=sum2+mat1[i][j];
			}
		}
	}
	printf("sum of digonal is %d",abs(sum1-sum2));
	return 0;
}
