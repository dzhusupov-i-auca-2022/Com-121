#include <stdio.h>
#include <stdbool.h>


int main(){
	char c = getchar();
	bool is_whitespace = false;
	if (' ' == c){
		is_whitespace = true;
}
	if('\t' == c){
		is_whitespace = true;
}
	if(is_whitespace){
	puts("Whitespace");
	}else {
		puts("Not a whitespace");
}
	return 0;
}

