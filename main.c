
#include <stdio.h>
#include "libft.h"
#include <string.h>

int main()
{
		int i = 0;
		char *s = "IRiqsf qjmCv9Vd28zkQJ W0ndsghbKq4SD wYWH45uh76PEv9pL K50JDt 2WY8ipCOux Z80VX fRwDB5XC hsNnHXAUMt7Poz6 jnowapPm4FGZe 98SE30u Y0olZ 38Z465JVMTw9R iZOFymjSl ZL2GCl rQtv AzIbZFUpusJof3";
	char **s2 = ft_split(s, ' ');
		while (s2[i])
		{
			int j = 0;
			printf("%li\n",ft_strlen(s2[i]));
			while (s2[i][j])
			{
				write(1, &s2[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		s2	= ft_split2(s, ' ');
		i = 0;
		while (s2[i])
		{
			int j = 0;
			printf("%li\n", ft_strlen(s2[i]));
			while (s2[i][j])
			{
				write(1, &s2[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		return (0);
}
