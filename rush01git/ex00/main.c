#include <stdio.h>
void	comb(int *p);
void	mk_row(int (*map)[4], int *comb, int row);
int		mk_map(int *left, int *right, int *map, int *top, int *bottom, int row);
void    print_map(int (*map)[4]);
int	    check_col(int (*map)[4], int *comb, int col);
int     check_map(int *map, int *top, int *bottom, int col);

void	mk_row(int (*map)[4], int *comb, int row)
{
    int i;
    
    i = 0;
    while (i < 4)
    {
        *(map[row] + i) = *(comb + i);
        i++;
    }
    return ;
}
void	mk_col(int (*map)[4], int *comb, int col)
{
    int i;
    
    i = 0;
    while (i < 4)
    {
        *(map[i] + col) = *(comb + i);
        i++;
    }
    return ;
}

int     check_map(int *map, int *top, int *bottom, int col)
{
    int combs[24][6] = {{1, 4, 4, 3, 2, 1}, {1, 3, 4, 1, 3, 2}, {1, 3, 4, 3, 1, 2}, {1, 3, 4, 2, 3, 1}, {1, 2, 4, 1, 2, 3}, {1, 2, 4, 2, 1, 3}, {2, 1, 3, 2, 1, 4}, {2, 1, 3, 1, 2, 4}, {2, 2, 1, 4, 2, 3}, {2, 2, 2, 4, 1, 3}, {2, 2, 3, 4, 1, 2}, {2, 2, 3, 2, 4, 1}, {2, 2, 3, 1, 4, 2}, {2, 2, 2, 1, 4, 3}, {2, 3, 1, 4, 3, 2}, {2, 3, 2, 4, 3, 1}, {2, 3, 3, 4, 2, 1}, {3, 2, 2, 3, 4, 1}, {3, 2, 1, 3, 4, 2}, {3, 2, 1, 2, 4, 3}, {3, 1, 2, 3, 1, 4}, {3, 1, 2, 1, 3, 4}, {3, 1, 1, 3, 2, 4}, {4, 1, 1, 2, 3, 4}};
	int i;
	
	i = 0;
	while(i < 24)
	{
		if (left[row] == combs[i][0] && right[row] == combs[i][1])
		{
			mk_col(map, &combs[i][2], col);
			if (row < 4)
			{
				mk_map(left, right, map, top, bottom, row + 1);
			}
			if (row == 3)
			{
				if(check_map( map, top, bottom, 0) == 1)
				{
					printf("hello\n");
					print_map(map);
					return (1);
				}
			}
		}

		i++;
	}
}



int	mk_map(int *left, int *right, int *map, int *top, int *bottom, int row)
{
	int combs[24][6] = {{1, 4, 4, 3, 2, 1}, {1, 3, 4, 1, 3, 2}, {1, 3, 4, 3, 1, 2}, {1, 3, 4, 2, 3, 1}, {1, 2, 4, 1, 2, 3}, {1, 2, 4, 2, 1, 3}, {2, 1, 3, 2, 1, 4}, {2, 1, 3, 1, 2, 4}, {2, 2, 1, 4, 2, 3}, {2, 2, 2, 4, 1, 3}, {2, 2, 3, 4, 1, 2}, {2, 2, 3, 2, 4, 1}, {2, 2, 3, 1, 4, 2}, {2, 2, 2, 1, 4, 3}, {2, 3, 1, 4, 3, 2}, {2, 3, 2, 4, 3, 1}, {2, 3, 3, 4, 2, 1}, {3, 2, 2, 3, 4, 1}, {3, 2, 1, 3, 4, 2}, {3, 2, 1, 2, 4, 3}, {3, 1, 2, 3, 1, 4}, {3, 1, 2, 1, 3, 4}, {3, 1, 1, 3, 2, 4}, {4, 1, 1, 2, 3, 4}};
	int i;
	
	i = 0;
	while(i < 24)
	{
		if (left[row] == combs[i][0] && right[row] == combs[i][1])
		{
			mk_row(map, &combs[i][2], row);
			if (row < 4)
			{
				mk_map(left, right, map, top, bottom, row + 1);
			}
			if (row == 3)
			{
				//print_map(map);
				//printf("------\n");
				if(check_map( map, top, bottom, 0) == 1)
				{
					printf("hello\n");
					print_map(map);
					return (1);
				}
			}
		}

		i++;
	}
}

int main()
{
    int combs[24][6] = {{1, 4, 4, 3, 2, 1}, {1, 3, 4, 1, 3, 2}, {1, 3, 4, 3, 1, 2}, {1, 3, 4, 2, 3, 1}, {1, 2, 4, 1, 2, 3}, {1, 2, 4, 2, 1, 3}, {2, 1, 3, 2, 1, 4}, {2, 1, 3, 1, 2, 4}, {2, 2, 1, 4, 2, 3}, {2, 2, 2, 4, 1, 3}, {2, 2, 3, 4, 1, 2}, {2, 2, 3, 2, 4, 1}, {2, 2, 3, 1, 4, 2}, {2, 2, 2, 1, 4, 3}, {2, 3, 1, 4, 3, 2}, {2, 3, 2, 4, 3, 1}, {2, 3, 3, 4, 2, 1}, {3, 2, 2, 3, 4, 1}, {3, 2, 1, 3, 4, 2}, {3, 2, 1, 2, 4, 3}, {3, 1, 2, 3, 1, 4}, {3, 1, 2, 1, 3, 4}, {3, 1, 1, 3, 2, 4}, {4, 1, 1, 2, 3, 4}};
	int map[4][4];

	int top[4] = {4, 3, 2, 1};
	int bottom[4] = {1, 2, 2, 2};
	
	int left[4] = {4, 3, 2, 1};
	int right[4] = {1, 2, 2, 2};

	
	//int top[4] = {1, 1, 4, 4};
	//int bottom[4] = {4, 4, 4, 4};
	
	//int left[4] = {1, 1, 1, 1};
	//int right[4] = {4, 4, 4, 4};

	int i = 0;
	int j = 0;

	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			map[i][j] = 0;
		}
	}
	mk_map(left, right, map, top, bottom, 0);

}

void print_map(int (*map)[4])
{
    int i, j;
    for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", *(map[i] + j));
		}
		printf("\n");
	}
}
