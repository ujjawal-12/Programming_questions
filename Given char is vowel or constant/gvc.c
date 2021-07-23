#include<stdio.h>
int main(){
	char letter;
	printf("enter a charracter to find it is vowel or constant\n");
	scanf("%c",&letter);
	if(letter=='a'|| letter=='e'||letter=='i' ||letter=='o' ||letter=='u'){
		printf("Given character is vowel");
	}
	else{
		printf("given character is constant");
	}
	return 0;
}
