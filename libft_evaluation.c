/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_evaluation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:00:29 by lucida-s          #+#    #+#             */
/*   Updated: 2022/12/07 21:14:45 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libreria

#include "eval.h"

// main isalpha

gcc  ft_isalpha.c -Werror -Wextra -Wall -o isalpha && ./isalpha

int	main(void)
{
	printf(AMARILLO_T"\nisalpha\n");
	printf("Lo que retorna si es verdadero:%d\n", isalpha(97));
	printf("Lo que retorna si es falso:%d\n", isalpha(48));

	printf(AMARILLO_T"\nft_isalpha\n");
	printf("Lo que retorna si es verdadero:%d\n", ft_isalpha(97));
	printf("Lo que retorna si es falso:%d\n", ft_isalpha(48));
	return (0);
}

/* ************************************************************************** */

#include "eval.h"

// main isdigit

gcc  ft_isdigit.c -Werror -Wextra -Wall -o isdigit && ./isdigit

int	main(void)
{
	printf(AMARILLO_T"\nisdigit\n");
	printf("Lo que retorna si es verdadero:%d\n", isdigit(50));
	printf("Lo que retorna si es falso:%d\n", isdigit(65));

	printf(AMARILLO_T"\nft_isdigit\n");
	printf("Lo que retorna si es verdadero:%d\n", ft_isdigit(50));
	printf("Lo que retorna si es falso:%d\n", ft_isdigit(65));
	return (0);
}

/* ************************************************************************** */

#include "eval.h"

// main isalnum

gcc  ft_isalnum.c libft.a -Werror -Wextra -Wall -o isalnum && ./isalnuim

int	main(void)
{
	printf(AMARILLO_T"\nisalnum\n");
	printf("Retorna verdadero si es una letra:%d\n", isalnum(50));
	printf("Retorna verdadero si es un numero:%d\n", isalnum(65));
	printf("Retorna falso si no es alphanumerico:%d\n", isalnum(31));

	printf(AMARILLO_T"\nft_isalnum\n");
	printf("Retorna verdadero si es una letra:%d\n", ft_isalnum(50));
	printf("Retorna verdadero si es un numero:%d\n", ft_isalnum(65));
	printf("Retorna falso si no es alphanumerico:%d\n", ft_isalnum(31));
	return (0);
}

/* ************************************************************************** */

#include "eval.h"

// main isascii

gcc  ft_isascii.c -Werror -Wextra -Wall -o isascii && ./isascii

int	main(void)
{
	printf(AMARILLO_T"\nisascii\n");
	printf("Lo que retorna si es verdadero:%d\n", isascii(48));
	printf("Lo que retorna si es falso:%d\n", isascii(128));

	printf(AMARILLO_T"\nft_isascii\n");
	printf("Lo que retorna si es verdadero:%d\n", ft_isascii(48));
	printf("Lo que retorna si es falso:%d\n", ft_isascii(128));
	return (0);
}

/* ************************************************************************** */

#include "eval.h"

// main isprint

gcc  ft_isprint.c -Werror -Wextra -Wall -o isprint && ./isprint

int	main(void)
{
	printf(AMARILLO_T"\nisprint\n");
	printf("Lo que retorna si es verdadero:%d\n", isprint(48));
	printf("Lo que retorna si es falso:%d\n", isprint(31));

	printf(AMARILLO_T"\nft_isprint\n");
	printf("Lo que retorna si es verdadero:%d\n", ft_isprint(48));
	printf("Lo que retorna si es falso:%d\n", ft_isprint(31));
	return (0);
}

/* ************************************************************************** */

#include "eval.h"

// main toupper

gcc  ft_toupper.c -Werror -Wextra -Wall -o toupper && ./toupper

int	main(void)
{
	char	min;
	char	may;

	min = 97;
	may = 90;
	printf(AMARILLO_T"\ntoupper\n");
	printf("Retorna una letra Mayuscula de una minuscula en este caso la letra %c:%c\n", min, toupper(min));
	printf("Retorna el mismo argumento en el este cazo la letra %c: %c\n", may, toupper(may));

	printf(AMARILLO_T"\nft_toupper\n");
	printf("Retorna una letra Mayuscula de una minuscula en este caso la letra %c:%c\n", min, ft_toupper(min));
	printf("Retorna el mismo argumento en el este cazo la letra %c: %c\n", may, ft_toupper(may));
}

/* ************************************************************************** */

#include "eval.h"

// main tolower

gcc  ft_tolower.c -Werror -Wextra -Wall -o tolower && ./tolower

int	main(void)
{
	char	min;
	char	may;

	min = 99;
	may = 67;
	printf(AMARILLO_T"\ntolower\n");
	printf("Retorna una letra minuscula de una mayuscula en este caso la letra %c:%c\n", may, tolower(may));
	printf("Retorna el mismo argumento en el este cazo la letra %c: %c\n", min, tolower(min));

	printf(AMARILLO_T"\nft_tolower\n");
	printf("Retorna una letra minuscula de una mayuscula en este caso la letra %c:%c\n", may, ft_tolower(may));
	printf("Retorna el mismo argumento en el este caso la letra %c: %c\n", min, ft_tolower(min));
}

/* ************************************************************************** */


#include "eval.h"

// main strlen

gcc  ft_strlen.c -Werror -Wextra -Wall -o strlen && ./strlen

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello42";
	s2 = "supercalifragilisticoespialidoso";
	printf(AMARILLO_T"\nstrlen\n");
	printf("La string con la palabra %s\ntiene una La longitud de %zu cadenas de bytes.", s1, strlen(s1));
	printf("La string con la palabra %s\ntiene una La longitud de %zu cadenas de bytes.", s2, strlen(s2));
	
	printf(AMARILLO_T"\nft_strlen\n");
	printf("La string con la palabra %s\ntiene una La longitud de %zu cadenas de bytes.", s1, ft_strlen(s1));
	printf("La string con la palabra %s\ntiene una La longitud de %zu cadenas de bytes.", s2, ft_strlen(s2));

}

/* ************************************************************************** */

#include "eval.h"

// main strchr

gcc  ft_strchr.c -Werror -Wextra -Wall -o strchr && ./strchr

int	main(void)
{
	char	*s;
	int	c;
	int	c2;

	s = "Hello42hello";
	c = 52;
	c2 = 83;

	printf("\n\nstrchr retorna un puntero al carácter encontrado en str.\nO puntero nulo si no se encuentra dicho carácter.");

	printf(AMARILLO_T"\n\nstrchr"RESET_COLOR);
	printf(MAGENTA_T("\nEjemplo1:\n\n"COLOR_RESET"En '%s' el caracter '%c' es el caracter a ser encontrado retornando: %s", s, c, strchr(s, c));
	printf("\n\nEjemplo2:\n\nEl caracter '%c' no se encuentra en la string '%s' retornando: %s", c2, s, strchr(s, c2));

	printf(AMARILLO_T"\n\nft_strchr"RESET_COLOR);
	printf("\nEjemplo1:\n\nEn '%s' el caracter '%c' es el caracter a ser encontrado retornando: %s", s, c, ft_strchr(s, c));
	printf("\n\nEjemplo2:\n\nEl caracter '%c' no se encuentra en la string '%s' retornando: %s", c2, s, ft_strchr(s, c2));

}
