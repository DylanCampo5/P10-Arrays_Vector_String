#include <iostream>
#include <vector>

std::vector<int> concatenacion (const std::vector<int>& v1, 
                                const std::vector<int>& v2) {
//Tamaño y elemento del primer vector
  int tamano1;
  std::cin >> tamano1;
  std::vector<int> vect1;
  for (int i = 0; i < tamano1; ++i) {
    int elemento1;
    std::cin >> elemento1;
    vect1.push_back(elemento1);
  }
//Tamaño y elementos del segundo vector
  int tamano2;
  std::cin >> tamano2;
  std::vector<int> vect2;
  for (int i = 0; i < tamano2; ++i) {
    int elemento2;
    std::cin >> elemento2;
    vect2.push_back(elemento2);
  }
//La concatenación de ambos vectores
  vect1.insert(vect1.end(), vect2.begin(), vect2.end());
  
  return vect1;
}

int main() {
  std::vector<int> vect1;
  std::vector<int> vect2;
  std::vector<int> resultado = concatenacion(vect1, vect2);
  for (const auto &concatenado : resultado) {
    std::cout << concatenado << " ";
  }
  std::cout << std::endl;
  return 0;
}
