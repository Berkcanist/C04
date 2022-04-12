#include <stdio.h>
 int ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;

	return (len);
}

int main()
{
	char dene[]="denemeler";
	printf("%d",ft_strlen(dene));
	return 0;
}
