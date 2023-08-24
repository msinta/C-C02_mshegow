/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/20 17:29:45 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/24 14:11:36 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	if (size == 0)
	{
		while (src[src_length] != '\0')
		{
			src_length++;
		}
		return (src_length);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	return (src_length);
}

// int	main(void)
// {
// 	char	source[] = "Codam is Codam";
// 	char	destination[15];
// 	int		copied;
// 	int		copied1;

// 	copied = ft_strlcpy(destination, source, 0);
// 	copied1 = strlcpy(destination, source, 0);

// 	printf("Source: %s\n", source);
// 	printf("Destination: %s\n", destination);
// 	printf("Copied: %u characters\n", copied);
// 	printf("Copied: %u characters\n", copied1);
// }
