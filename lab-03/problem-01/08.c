#include <stdio.h>

int main() {
	unsigned int month;
	scanf("%u", &month);
	char *msg;

	switch(month){
		case 1: case 2: case 12:
			msg = "Winter";
			break;
		case 3: case 4: case 5:
			msg = "Spring";
			break;
		case 6: case 7: case 8:
			msg = "Summer";
			break;
		case 9: case 10: case 11:
			msg = "Fall";
			break;
		msg = "Invalid month number";
	}
	puts(msg);
	return 0;
}
