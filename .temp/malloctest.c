#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int 	main(void)
{
	const char *str1;
	char *str2;
	size_t	size;

	str1 = "string uno";
	size = strlen(str1);
	char str3
	[strlen(str1 + 1)];

	str2 = malloc(size + 1);
	if (!str2)
		return (0);
	
	size_t  i;
	
	i = 0;
	while (i < size)
	{
	    str2[i] = str1[i];
	    str3[i] = str1[i];
	    if (!str2[i])
	    {
	        free(str2);
	        return (0);
	    }
	    i++;
	}
	str2[i] = '\0';
	str3[i] = '\0';
	
	printf("%s\n", str2);
	printf("%s\n", str3);
	
	return (0);
}
