#include<stdio.h>
int main(){
	int i=0,j;
char nme[]={"ujjawal"};
char rev[10];
while(nme[i]!='\0'){
	++i;
}
for(j=0;nme[j]!='\0';j++){
	--i;
	rev[j]=nme[i];
}
for(j=0;j<7;j++){
	printf("%c",rev[j]);
}
return 0;
}
