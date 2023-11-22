#include<iostream>
#include<algorithm>

void sort3 (int& a, int&b, int&c) {
  int maximo = std::max(std::max(a, b), c);
  int medio = std::max(std::min(a, b), c);
  int minimo = std::min(std::min(a, b), c);
  std::cout << minimo << " " << medio << " " << maximo << std::endl;
}

int main() {
  int num1, num2, num3;
  std::cin >> num1 >> num2 >> num3;
  sort3(num1, num2, num3);
  return 0;
}
