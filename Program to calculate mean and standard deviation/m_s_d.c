#include<stdio.h>
#include<math.h>
int main(){
	int arr[]={34,88,32,12,10},n=5,i;
	
	float mean,sum=0,variance,var=0,std_deviation;
	for(i=0;i<n;++i){
		sum+=arr[i];
	}
	mean=sum/n;
	for(i=0;i<n;++i){
		var+=pow((arr[i]-mean),2);
	}
	variance=var/n;
	std_deviation=sqrt(variance);
	printf("\nMean is:- %.2f",mean);
	printf("\nvariance is:- %.2f",variance);
	printf("\nstandard devation is :- %.2f",std_deviation);
	return 0;
}
