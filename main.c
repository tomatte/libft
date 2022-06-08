#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	/*---- ft_memcpy ----*/
	char	dest1[14];
	char	dest2[14];
	char	*str1;

	str1 = strdup("wallas cornooo");
	
	ft_memcpy(dest1, str1, 3);
	memcpy(dest2, str1, 3);
	printf("Mine: %s\n", dest1);
	printf("Original: %s\n", dest1);
	/*--------------------*/

	/*---- ft_bzero ----*/
	char	*p;
	char	name[] = "Jamelao Matador de Onça";
	char	*p2;
	char	name2[] = "Jamelao Matador de Onça";

	p = &name[9];
	p2 = &name2[9];
	ft_bzero(p, 13);
	ft_bzero(p2, 13);
	printf("Mine: %s\n", name);
	printf("Original: %s\n", name2);
	/*--------------------*/

	/*---- ft_memset.c ----*/
	char	m_str1[50];
	char	m_str2[50];

	strcpy(m_str1,"This is string.h library function");
	strcpy(m_str2,"This is string.h library function");
	//original
	memset(m_str1,'$',7);
	puts(m_str1);

	//minha
	ft_memset(m_str2,'$',7);
	puts(m_str2);
	/*-----------------------*/

	/*---- ft_memmove.c ----*/
    char *string1;
    char *string2;

    string1 = strdup("abcdefgh");
    string2 = string1 + 4;
	printf("str2: %s\n", string2);
	//
    ft_memmove(string2, string1, 5);
    printf("%s\n", string2);

	//--
	char    source[] = "Hello, World!";
    char    source2[] = "Hello, World!";
    char    desti[14];
    char    desti2[14];

    memmove(desti, source, 10);
    desti[13] = '\0';
    ft_memmove(desti2, source2, 10);
    desti2[13] = '\0';
    printf("%s\n", desti);
    printf("%s\n", desti2);
	/*----------------------*/

	/*-------ft_strlcpy------*/
	char juvenal[] = "coronel";
	char	destiny[5];

	char juvenal2[] = "coronel";
	char	destiny2[5];

	strlcpy(destiny2, juvenal2, 4);
	ft_strlcpy(destiny, juvenal, 4);
	printf("\nstrlcpy\nmine %s\n", destiny);
	printf("original: %s\n", destiny2);
	/*----------------------*/

	/*------ft_memchr.c------*/
	char	lero[] = "beterraba";
	char	c1;
	char	l = 'r';
	if (ft_memchr(lero, l, 6))
		c1 = *((char *) ft_memchr(lero, l, 6));
	else
		c1 = '\0';

	char	lero2[] = "beterraba";
	char	c2;
	if (memchr(lero2, l, 6))
		c2 = *((char *) memchr(lero2, l, 6));
	else
		c2 = '\0';
	printf("\nft_memchr.c\n");
	printf("word: %s\nmine letter: %c\toriginal letter: %c\n", lero, c1, c2);
	/*----------------------*/

	/*-------ft_isalpha-----*/

	/*----------------------*/
	return (0);
}
