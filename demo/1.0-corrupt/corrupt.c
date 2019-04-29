#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void win(void) {
	printf("We can leave this here, because it is never called.\n");
	printf("Our flag is safe.\n");

	printf("||~~~~~~~~~~|\n");
	printf("||   FLAG   |\n");
	printf("||~~~~~~~~~~|\n");
	printf("||\n");
	printf("||\n");
	printf("||\n");
	printf("||\n");
	printf("||\n");

	return;
}

int main(int argc, char** argv) {
    // setup local variables
	char team = 'A';
	char name[32];

    // Print
	printf("Halt! Who goes there!\n");

    // get user input, save to array
	gets(&name);

    // jump to function
	printf("Let me see if you're on the list, %s...\n",name);
	fflush(stdout);

	if (team == 'B') {
		win();
	}

	return EXIT_SUCCESS;
}
