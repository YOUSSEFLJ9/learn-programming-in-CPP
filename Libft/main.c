/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:38:39 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/03 21:33:09 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int main()
{
	char	src[20]= "this is good!";
	char	src1[20]= "this is good!";
	char	dst[30]  = "";
	char	dst1[30]= "";

	printf("ft_: %lu\t%s\n", ft_strlcpy(dst, src, 0), dst);
	printf("str: %lu\t%s\n", strlcpy(dst1, src1, 0), dst1);
	return (0);
}