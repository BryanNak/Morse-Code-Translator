# Morse-Code-Translator
A simple International Morse Code translator that I developed for ICS 212.

This is a simple International Morse Code translator that I developed in C. The program takes in morse code input from the user using '.', '-', and '/' as dots, dashes, and space respectively. Each line of morse code is separated by a space to denote that the next character will be created. When the program is ran with a given input from the user, a single line of the translated code will be presented in English in the CLI.

Here is an example of translating the phrase "hello world" from morse code to CLI:

```
user:~$ ./program .... . .-.. .-.. --- / .-- --- .-. .-.. -..
user:~$ hello world
```

Despite being quite a simple program, I learned key concepts of creating a functional program. There are many cases which can break a program and I may not have discovered all of them for this program, but I did implement two error checks so that the first input of the command line argument has to be "./program" and second, that there are at least two command line arguments (including "./program") or else a error will be printed.

```c
//checks if the first command line argument is "./program". If not, exit program
	if(strcmp(argv[0], argString) != 0) {
		return 1;
	}

	//checks that there are at least 2 command line arguments(including "./program") or else throw error
	if(argc < 2) {
		printf("Error: At least 2 command line arguments are expected, only 1 present. Enter Morse Code on the command line.\n");
	}
```
Another key concept in coding are nested for loops which is used in this program to traverse through a morse code array containing the character associated with a line of morse code. At the time nested loops had been quite a difficult concept to wrap my head around but by implementing one into a tool which can be visually simpler to follow then just letters, the concept clicked a lot easier in my head. Here is a code snippet of the nested loop:
```c
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
```
<hr>
