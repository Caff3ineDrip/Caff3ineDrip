/*
 | Easy format string CTF challenge
 | The aim is to write a null to a variable you have the address of
 | compile with 'gcc source.c -o format_string -Wall -m32'
 | by pasteBin for the COMP3441 Security course
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *	   ____                    __        __      _             *	
 *	  / __/__  ______ _  ___ _/ /_  ____/ /_____(_)__  ___ _   *	
 *	 / _// _ \/ __/  ' \/ _ `/ __/ (_.-/ __/ __/ / _ \/ _ `/   *	
 *	/_/  \___/_/ /_/_/_/\_,_/\__/ /___/__/ _/ /_/_//_/\_, /    *	
 *	                                                 /___/     *	
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

void do_the_format(void);

int main(int argc, char *argv[]){
	printf(
"   ____                    __        __      _            	\n"
"  / __/__  ______ _  ___ _/ /_  ____/ /_____(_)__  ___ _  	\n"
" / _// _ \\/ __/  ' \\/ _ `/ __/ (_.-/ __/ __/ / _ \\/ _ `/  	\n"
"/_/  \\___/_/ /_/_/_/\\_,_/\\__/ /___/__/ _/ /_/_//_/\\_, /   	\n"
"                                                 /___/    	\n"
	);
	fflush(stdout);
	do_the_format();
	return EXIT_SUCCESS;
}

void do_the_format(void){
	char format_string[101];
	char change_this = 0x41;
	printf("Once thought to be just a lazy short cut,\n"
		"actually leads to remote code execution!\n\n"
		"A pointer to the flag is on the stack\n"
		"format string> ");
	fflush(stdout);
	char *flag = "COMP3441{info_leaks_are_really_scary}";
	fgets(format_string, 99, stdin);
	format_string[100] = '\0';
	printf(format_string); // I feel dirty typing this
	fflush(stdout);
}
