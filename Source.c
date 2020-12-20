#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int once(char* str, int i) {
	if ((str[i - 1] == ' ' || i == 0) && (str[i + 1] == ' ' || str[i + 1] == '\n')) return 1;
}
void replacement(char* str, char* mas) {
	int i, g = 0, sm = 0, numb = 0;
	char* x[10];
	x[0] = "zero";
	x[1] = "one";
	x[2] = "two";
	x[3] = "three";
	x[4] = "four";
	x[5] = "five";
	x[6] = "six";
	x[7] = "seven";
	x[8] = "eight";
	x[9] = "nine";
	for (i = 0; str[i] != '\n'; i++) {
		for (numb = -1; numb != 10; numb++) {
			if ((str[i] < '0') || (str[i] > '9') || (int)(str[i] - '0') == numb && once(str, i) != 1) {
				sprintf(mas + g, "%c", str[i]);
				g++;
				break;
			}
			else if ((int)(str[i] - '0') == numb && once(str, i) == 1) {
				sprintf(mas + g, "%s", x[numb]);
				g += strlen(x[numb]);
				break;
			}
		}
	}
}
int strlen(char* mas) {
	int i = 0;
	for (i; mas[i] != '\0'; i++);
	return i;
}
int main() {
	printf("imput string: ");
	char str[1000];
	fgets(str, 1000, stdin);
	int len = strlen(str);
	int i = len * 5;
	char* mas = (char*)malloc(i * sizeof(char));
	if (len != 0) {
		replacement(str, mas);
		printf("Result: %s", mas);
	}
	else printf("empty string ");
	return 0;
	free(mas);
}