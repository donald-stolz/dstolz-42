/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 09:36:15 by dstolz            #+#    #+#             */
/*   Updated: 2019/03/19 09:36:18 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

static t_opt	*ft_new_flags(void)
{
	t_opt *new;

	new = malloc(sizeof(t_opt));
	new->l_op = false;
	new->a_op = false;
	new->r_op = false;
	new->t_op = false;
	new->rec_op = false;
	return (new);
}

static t_bool	ft_check_flag(const char *arg)
{
	int	i;

	i = 0;
	if (arg[i] != '-')
		return (false);
	i++;
	while (arg[i])
	{
		if (arg[i] == 'R' || arg[i] == 'a' || arg[i] == 'l' || arg[i] == 'r' ||
			arg[i] == 't')
			i++;
		else
			return (false);
	}
	return (true);
}

t_opt			*ft_get_flags(const char **argv)
{
	size_t	i;
	t_opt	*result;

	result = ft_new_flags();
	i = 1;
	while (argv[i] && *(*(argv + i) + 0) == '-')
	{
		if (ft_check_flag(argv[i]))
		{
			result->rec_op = ft_strchr(argv[i], 'R') ? true : result->rec_op;
			result->a_op = ft_strchr(argv[i], 'a') ? true : result->a_op;
			result->l_op = ft_strchr(argv[i], 'l') ? true : result->l_op;
			result->r_op = ft_strchr(argv[i], 'r') ? true : result->r_op;
			result->t_op = ft_strchr(argv[i], 't') ? true : result->t_op;
			i++;
		}
		else
		{
			ft_putstr("ft_ls: illegal option -- - \n");
			ft_putstr("usage: ft_ls [-Ralrt] [file ...]");
			exit(1);
		}
	}
	return (result);
}

t_dir			*ft_get_args(char **argv, t_opt *opts)
{
	size_t	i;
	t_dir	*curr;
	char	*path;
	size_t	tmp;

	i = 1;
	while (argv[i] && *(*(argv + i) + 0) == '-')
		i++;
	if (argv[i])
	{
		path = ft_parse_path(argv[i], "./");
		curr = ft_new_dir(ft_strdup(argv[i]), path, opts, &tmp);
		i++;
		while (argv[i])
		{
			path = ft_parse_path(argv[i], "./");
			ft_push(&curr, ft_new_dir(ft_strdup(argv[i]), path, opts, &tmp));
			i++;
		}
	}
	else
		curr = ft_new_dir(ft_strdup("./"), ft_strdup("./"), opts, &tmp);
	return (curr);
}
