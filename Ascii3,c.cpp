#include<stdio.h>

int main(){
	char name[50];
	int i=0;
	int sum =0;
	scanf("%s",name);
	
	while(name[i] != '\0'){
	
	printf("\nAscii value of %c is %d",name[i],name[i]);
	sum = sum + name[i];
	i++;
}
printf("\nsum of ascii valueof string is: %d\n",sum);

	return 0;
}
