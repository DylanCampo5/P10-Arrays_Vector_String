#include <iostream>
#include <vector> 

bool exists (int x, const std::vector<int>& v) {
  bool comprobacion = false;
  std::vector <int> vect1;
  int tamano;
  std::cin >> tamano;
  for (int i = 0; i < tamano; ++i) {
    int elemento;
    std::cin >> elemento;
    vect1.push_back(elemento);
  }

  for (int i = 0; i < tamano; ++i) {
    comprobacion = (vect1[i] == x);
    if (comprobacion == true) {
      std::cout << comprobacion << '\n';
      break;
    }
  }
  if (comprobacion) {
    std::cout << comprobacion << std::endl;
  }
  return comprobacion;
}

int main() {
  int num1;
  std::cin >> num1;
  std::vector<int> vect = {0};
  bool resultado = exists(num1, vect);
  return 0;
}
