#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void func(char* str, char* mas) {
	int i, g=0;
	for (i = 0; str[i] != '\n'; i++) {
		if ((str[i] < '0') || (str[i] > '9')) {
			sprintf(mas+g, "%c", str[i]);
			g++;
		}
		else if (str[i] == '1') {
			sprintf(mas+g, "%s", "|one|");
			g = g + 5;
		}
		else if (str[i] == '2') {
			sprintf(mas + g, "%s", "|two|");
			g = g + 5;
		}
		else if (str[i] == '3') {
			sprintf(mas + g, "%s", "|three|");
			g = g + 7;
		}
	    else if (str[i] == '4') {
			sprintf(mas+g, "%s", "|four|");
			g = g + 6;
		}
		else if (str[i] == '5') {
			sprintf(mas+g, "%s", "|five|");
			g = g + 6;
		}
		else if (str[i] == '6') {
			sprintf(mas+g, "%s", "|six|");
			g = g + 5;
		}
		else if (str[i] == '7') {
			sprintf(mas+g, "%s", "|seven|");
		    g = g + 7;
		}
	    else if (str[i] == '8') {
			sprintf(mas+g, "%s", "|eight|");
			g = g + 7;
		}
		else if (str[i] == '9') {
			sprintf(mas+g, "%s", "|nine|");
			g = g + 6;
		}
		else if (str[i] == '0') {
			sprintf(mas+g, "%s", "|zero|");
			g = g + 6;
		}
	}
}
int main() {
	char str[1000];
	fgets(str, 1000, stdin);
	char mas[1000];
	func(str, mas);
	printf("%s", mas);
	return 0;
}