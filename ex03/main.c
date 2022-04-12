#include <stdio.h>
int ft_space(char *str, int *c)
{
	int count;
	int i;

	i=0;
	count = 1;
	while((str[i]>=9 &&str[i]<=13) || str[i]==32)
		i++;
	while(str[i]==43 || str[i]==45)
	{
		if(str[i]== 45)
			count*= -1;
		i++;
	}
	*c=i;
	return (count);
}

int	ft_atoi(char *str)
{
	int a;
	int b;
	int d;
	
	d =  ft_space(str, &a);
	b=0;
	while(str[a] && str[a]>=48&&str[a]<=57)
	{
		b*=10;
		b+=(str[a]-48);
		a++;
	}
	b*=d;
	return (b);
}
int main(void)
{
	char *s = " ---+-+1234ab567";
	printf("%d", ft_atoi(s));
}
