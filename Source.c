#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int func(char* str) {
	int i, g;
	for (i = 0; str[i] != '\n'; i++) {
			if ((str[i] < '0') || (str[i] > '9')) printf("%c", str[i]);
			else if (str[i] == '1') printf("one");
			else if (str[i] == '2') printf("two");
			else if (str[i] == '3') printf("three");
			else if (str[i] == '4') printf("four");
			else if (str[i] == '5') printf("five");
			else if (str[i] == '6') printf("six");
			else if (str[i] == '7') printf("seven");
			else if (str[i] == '8') printf("eight");
			else if (str[i] == '9') printf("nine");
			else if (str[i] == '0') printf("zero");
	}
}
int main() {
	char ch = 0;
	int v = 0, n = 5;
	char* str = (char*)malloc(n * sizeof(char));
	do {
		scanf("%c", &ch);
		str[v] = ch;
		v++;
		if (v == n - 2) {
			n *= 2;
			realloc(str, n * sizeof(char));
		}
	} while (ch != '\n');
	func(str);
}