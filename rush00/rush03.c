char	ft_putchar(char c);

int	g_counterAltura;
int	g_counterB;
int	g_counterSpace;

void	firstLine(int	largura)
{
	g_counterB = 2;
	ft_putchar('A');
	while (g_counterB < largura)
	{
		ft_putchar('B');
		++g_counterB;
	}
	if (largura > 1)
	{
		ft_putchar('C');
	}
}

void	midLine(int largura, int altura)
{
	g_counterAltura = 2;
	while (g_counterAltura < altura)
	{
		ft_putchar('B');
		g_counterSpace = 2;
		while (g_counterSpace < largura)
		{
			ft_putchar(' ');
			++g_counterSpace;
		}
		if (largura > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		++g_counterAltura;
	}
}

void	rush(int x, int y)
{
	firstLine(x);
	ft_putchar('\n');
	if (y > 1)
	{
		midLine(x, y);
		firstLine(x);
		ft_putchar('\n');
	}
}
