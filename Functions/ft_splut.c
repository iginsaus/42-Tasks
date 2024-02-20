#include "libft.h"

char **ft_split(char const *s, char c)
{
	char **arr;
	size_t i;
	size_t	j;
	size_t k;
	size_t count;

  if (!s)
  {
    return (NULL);
  }

  count = 0;
  i = 0;
  while (s[i])
  {
    if (s[i] != c)
	{
      count++;
      while (s[i] && s[i] != c)
	  {
        i++;
      }
    }
	else
	{
      i++;
    }
  }

  arr = (char **)malloc(sizeof(char *) * (count + 1));
  if (!arr)
  {
    return (NULL);
  }

  i = 0;
  j = 0;
  while (s[i])
  {
    if (s[i] != c)
	{
      k = i;
      while (s[i] && s[i] != c)
	  {
        i++;
      }
      arr[j] = ft_substr(s, k, i - k);
      if (!arr[j])
	  {
        while (j > 0)
		{
          free(arr[j - 1]);
          j--;
        }
        free(arr);
        return (NULL);
      }
      j++;
    }
	else
	{
      i++;
    }
  }
	arr[count] = NULL;
	return arr;
}
/*
int	main(void)
{
	char	*s = "Hola, mundo, hola";
	char	**arr;
	int		i;

	arr = ft_split(s, ',');
	if (arr == NULL)
	{
		printf("Error allocating memory for array\n");
		return (1);
	}
	i = 0;
	while (arr[i])
	{
		printf("Subcadena %d: %s\n", i, arr[i]);
		i++;
	}
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/
