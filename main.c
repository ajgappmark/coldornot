/*
 *
 *	Coldornot -  A tool to convert temperatures.
 *	Created by Philippe Loctaux
 *
 *	Version 1.0
 *	License - GPL v2
 *
 */

// Libraries
#include <stdio.h>
#include <stdlib.h>

// Variables
int menuSwitch = 0;
int tempGave = 0;
int tempFinal = 0;

// main function
int main(int argc, char const *argv[]) {
    
    printf("Welcome to Coldornot.\n\n");
    menu();

    return 0;
}

// the menu of the app
int menu() {
	printf("--- Menu ---\n\n");
	printf("0. Quit\n");
	printf("1. Celsius to Fahrenheit\n");
	printf("2. Fahrenheit to Celsius\n");
	printf("3. Celsius to Kelvin\n");
	printf("4. Kelvin to Celsius\n");
	printf("5. Fahrenheit to Kelvin\n");
	printf("6. Kelvin to Fahrenheit\n");

	printf("\nWhat do you want to do?\t");
	scanf("%d", &menuSwitch);

	printf("\n");
	printf("\n");

	switch (menuSwitch) {

			case 1:
		CtF();
			break;

			case 2:
		FtC();
			break;

			case 3:
		CtK();
			break;

			case 4:
		KtC();
			break;

			case 5:
		FtK();
			break;

			case 6:
		KtF();
			break;

			default:
		quit();
			break;

	}
    
    return 0;
}

// Celsius to Fahrenheit
int CtF() {

	printf("--- Celsius to Fahrenheit ---\n\n");
	printf("Enter a temperature in Celsius to start.\n");
	printf("I'll give it in Fahrenheit.\n");

	scanf("%d", &tempGave);
	tempFinal = CtFalgo(tempGave);

	printf("%d Celsius equals %d Fahrenheit.\n", tempGave, tempFinal);
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



/*** Algorithms ***/


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

// End
