/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:38:39 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/06 16:37:02 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	d(unsigned int k, char d)
{
	return (d + k);
}

int	main(void)
{
	char	(*k)(unsigned int, char);
	char	*dg = "this world is amazing";

	k = d;
	printf("%s\n", ft_strmapi(dg, k));
	return (0);
}

// int main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (0);

// 	printf("%d\n", contdel(av[1], av[2][0]));
// 	return (0);
// }