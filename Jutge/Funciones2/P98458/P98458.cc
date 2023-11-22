#include <iostream>
#include <algorithm>

void min_max (int a, int b, int& mn, int& mx) {
  mn = std::min(a, b);
  mx = std::max(a, b);
  std::cout << mn << " " << mx << std::endl;
}

int main() {
  int num1, num2, mn{0}, mx{0};
  std::cin >> num1 >> num2;
  min_max (num1, num2, mn, mx);
  return 0;
}
