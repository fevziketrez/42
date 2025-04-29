#include <unistd.h>

void	print_board(int board[], int *total_count)
{
	char	c;
	int	i;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	*total_count += 1;
}

int	board_check(int board[], int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row)
			return (0);
		if (col - i == row - board[i] || col - i == board[i] - row)
			return (0);
		i += 1;
	}
	return (1);
}

void	next_queen(int board[], int col, int *total_count)
{
	int	row;

	if (col == 10)
	{
		print_board(board, total_count);
	}
	row = 0;
	while (row < 10)
	{
		if (board_check(board, col, row))
		{
			board[col] = row;
			next_queen(board, col + 1, total_count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	total_count;

	total_count = 0;
	next_queen(board, 0, &total_count);
	return (total_count);
}
