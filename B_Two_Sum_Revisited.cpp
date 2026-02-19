#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  unsigned long n, m; // sizes of arrays
  long long K;        // target sum

  std::cin >> n >> m >> K;

  long long arrA[n];
  long long arrB[m];

  for (int i = 0; i < n; i++) {
    std::cin >> arrA[i];
  }
  for (int j = 0; j < m; j++) {
    std::cin >> arrB[j];
  }

  // Two-pointer approach From the start of A and end of B
  int i = 0, j = m - 1;

  // Default values for best pair
  int bestI = -1, bestJ = -1;
  long long bestDiff = LLONG_MAX;

  while (i < n && j >= 0) {
    long long sum = (long long)arrA[i] + arrB[j];
    long long diff = std::abs(sum - K);

    if (diff < bestDiff) {
      bestDiff = diff;
      bestI = i;
      bestJ = j;
    }

    if (sum < K) {
      i++;
    } else {
      j--;
    }
  }

  std::cout << bestI + 1 << ' ' << bestJ + 1 << '\n';
  return 0;
}