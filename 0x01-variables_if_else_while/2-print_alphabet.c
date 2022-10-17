/*
 * File: 2-print_alphabet.c
 * Auth: Chimmeri
 */

#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase.
 *
 * Return: Always 0.
 */ 

int main(void)
{
	char letter;

	for (letter = 'n'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
