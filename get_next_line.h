/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:38:05 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/09 10:13:53 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

typedef struct s_list
{
	char            c;
	struct s_list   *next;
	
}   t_list;

char    *get_next_line(int fd);
t_list	*ft_read_files(int fd);
char    *cpy_lst_array(t_list *lst);
void    ft_lst_add_creat(t_list **lst, char content);
void	cpy_buff_to_lst(char *buffer, t_list **lst, int *is_space);
int     ft_lstlen(t_list *lst);
void	clear(t_list *lst);

#endif