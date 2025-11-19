#include <stdio.h>

void doThePrinting();
int globalVariable = 0;

int main() {
	int localVariable = 1;
	doThePrinting();
}

void doThePrinting() {
	printf("Hello World\n");
}
