#include <stdio.h>

int main (void) {
	char c = 'A';
	short st = 32767;
	int n = 100;
	float f = 100.0f;
	double d = 100.0;
	long l = 100;
	long int li = 100;
	long long int lli = 100;

	printf("char : %c %lubyte\n", c, sizeof(c));
	printf("short : %d %lubyte\n", st, sizeof(st));
	printf("int : %d %lubyte\n", n, sizeof(n));
	printf("float : %f %lubyte\n", f, sizeof(f));
	printf("double : %f %lubyte\n", d, sizeof(d));
	printf("long : %ld %lubyte\n", l, sizeof(l));
	printf("long int : %ld %lubyte\n", li, sizeof(li));
	printf("long long int : %ld %lubyte\n", lli, sizeof(lli));

	return 0;
}
