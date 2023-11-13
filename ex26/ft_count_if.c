/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:53:54 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/09 12:54:12 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	h;
	int	num;

	h = 0;
	num = 0;
	while (tab[h])
	{
		if (f(tab[h]) == 1)
			num++;
		h++;
	}
	return (num);
}
