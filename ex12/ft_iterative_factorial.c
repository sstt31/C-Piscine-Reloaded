/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:11:55 by sbadakh           #+#    #+#             */
/*   Updated: 2023/11/10 12:07:32 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb == 0)
		result = 1;
	else if (nb < 0 | nb >= 13)
		result = 0;
	else
	{
		i = 1;
		result = 1;
		while (i < nb)
		{
			result = result * (i + 1);
			i++;
		}
	}
	return (result);
}
