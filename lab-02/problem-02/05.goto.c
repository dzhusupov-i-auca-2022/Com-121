#include <stdio.h>
#include <stdbool.h>


int main(){
	char c = getchar();
	bool is_whitespace = false;
	if (' ' != c){
		goto L0;
}
	is_whitespace = true;
L0:
	if('\t' != c){
		goto L1;
}
	is_whitespace = true;
L1:
	if(is_whitespace){
	puts("Whitespace");
	}else {
		puts("Not a whitespace");
}
	return 0;
}

