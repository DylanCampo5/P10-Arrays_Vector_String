#include <iostream>
#include <vector>

double scalar_product (const std::vector<double>& u, 
                       const std::vector<double>& v) {
//Las variables que necesito
  int tamano;
  double escalar;
  std::vector<double> vect1;
  std::vector<double> vect2;

//El tamaño y los números de cada vector
  std::cin >> tamano;
  for (int i = 0; i < tamano; ++i) {
    double elemento;
    std::cin >> elemento;
    vect1.push_back(elemento);
  }
  for (int i = 0; i < tamano; ++i) {
    double elemento2;
    std::cin >> elemento2;
    vect2.push_back(elemento2);
  }

//El bucle for que me hace el producto esacalar
  for (int i = 0; i < tamano; ++i) {
    escalar += (vect1[i] * vect2[i]);
  }

  return escalar;
}

int main() {
  const std::vector<double> vect1 = {0};                           
  const std::vector<double> vect2 = {0};
  double resultado = scalar_product(vect1, vect2);
  std::cout << resultado << '\n';
  return 0;
}
