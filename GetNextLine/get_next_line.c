/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:50:17 by tsantiag          #+#    #+#             */
/*   Updated: 2022/12/03 10:56:08 by tsantiag         ###   ########.fr       */
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

static char	*next_line(int fd, char *buffer, char *backup)
{
	int		read_line;
	char	*temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buffer, BUFFER_SIZE);
		if (read_line == -1)
			return (0);
		else if (read_line == 0)
			break ;
		buffer[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		temp = backup;
		backup = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (backup);
}

static char	*extraer(char *line)
{
	size_t	count;
	char	*tmp;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0' || line[1] == '\0')
		return (0);
	tmp = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*tmp == '\0')
	{
		free(tmp);
		tmp = NULL;
	}
	line[count + 1] = '\0';
	return (tmp);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buffer;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	line = next_line(fd, buffer, backup);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	backup = extraer(line);
	return (line);
}
