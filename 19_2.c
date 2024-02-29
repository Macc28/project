#include <stdio.h>

void printMenu() {
	printf("NO\t\t\tNAME\t\t\tPRICE\t\t\tQUANTIFY\t\tADDED DATE\n");
	printf("1\t\t\tbanana\t\t\t10000\t\t\t100\t\t\t11/11/2024\n");
	printf("2\t\t\tbanana\t\t\t10000\t\t\t100\t\t\t11/11/2024\n");	
	printf("3\t\t\tbanana\t\t\t10000\t\t\t100\t\t\t11/11/2024\n");
}

void disAllFruits() {
	printf("banana");
}

void roleMenu() {
}

void process() {
	int choice;
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch(choice) {
		case 1: {
			disAllFruits();
			break;
		}
		case 10: {
			roleMenu();
			break;
		}
		case 11: {
			break;
		}
		default: {
			printf("Invarible, please input again!");
			process();
		}
			
			
	}
}

int main() {
	printMenu();
	process();
}
