/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:57:27 by mdelos-s          #+#    #+#             */
/*   Updated: 2018/03/21 21:02:49 by mdelos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sort_params(char **argv, int a, int b, int c)
{
	char	*temp;

	while (a > 0)
	{
		b = 1;
		while (b < a)
		{
			while (argv[b + 1][c] == argv[b][c])
			{
				c++;
			}
			if (argv[b + 1][c] < argv[b][c])
			{
				temp = argv[b];
				argv[b] = argv[b + 1];
				argv[b + 1] = temp;
			}
			b++;
			c = 0;
		}
		a--;
	}
}

int		main(int argc, char **argv)
{
	int	a;
	int b;
	int c;

	a = argc - 1;
	b = 1;
	c = 0;
	ft_sort_params(argv, a, b, c);
	b = 1;
	while (b < argc)
	{
		ft_putstr(argv[b]);
		ft_putchar('\n');
		b++;
	}
	return (0);
}
