#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int s1len;

	i = 0;
	s1len = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[s1len + i] = s2[i];
		i++;
	}
	s1[s1len + i] = '\0';
	return (s1);
}