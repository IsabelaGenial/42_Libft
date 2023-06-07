

#include "libft.h"

static int	delimiter_count(char const *s, char c)
{
	size_t	counter;
	size_t	index;

	counter = 1;
	index = 0;
	while (s[index])
		if (s[index++] == c && s[index] != c)
			counter++;
	return (counter);
}

static size_t	ft_substrlen(char *start, char c)
{
	size_t	counter;

	counter = 0;
	while (*start != c && *start++)
		counter++;
	return (counter);
}

static char	**ft_insertstr(char **array, char *string, char c, size_t delimiter)
{
	size_t	index;

	index = 0;
	while (delimiter--)
	{
		array[index++] = ft_substr(string, 0, ft_substrlen(string, c));
		if (ft_strchr(string, c) != NULL)
			string = ft_strchr(string, c);
		while (*string == c && *string)
			string++;
	}
	return (array);
}

char	**ft_split2(char const *s, char c)
{
	size_t	delimiter;
	char	*string;
	char	**array;

	string = ft_strtrim(s, &c);
	if (!string)
		return (NULL);
	if (!*string)
	{
		free(string);
		return (ft_calloc(1, sizeof(char *)));
	}
	delimiter = delimiter_count(string, c);
	array = ft_calloc(delimiter + 1, sizeof(char *));
	array = ft_insertstr(array, string, c, delimiter);
	free(string);
	return (array);
}
