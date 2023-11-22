#include <iostream>
#include <vector>

int Equal() {
  int tamano, sumatorio{0};
  std::cin >> tamano;
  std::vector<int> vect1;
  
  for (int i = 0; i < tamano; ++i) {
    int elemento; 
    std::cin >> elemento;
    vect1.push_back(elemento);
  }

  for (int i = vect1.size() - 2; i >= 0; --i) {
    if (vect1[tamano - 1] == vect1[i]) {
      sumatorio++;
    } 
  }
  return sumatorio;
}

int main() {
  std::cout << Equal() << '\n';
  return 0;
}
