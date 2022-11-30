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


static char	*next_line(int fd, char *buffer, char *joiner)
{
	int		read_line;
	char	*tmp;

	read_line = 1;
	//read_line = read
	while (read_line != '\0')
	{
		read_line = read(fd, buffer, BUFFER_SIZE);
		if (read_line < 0)
			return (NULL);
		else if (read_line == 0)
			break;
		buf[read_line] = '\0';
		if (!joiner)
			joiner = 0;
		tmp = joiner;
		joiner = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr (buf, '\n'))
			break;
		//read_line = read(fd, buffer, BUFFER_SIZE);
	}
	return (tmp);
}

static char	*extraer(char *line)
{
	size_t		count;
	char	*tmp;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0' || line[1] == '\0')
		return (0);
	tmp = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (tmp == '\0')
	{
		free(tmp);
		tmp = NULL;
	}
	line[count + 1] = '\0';
	return (backup);
}

char	*get_next_line(int fd)
{
	char	*backup;
	char	*line;
	static char	*buffer;	

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buffer, 0 ) < 0)
		return (NULL)
	buffer = (char *)(malloc(sizeof(char) * (BUFFER_SIZE + 1)));
	if (!buffer)
		return (NULL);
	line =  next_line(fd, backup, buffer);
	free(backup);
	backup = NULL;
	if (!line)
		return (NULL);
	buffer = extractor(line);
	return (line);
}
