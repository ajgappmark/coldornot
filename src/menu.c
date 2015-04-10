/*
 *
 *	menu.c - Coldornot
 *	Created by Philippe Loctaux
 *
 *
 *	License - GPL v2
 *
 */

// Libraries
#include <stdio.h>
#include <stdlib.h>

int menuSwitch = 0;

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
