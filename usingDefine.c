#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

void main() {
	int area;

	area = LENGTH * WIDTH;
	printf("value of area : %d", area);
	printf("%c", NEWLINE);

	printf("Length\t*\tWidth\t=\tarea\t= %d", area);
}
