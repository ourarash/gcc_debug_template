#include <iostream>
#include <map>
#include <string>
#include <vector>


void PrintEndMessage() { std::cout << "Program ended!" << std::endl; }

class Solution {
public:
  int fib(int N) {
    if (N == 0) {
      return 0;
    }

    if (N == 1) {
      return 1;
    }

    if (_m.count(N)) {
      return _m[N];
    } else {
      _m[N] = fib(N - 1) + fib(N - 2);
      return _m[N];
    }
  }

  std::map<int, int> _m;
};

int main() {
  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  Solution s;
  int r = s.fib(10);
  std::cout << "r: " << r << std::endl;

  int j = s.fib(12);
  std::cout << "r: " << r << std::endl;

  PrintEndMessage();
  return 0;
}
