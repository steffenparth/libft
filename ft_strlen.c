/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:38:23 by sparth            #+#    #+#             */
/*   Updated: 2023/10/11 20:40:48 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char length[] = "hello";
// 	printf("%lu", ft_strlen(length));
// return (0);
// }