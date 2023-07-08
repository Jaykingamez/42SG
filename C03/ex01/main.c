#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char *argv[])
{
	char *one = argv[1];
	char *two = argv[2];
	
	int store = ft_strncmp(one, two, 20);
	printf("%d", store);
}
