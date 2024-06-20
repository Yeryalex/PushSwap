/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:49:40 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/19 19:50:47 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/*int	ft_wordlen(char *str)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i])
		{
			counter++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	return (counter);
}*/
int	ft_wordlen(char *str)
{
	int i;
	int counter;

	i = 0;
	counter = 0;

	while(str[i])
	{

		while(str[i] == ' ')
			i++;
		counter++;
		while(str[i] && str[i] != ' ')
			i++;
		str = &str[i];
		i = 0;
	}
	return (counter);
}

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_substr(char *str,int start,int len)
{
	int i;
	char *ptr;
	
	i = 0;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	while (i < len)
	{
		ptr[i] = str[start + i];
		i++
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char *str)
{
	char **ptr;
	int	wordlen;
	int 	i = 0;
	int	j;
	int start;

	wordlen = ft_wordlen(str);

	ptr = malloc(sizeof(char *) * (wordlen + 1));
	if (!ptr)
		return (0);
	j = 0;
	while (str[i] && j < wordlen)
	{
		while (str[i] && str[i] == ' ')
			i++;
		start = i;
		while (str[i] && str[i] != ' ')
			i++;
		if (start < i)
		{
			ptr[j] = ft_substr(str, start, i - start);
			j++;
		}
	}
	ptr[j] = 0;
	return (ptr);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char **word;
		word = ft_split(argv[1]);
		int i = 0;
		while (word[i])
		{
			printf("%s\n", word[i]);
			i++;
		}
	}
	else
		printf("\n");
	return (0);
}
