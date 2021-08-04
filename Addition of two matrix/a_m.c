#include<stdio.h>
#define max 6
int main(){
	int m1[max][max],m2[max][max],m3[max][max],i,j,sum=0,k,r1,c1,r2,c2;
	printf("enter the no of row and column of first matrix\n");
	scanf("%d %d",&r1,&c1);
	printf("enter the no of row and column of second matrix\n");
	scanf("%d %d",&r2,&c2);
	for(i=0;i<r1;++i){
		for(j=0;j<c1;++j){
			printf("\nenter the item in first matrix [%d][%d]",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<r2;++i){
		for(j=0;j<c2;++j){
			printf("\nenter the item in second matrix [%d][%d]",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("first matrix\n");
	for(i=0;i<r1;++i){
		for(j=0;j<c1;++j){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	printf("second matrix\n");
	for(i=0;i<r2;++i){
		for(j=0;j<c2;++j){
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("\nAddition of two matrix is :-\n");
	for(i=0;i<r2;++i){
		for(j=0;j<c2;++j){
			m3[i][j]=m1[i][j]+m2[i][j];
		}
		printf("\n");
	}
	for(i=0;i<r2;++i){
		for(j=0;j<c2;++j){
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
