#include <iostream>
#include <vector>
#include <string>

std::string Equal() {
//Variables
  int tamano, suma{0};
  std::string resultado;
  bool comprobacion;
  std::vector<int> vect1;
//Elementos del vector
  std::cin >> tamano;
  for (int i = 0; i < tamano; ++i) {
    int elemento;
    std::cin >> elemento;
    vect1.push_back(elemento);
  }
//La suma de todos los elementos del vector
  for (int i = 0; i < tamano; ++i) {
    suma += vect1[i];
  }
//A la suma total, le resto un elemento y lo comparo con ese mismo para ver si
//es igual y que el string me suelte un "YES" o un "NO"
  for (int i = 0; i < tamano; ++i) {
    comprobacion = ((suma - vect1[i]) == vect1[i]);
    if (comprobacion == 1) {
      std::cout << "YES" << std::endl;
      break;
    }
    if (comprobacion == 0) {
      std::cout << "NO" << std::endl;
    }
  } 
  
  return resultado;
}

int main() {
  std::string resultado = Equal();
  return 0;
}
