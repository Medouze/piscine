#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "rush.h"

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

char *get_file_content(char *filename)
{
	int fd;
	char *buffer;
	int bytesread;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (NULL);
	}
	buffer = (char *)malloc(1024 * 10);
	if (!buffer)
	{
		ft_putstr("Dict Error\n");
		close(fd);
		return (NULL);
	}
	bytesread = read(fd, buffer, 1024 * 10 - 1);
	if (bytesread == -1)
	{
		ft_putstr("Dict Error\n");
		free(buffer);
		close(fd);
		return (NULL);
	}
	buffer[bytesread] = '\0';
	close(fd);
	return (buffer);
}

char *format_file(char *str)
{
	int i;
	int j;
	char *dst;

	i = 0;
	j = 0;
	dst = (char *)malloc(strlen(str) + 1);
	if (!dst)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ' && !(str[i] == '\n' && str[i - 1] == '\n'))
			dst[j++] = str[i];
		i++;
	}
	dst[j] = '\0';
	return (dst);
}

void ft_split(t_num *dict, char *file)
{
	int i;
	int j;
	int count;
	// char key[100];
	// char val[100];
	char *key = (char *)malloc(100);
	char *val = (char *)malloc(100);

	i = 0;
	count = 0;
	while (file[i] != '\0')
	{
		j = 0;
		while (file[i] != ':' && file[i])
			key[j++] = file[i++];
		key[j] = '\0';
		i++;
		j = 0;
		while (file[i] != '\n' && file[i])
			val[j++] = file[i++];
		val[j] = '\0';
		i++;
		dict[count].key = ft_strdup(key);
		dict[count].value = ft_strdup(val);
		count++;
	}
	dict[count].key = NULL;
	dict[count].value = NULL;
}

int parse_dict(t_num *dict)
{
	char *filename;
	char *file;
	char *formatted_file;

	filename = "numbers.dict";
	file = get_file_content(filename);
	if (!file)
		return (0);
	formatted_file = format_file(file);
	free(file);
	if (!formatted_file)
		return (0);
	ft_split(dict, formatted_file);
	free(formatted_file);
	return (1);
}

// int main(void)
// {
// 	t_num *dict = (t_num *)malloc(1000);
// 	parse_dict(dict);
// 	for (int i = 0; i < 41; i++)
// 	{
// 		ft_putstr(dict[i].key);
// 		write(1, " : ", 3);
// 		ft_putstr(dict[i].value);
// 		write(1, "\n", 1);
// 	}

// 	return (0);
// }
