#include <stdio.h>
int main() {
  //pascal triangle
    int n = 5;
    for (int i = 0; i < n; i++)//rows
    {
        for (int j = 0; j < n - i - 1; j++)//space
            printf(" ");

        // values
        int val = 1;
        for (int k = 0; k <= i; k++) {
            printf("%d ", val);
            val = val * (i - k) / (k + 1);
        }
        printf("\n");
    }
}
