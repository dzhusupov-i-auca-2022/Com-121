#include <stdio.h>
int main(){
	puts("What is your name ?");
	char name[512];
	fgets(name , 512, stdin);
	printf("Hello, %s!\n", name);
	return 0;
}
