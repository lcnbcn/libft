
	// testear ft_isalpha

	int	ch;

	ch = '1';

	printf("\nEsta funcion retorna 1 si es un caracter, 0 si no.\n\nResultado: %i\n\n", ft_isalpha(ch));



	// testear ft_isdigit

	int dig;

	dig ='7';

	printf("\nEsta funcion retorna 1 si es un digito, 0 si no.\n\nResultado: %i\n\n", ft_isdigit(dig));



	// testear ft_isalnum

	int alphan;

	alphan ='7';

	printf("\nEsta funcion retorna 1 si es un alphanumerico, 0 si no.\n\nResultado: %i\n\n", ft_isalnum(alphan));


// testear ft_isascii

	int asc;

	asc  ='7';

	printf("\nEsta funcion retorna 1 si pertene a la tabla ASCII, 0 si no.\n\nResultado: %i\n\n", ft_isascii(asc));

int	main(void)
{
	// testear ft_isprint

	int print;

	print ='7';

	printf("\nEsta funcion retorna 1 si es printable, 0 si no.\n\nResultado: %i\n\n", ft_isprint(print));
}

int	main(void)
{
	// testear ft_strlen

	char	*str = "Esta string contiene 00  carecteres ";


	printf("\nEsta funcion retorna un intero que indica la longitud de una string.\n\nResultado: %zu\n\n", ft_strlen(str));
}

int	main(void)
{
	// testear ft_toupper

	int	ch  ='l';


	printf("\nEsta funcion retorna un caracter en mayuscula en caso que esta sea minuscula.\n\nResultado: %c\n\n", ft_toupper(ch));
}


int	main(void)
{
	// testear ft_lower

	int	ch  ='L';


	printf("\nEsta funcion retorna un caracter en mayuscula en caso que esta sea minuscula.\n\nResultado: %c\n\n", ft_lower(ch));
}

int	main(void)
{
	// testear ft_strchr

	char	*str = "Hello, hello";
	int	ch = 'o';


	printf("\nEsta funcion retorna un puntero al carácter encontrado en la string, o puntero nulo si no se encuentra dicho carácter.\n\nResultado: %s\n\n", ft_strchr(str, ch));
}

int	main(void)
{
	// testear ft_strrchr

	char	*str = "Hello, hello";
	int	ch = 'e';


	printf("\nEsta funcion retorna un puntero al carácter encontrado en la string, o puntero nulo si no se encuentra dicho carácter.\n\nResultado: %s\n\n", ft_strrchr(str, ch));
}


int	main(void)
{
	//testear ft_memset

	char	buffer[8];
	int	ch;
	size_t	len;
	char	*res;

	ch = 'b';
	len = 4;
	res = ft_memset(buffer, ch,len);

	printf("\nEsta funcion retorna su primer argumento.\n\nResultado: %s\n\n", res);

	return (0);
}


int	main(void)
{
	//testear bzero

	char	str[8];
	size_t	nbr;
	char	*res;

	nbr = 4;
	res = (char *)ft_bzero(str, nbr);

	printf("\nEsta funcion rellena de zeros la srting asignada.\
	\n\nResultado: %s\n\n", res);

	return (0);
}

int	main(void)
{
	const char	dst[20] = "destino";
	const char	src[20] = "fuente";
	size_t	nb;

	nb = 20;

	printf("\nEsta funcion copia n bytes de src para dst. \
			\nResultado: %s\n\n", ft_memcpy((void*)dst, (void *)src, nb));
	return (0);
}
