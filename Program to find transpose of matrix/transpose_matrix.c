#include<stdio.h>
#define max 5
int main(){
	int a[max][max],a2[max][max],i,j,r,c;
	printf("enter the no of row and column of matrix\n");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;++i){
		for(j=0;j<c;++j){
				printf("\nenter the item in matrix [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix are\n");
	for(i=0;i<r;++i){
		for(j=0;j<c;++j){
				printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	printf("transpose of matrix is:-\n");
	for(i=0;i<c;++i){
		for(j=0;j<r;++j){
			a2[i][j]=a[j][i];	
		}
	}
	for(i=0;i<c;++i){
		for(j=0;j<r;++j){
				printf("%d ",a2[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
