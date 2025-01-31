program: morseCodeTranslator.o
	gcc morseCodeTranslator.o -o program -lm

morseCodeTranslator.o: morseCodeTranslator.c
	gcc -c morseCodeTranslator.c
