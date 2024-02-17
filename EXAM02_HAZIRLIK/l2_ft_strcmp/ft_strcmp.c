int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

// test

#include <stdio.h>

int main()
{
	char s[] = "serhat";
	char ss[] = "serhat";
	printf("%d", ft_strcmp(s,ss));
}
