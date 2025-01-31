
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * This program translates written International Morse Code into an English phrase. The user inputs more code separated by spaces as command arguments. The command arguments are then translated into letters and put all in one line.
 *
 * @author     Nakasone, Bryan
 * @assignment ICS 212 Assignment 15
 * @date       October 23, 2023
 */

#define SIZE 36

const char *morse[SIZE] = {
	"0 -----",
	"1 .----",
	"2 ..---",
	"3 ...--",
	"4 ....-",
	"5 .....",
	"6 -....",
	"7 --...",
	"8 ---..",
	"9 ----.",
	"a .-",
	"b -...",
	"c -.-.",
	"d -..",
	"e .",
	"f ..-.",
	"g --.",
	"h ....",
	"i ..",
	"j .---",
	"k -.-",
	"l .-..",
	"m --",
	"n -.",
	"o ---",
	"p .--.",
	"q --.-",
	"r .-.",
	"s ...",
	"t -",
	"u ..-",
	"v ...-",
	"w .--",
	"x -..-",
	"y -.--",
	"z --..",
};

int main(int argc, char *argv[]) {

	// error checking

	char *argString = "./program";

	//checks if the first command line argument is "./program". If not, exit program
	if(strcmp(argv[0], argString) != 0) {
		return 1;
	}

	//checks that there are at least 2 command line arguments(including "./program") or else throw error
	if(argc < 2) {
		printf("Error: At least 2 command line arguments are expected, only 1 present. Enter Morse Code on the command line.\n");
	}

	//used for nested for loops
	int j = 0;
	int i = 0;
	//used to reference the morse codes
	char *string1 = '\0';
	const char *string2 = '\0';
	//loop through the command line input and store into string1 variable every loop
	for(i = 1; i < argc; i++) {
		string1 = argv[i];
		//loop through morse[] and store morse codes of each character in string 2 every loop to compare with command line arguments
		for(j = 0; j < SIZE; j++) {
			string2 = morse[j] + 2;
			//convert Morse Code to letter. If the morse codes match up then print out the character for that morse code
			if(strcmp(string1, string2) == 0) {
				printf("%c", morse[j][0]);
			}
		}
	} 
	printf("\n");

	return 0;
}