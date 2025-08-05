#include <stdio.h>
void checkSort(int ar[], int len) {
  int *ptr;
  ptr = ar;
  int i = 0;
  while (i < (len - 1)) {
    if (*ptr > *(ptr + 1)) {
      printf("Not Sorted...");
      return;
    }
    ptr++;
    i++;
  }
  printf("Yes Sorted");
}

int main() {
  int N;
  scanf("%d", &N);
  int arr[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  checkSort(arr, N);
  return 0;
}
