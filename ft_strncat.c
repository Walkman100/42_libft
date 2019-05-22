#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	int s1len;

	i = 0;
	s1len = ft_strlen(s1);
	while (i < n && s2[i] != '\0')
	{
		s1[s1len + i] = s2[i];
		i++;
	}
	s1[s1len + i] = '\0';
	return (s1);
}