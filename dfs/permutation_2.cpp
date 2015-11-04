#include <stdio.h>
#include <string.h>

void display(char *str, int m) {
	int i = 0;
	for(; i < m; i++) {
		printf("%c ", *(str + i));
	}
	printf("\n");
}

void swap(char *str, int start, int end) {
	char tmp = *(str + start);
	*(str + start) = *(str + end);
	*(str + end) = tmp;
}

void permulation(char *str, int k, int m) {
	if(k == m)
		display(str, m);
	else {
		int i = 0;
		for(i = k; i < m; i++) {
			swap(str, i, k);
			permulation(str, k + 1, m);
			swap(str, i, k);
		}
	}
}

int main() {
	char str[] = "abc";
	permulation(str, 0, strlen(str) );
}
