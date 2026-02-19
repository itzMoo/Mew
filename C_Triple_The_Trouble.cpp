/*Forbidden Keywords for the Quiz: open, file, creat(, fstream, thread, process,
system(, exec(

You are given an array of 𝑛
 integers, and your task is to find three values (at distinct positions) whose
sum is 𝑥
.

Input
The first input line has two integers 𝑛
 (1≤𝑛≤5000)
 and 𝑥
 (1≤𝑥≤109)
, the array size and the target sum. The second line has 𝑛
 integers 𝑎1,𝑎2,…,𝑎𝑛
 (1≤𝑎𝑖≤109)
, the array values.

Output
Print three integers: the positions of the values. If there are several
solutions, you may print any of them. If there are no solutions, print -1.

Examples
InputCopy
7 3
2 1 1 2 2 1 1
OutputCopy
2 3 6
InputCopy
3 5
1 3 2
OutputCopy
-1*/

#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  long n;      // integer
  long long S; // sum

  std::cin >> n;
  std::cin >> S;

  long arr[n];

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (arr[i] + arr[j] + arr[k] == S) {
          std::cout << i + 1 << ' ' << j + 1 << ' ' << k + 1 << '\n';
          return 0;
        }
      }
    }
  }

  std::cout << "-1\n";
  return 0;
}