#include <stdio.h>
int main() {
	struct a{
		char *str;
		struct a *ptr;
	};
	static struct a arr[] = {
		{"Niranjan", arr + 2},
		{"Praveen", arr},
		{"Ashish", arr+1}
	};

	struct a *p[3];
	int i;

	for(i = 0; i <= 2; i++)
		p[i] = arr[i].ptr;
	printf("%s\n", p[0] -> str);
	printf("%s\n", (*p) -> str);
	printf("%s\n", (**p));
	return 0;
}
