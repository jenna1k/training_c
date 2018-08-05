#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int		ft_strlen(char *str)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while(str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;    
} 

bool SolveSudoku(int grid[N][N])
{
    int row, col;
 
    // If there is no unassigned location, we are done
    if (!FindUnassignedLocation(grid, row, col))
       return true; // success!
 
    // consider digits 1 to 9
    for (int num = 1; num <= 9; num++)
    {
        // if looks promising
        if (isSafe(grid, row, col, num))
        {
            // make tentative assignment
            grid[row][col] = num;
 
            // return, if success, yay!
            if (SolveSudoku(grid))
                return true;
 
            // failure, unmake & try again
            grid[row][col] = UNASSIGNED;
        }
    }
    return false; // this triggers backtracking
}

int main(int argc, char* argv[]) {
    int grid[9][9];
    int input_error = 0;
    int i, j;
    if (argc != 1 + 9) { /* check number of rows in input */
        input_error = 1;
    } else {
        for (i = 0; i < 9; i++) { /* read each rows */
            if (ft_strlen(argv[i + 1]) != 9) { /* check number of cols in input */
                input_error = 1;
                break;
            }
            for (j = 0; j < 9; j++) { /* read each cols */
                if (ft_isdigit(argv[i + 1][j]) && argv[i + 1][j] != '0') {
                    /* digits except for 0 */
                    grid[i][j] = argv[i + 1][j] - '0'; /* convert digit to integer */
                } else if (argv[i + 1][j] == '.') {
                    /* dot */
                    grid[i][j] = 0;
                } else {
                    /* invalid character */
                    input_error = 1;
                    break;
                }
            }
        }
    }
    /* check if some errors are detected */
    if (input_error) {
        fputs("invalid usage\n", stderr);
        return 1;
    }

    /* print what is read for testing */
    for (i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++) {
            printf(" %d", grid[i][j]);
        }
        putchar('\n');
    }
    SolveSudoku(*argv[])
    return 0;
}