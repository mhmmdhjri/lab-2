#include <stdio.h>

int main() {
    int X, Y;
    if (scanf("%d %d", &X, &Y) != 2) return 0;

    int garden[105][105];

  
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            scanf("%d", &garden[i][j]);
        }
    }

    int T;
    if (scanf("%d", &T) != 1) return 0;

    
    for (int i = 0; i < T; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
      
        garden[a - 1][b - 1] = c;
    }
 
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            printf("%d", garden[i][j]);
            if (j < Y - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

