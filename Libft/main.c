/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:38:39 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/01 13:36:45 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
/*
int	main(void)
{
	char	b[] = "this is g";
	char	t[10];
	char	d[10];
	
	char	s[] = "this is g";
	size_t	c;
	int		y;
	
	c = 12;
	ft_memcpy(d, s, c);
	printf("d = %s\n", d);
	memcpy(t, b, c);
	printf("t = %s\n", t);
		
	memmove(t, b, c);
	
	
	
	return (0);
}
*/
int	main(void)
{
    char	src[] = "Hello, World!";
    char	dest[]= "Hello, World!";
    char	de[]= "Hello, World!";
    size_t	n = 5;

	/*ft_memcpy(src, src + 5, n);
    printf("Copied string: %s\n", src);
	//printf("Copied string: %s\n", memmove(dest , src, n));
	
		memcpy(src, src+2, 3);
		memmove(dest, dest+2, 3);
		ft_memcpy(de, de + 2, 3);
		printf("%s\n", src);
		printf("%s\n", dest);
		printf("%s\n", de);
		*/
	
    return 0;
}