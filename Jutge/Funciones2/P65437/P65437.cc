#include<iostream>

void swap2 (int& a, int& b) {
  std::cout << b << " " << a << std::endl;
}

int main() {
  int num1, num2;
  std::cin >> num1 >> num2;
  swap2(num1, num2);
  return 0;
;
  return 0;
}
