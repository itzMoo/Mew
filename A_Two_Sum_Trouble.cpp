/*A. Two Sum Trouble
time limit per test1 second
memory limit per test256 megabytes
Forbidden Keywords for the Quiz: open, file, creat(, fstream, thread, process,
system(, exec(

Your little brother, Bob, loves playing with integers. One day, his teacher gave
him a sorted list of N integers in non-decreasing order. Now, your brother wants
to play a game with you.

Bob will give you an integer S. You have to find if it is possible to find two
values from the list (at distinct positions) whose sum is equal to S.

Since you are feeling very tired, you decide to write a program that can quickly
answer Bob's query.

Input
The first line contains two integers N (1≤𝑁≤106)
 and S (1≤𝑆≤109)
, denoting the length of the list, and the target Sum.

In the next line, there will be N integers 𝑎1,𝑎2,𝑎3…𝑎𝑛
 (1≤𝑎𝑖≤109)
 in non-decreasing order, separated by spaces.

Output
Print two distinct 1-based indices i and j such that 𝑎𝑖+𝑎𝑗=𝑆
 where 𝑖<𝑗
. If no such pair exists, then print -1. If multiple solutions exist, you may
print any one of the valid answers.

Examples
InputCopy
4 10
1 3 5 7
OutputCopy
2 4
InputCopy
6 18
1 5 8 9 9 10*/

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

  int i = 0, j = n - 1;

  while (i < j) {
    if (arr[i] + arr[j] == S) {
      std::cout << i + 1 << ' ' << j + 1 << '\n';
      return 0;
    } else if (arr[i] + arr[j] < S) {
      i++;
    } else {
      j--;
    }
  }

  std::cout << -1 << '\n';

  return 0;
}