/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:56:20 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/09 13:41:13 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
    int fd;
    char    *next_line;
    int i, j;

    fd = 0;
    fd = open ("arquivo_teste.txt", O_RDONLY);
    i = 0;
    j = 0;
    
    while (j < 10)
    {
        next_line = get_next_line(fd);
        printf("%s", next_line);
        free(next_line);
        if (i == 2)
            fd = -1;
        i++;
        j++;
    }

    return (0);
}