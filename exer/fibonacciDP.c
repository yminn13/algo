#include <stdio.h>

#define	N	500

int main (void) {

	setbuf (stdout, NULL);

	unsigned int i, n;
	unsigned long* fibo_table;

	scanf ("%d", &n);

	if (n == 0 || n == 1) return n;

	fibo_table = (unsigned long*)malloc(sizeof(unsigned long) * (N+1));
	fibo_table[0] = 0;
	fibo_table[1] = 1;

	for (i = 2; i <= n; i++) {
		fibo_table[i] = fibo_table[i-1] + fibo_table[i-2];
		printf ("%d + %d = %d\n", fibo_table[i-2], fibo_table[i-1], fibo_table[i]);
	}

	printf ("result : %d\n", fibo_table[n]);

	free (fibo_table);

	return 0;
}
