/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:38:05 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/15 14:31:37 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef FDS
#  define FDS 1024
# endif

typedef struct s_list
{
	char			c;
	struct s_list	*next;
}	t_list;

void	remode_buffer(char *buffer, int index);
void	cpy_buff_to_lst(char *buffer, t_list **lst, int *is_space);
t_list	*ft_read_files(int fd);
char	*get_next_line(int fd);
void	ft_lst_add_creat(t_list **lst, char content);
char	*cpy_lst_array(t_list *lst);
void	clear(t_list *lst);
int		ft_lstlen(t_list *lst);

#endif