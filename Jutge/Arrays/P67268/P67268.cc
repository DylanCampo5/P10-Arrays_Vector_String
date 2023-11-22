#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Vuelta() {
  int tamano;
  std::cin >> tamano;
  std::vector<int> vect1;
  
  for (int i = 0; i < tamano; ++i) {
    int elemento; 
    std::cin >> elemento;
    vect1.push_back(elemento);
  }
  
  std::reverse(vect1.begin(), vect1.end());
  return vect1;
}

int main() {
  std::vector<int> resultado = Vuelta();
  for (const auto &vect : resultado) {
    std::cout << vect << " ";
  }
  std::cout << '\n';
  return 0;
}
