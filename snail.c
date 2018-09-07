#include <stdio.h>

int main(void)
{
    int n;
    int a[9][9];
    int x = 0, y = -1, d = 1, k = 1;
    int i, j;

    scanf("%d", &n);

    for (i = n; i > 0; d *= -1) {
        for (j = 0; j < i; j++) a[x][y += d] = k++;
        i--;
        for (j = 0; j < i; j++) a[x += d][y] = k++;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) printf("%2d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
