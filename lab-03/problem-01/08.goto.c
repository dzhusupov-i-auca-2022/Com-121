#include <stdio.h>

int main(void)
{
        unsigned int month;
        scanf("%u",&month);
        char *msg;
	void* branch_table [] = {
		&&L5, &&L0 , &&L0, &&L2 ,&&L2, &&L2, &&L3 , &&L3 , &&L3 , &&L4, &&L4 , &&L4 ,&&L0
	};
	if(month > 12){
		goto L5;
	}
	goto *branch_table[month];
L0:
	msg  = "Winter";
	goto L6;
L2: 
	msg  = "Spring";
        goto L6;
L3: 
	msg = "Summer";
	goto L6;
L4: 
	msg = "Fall";
	goto L6;
L5:
	msg = "Invalid month number";
L6:
	puts(msg);

        return 0;
}
