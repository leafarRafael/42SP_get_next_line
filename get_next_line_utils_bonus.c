/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:38:03 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/19 13:06:57 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_lst_add_creat(t_list **lst, char content)
{
	t_list	*new_node;
	t_list	*temp;

	new_node = malloc (sizeof(t_list));
	if (!lst || !new_node)
		return ;
	new_node->c = content;
	new_node->next = NULL;
	if (!(*lst))
	{
		*lst = new_node;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
}

char	*cpy_lst_array(t_list *lst)
{
	char	*next_line;
	t_list	*temp;
	int		size;
	int		i;

	size = ft_lstlen(lst);
	next_line = malloc (sizeof(char) *(size +1));
	if (!next_line)
	{
		clear(lst);
		return (NULL);
	}
	i = 0;
	while (lst)
	{
		next_line[i] = lst->c;
		i++;
		temp = lst;
		lst = lst->next;
		free(temp);
	}
	next_line[size] = '\0';
	return (next_line);
}

void	clear(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = lst;
		lst = lst->next;
		free(temp);
	}
}

int	ft_lstlen(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
