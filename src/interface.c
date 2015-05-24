/*
 *
 *	interface.c - Coldornot
 *	Created by Philippe Loctaux
 *
 *
 *	License - GPL v2
 *
 */


// Libraries
#include <stdio.h>
#include <stdlib.h>

// Variables
int tempGave = 0;
int tempFinal = 0;


// Celsius to Fahrenheit
int CtF() {

	printf("--- Celsius to Fahrenheit ---\n\n");
	printf("Enter a temperature in Celsius to start.\n");
	printf("I'll give it in Fahrenheit.\n");

	scanf("%d", &tempGave);
	tempFinal = CtFalgo(tempGave);

	printf("%d Celsius equals %d Fahrenheit.\n", tempGave, tempFinal);

	if(tempFinal <= 50) {
		printf("It's cold!\n");
	}

	if(tempFinal > 50 && 68 >= tempFinal) {
		printf("It's warm!\n");
	}

	if(68 < tempFinal) {
		printf("It's hot!\n");
	}

	return 0;
}

// Fahrenheit to Celsius
int FtC() {

	printf("--- Fahrenheit to Celsius ---\n\n");
	printf("Enter a temperature in Fahrenheit to start.\n");
	printf("I'll give it in Celsius.\n");

	scanf("%d", &tempGave);
	tempFinal = FtCalgo(tempGave);

	printf("%d Fahrenheit equals %d Celsius.\n", tempGave, tempFinal);

	if(tempFinal <= 10) {
		printf("It's cold!\n");
	}

	if(tempFinal > 10 && 20 >= tempFinal) {
		printf("It's warm!\n");
	}

	if(20 < tempFinal) {
		printf("It's hot!\n");
	}

	return 0;
}

// Celsius to Kelvin
int CtK() {

	printf("--- Celsius to Kelvin ---\n\n");
	printf("Enter a temperature in Celsius to start.\n");
	printf("I'll give it in Kelvin.\n");

	scanf("%d", &tempGave);
	tempFinal = CtKalgo(tempGave);

	printf("%d Celsius equals %d Kelvin.\n", tempGave, tempFinal);

	if(tempFinal <= 283) {
		printf("It's cold!\n");
	}

	if(tempFinal > 283 && 293 >= tempFinal) {
		printf("It's warm!\n");
	}

	if(293 < tempFinal) {
		printf("It's hot!\n");
	}

	return 0;
}

// Kelvin to Celsius
int KtC() {

	printf("--- Kelvin to Celsius ---\n\n");
	printf("Enter a temperature in Kelvin to start.\n");
	printf("I'll give it in Celsius.\n");

	scanf("%d", &tempGave);
	tempFinal = KtCalgo(tempGave);

	printf("%d Kelvin equals %d Celsius.\n", tempGave, tempFinal);

	if(tempFinal <= 10) {
		printf("It's cold!\n");
	}

	if(tempFinal > 10 && 20 >= tempFinal) {
		printf("It's warm!\n");
	}

	if(20 < tempFinal) {
		printf("It's hot!\n");
	}

	return 0;
}

// Fahrenheit to Kelvin
int FtK() {

	printf("--- Fahrenheit to Kelvin ---\n\n");
	printf("Enter a temperature in Fahrenheit to start.\n");
	printf("I'll give it in Kelvin.\n");

	scanf("%d", &tempGave);
	tempFinal = FtKalgo(tempGave);

	printf("%d Fahrenheit equals %d Kelvin.\n", tempGave, tempFinal);

	if(tempFinal <= 283) {
		printf("It's cold!\n");
	}

	if(tempFinal > 283 && 293 >= tempFinal) {
		printf("It's warm!\n");
	}

	if(293 < tempFinal) {
		printf("It's hot!\n");
	}

	return 0;
}

// Kelvin to Fahrenheit
int KtF() {

	printf("--- Kelvin to Fahrenheit ---\n\n");
	printf("Enter a temperature in Kelvin to start.\n");
	printf("I'll give it in Fahrenheit.\n");

	scanf("%d", &tempGave);
	tempFinal = KtFalgo(tempGave);

	printf("%d Kelvin equals %d Fahrenheit.\n", tempGave, tempFinal);

	if(tempFinal <= 50) {
		printf("It's cold!\n");
	}

	if(tempFinal > 50 && 68 >= tempFinal) {
		printf("It's warm!\n");
	}

	if(68 < tempFinal) {
		printf("It's hot!\n");
	}

	return 0;
}

// quit the app
int quit() {

	printf("--- Quit ---\n\n");
	printf("This program was created by Philippe Loctaux.\n");
	printf("http://loctauxphilippe.github.io/\n\n");
	printf("You can get the source code of this app on Github!\n");
	printf("https://github.com/loctauxphilippe/colrornot/\n\n");
	printf("Goodbye! Have a nice day!\n");
	return 0;
}


/* algos */

// Celsius to Fahrenheit
int CtFalgo() {

	return 1.8*tempGave+32;
}

// Fahrenheit to Celsius
int FtCalgo() {

	return (tempGave-32)/1.8;
}

// Celsius to Kelvin
int CtKalgo() {

	return tempGave+273.15;
}

// Kelvin to Celsius
int KtCalgo() {

	return tempGave-273.15;
}

// Fahrenheit to Kelvin
int FtKalgo() {

	return (tempGave+459.67)/1.8;
}

// Kelvin to Fahrenheit
int KtFalgo() {

	return tempGave*1.8-459.67;
}
