/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:50:17 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/29 14:00:10 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*fd = un entero
Esta funcion toma el archivo referenciado por el file descriptor 'fd'
y sin importar el BUFFER_SIZE dado lee e imprime en pantalla la primera
linea del archivo dado, con ayuda de la funcion read (ver man read). Asi,
cada vez que se ejecute la funcion devolvera la siguiente linea hasta 
terminar el archivo. 
Devuelve = la primera linea leida correspondiente o NULL si no hay nada
mas que leer o si ocurrio un error */

#include "get_next_line.h"





































char	*get_next_line(int fd)
{
	 char	*buffer;
	 static	char	line;


	if (fd == -1 || buffer == NULL || read(fd, buffer, 0 ) < 0)
		return (NULL)
	buffer = (char *)(malloc(sizeof(char) * (BUFFER_SIZE + 1)));
	if (!buffer)
	{
		return (NULL)
		free(buffer);
	}
	

