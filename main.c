#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	/*---- ft_memcpy ----*/
	char	dest1[14];
	char	dest2[14];
	char	*str1;

	str1 = strdup("wallas corno");
	
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

	/*----  ----*/
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
	return (0);
}