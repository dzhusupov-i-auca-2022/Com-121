#include <stdio.h>

int main(void)
{
        unsigned long month;
        scanf("%lu",&month);
        char *msg;
	char *winter = "Winter";
	char *spring = "Spring";
	char *summer = "Summer";
	char *fall = "Fall";
	char *invalid = "Invalid month number";

	asm(		
				"cmp  $12 , %1;"
				"ja L4;"
			
				"mov branch_table(,%1,8), %%rax;"
				"jmp *%%rax;"
			"L0:"
				"mov %2, %0;"
				
				"jmp L5;"
			"L1:"
				"mov %3, %0;"
                                
                                "jmp L5;"
			"L2:"
				"mov %4,%0;"
                                "jmp L5;"
			"L3:"
				"mov %5, %0;"
                                
                                "jmp L5;"
			"L4:"
				"mov %6, %0;"
                                "jmp L5;"

			"branch_table:"
				".quad L4;"
				".quad L0;"
				".quad L0;"
				".quad L1;"
				".quad L1;"
				".quad L1;"
				".quad L2;"
				".quad L2;"
				".quad L2;"
				".quad L3;"
				".quad L3;"
				".quad L3;"
				".quad L0;"

			"L5:"
			: "=m"(msg)
			: "r"(month),
			"r"(winter),
			"r"(spring),
			"r"(summer),
			"r"(fall),
			"r"(invalid)
			: "rax"
				);

	puts(msg);
        return 0;
}
