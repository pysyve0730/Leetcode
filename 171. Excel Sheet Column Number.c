#include <stdio.h>
#include <string.h>

int titleToNumber(char* columnTitle) {
	int size = strlen(columnTitle);
	int i = 0;
	int j = 0;
	long base = 1;
	int count = 0;
	int sum = 0;
	while (j < size) {
		for (i = 'A'; i < 'A'+26; i++) { //ASCII大寫從A(65)開始
			count++;
			if (*(columnTitle + size - 1 - j)==i) {
				sum += count*base;

			}

		}


		base *= 26;//視為26進制(LSB為字母*26^0)
		j++;
		count = 0;

	}
	return sum;
}


