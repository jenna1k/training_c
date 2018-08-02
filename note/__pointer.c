#include <stdio.h>
#include <unistd.h>

void		pointer_test(int *a)
{
	int add;

	add = *a + 1;
	*a = add;
}

int			main(void)
{
	int a = 22;
	pointer_test(&a);
	printf("%d,%d,%p,%p", &a,a,&a,a);
	return (0);
}
