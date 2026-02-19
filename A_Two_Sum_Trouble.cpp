#include <stdio.h>

int main() {
  long n;      // integer
  long long S; // sum

  scanf("%ld", &n);
  scanf("%lld", &S);

  long arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == S) {
        printf("%d %d\n", i + 1, j + 1);
        return 0;
      }
    }
  }

  printf("-1\n");
  return 0;
}