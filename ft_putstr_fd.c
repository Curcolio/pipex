/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgermain <dgermain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:49:58 by dgermain          #+#    #+#             */
/*   Updated: 2013/12/30 21:42:08 by dgermain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s == NULL)
		s = "(null)";
	write(fd, s, ft_strlen(s));
}
