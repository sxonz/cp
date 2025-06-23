#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int c,r,v,t,t2;
	c = (r = n % 2 ^ 1) * (n - 1);
	v = r * -2 + 1;
	t = n - c;
	t2 = c * 2 + 1;
	for (int i = n + 1; --i;t = n-(c+=v),t2=c*2+2) {
		for (;--t;)
			printf(" ");
		for (; --t2;)
			printf("*");
		printf("\n");
	}

}