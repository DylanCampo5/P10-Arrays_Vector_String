#include <iostream>
#include <vector>

std::vector<int> concatenacion () {
  
  std::vector<int> vector1;
  std::vector<int> vector2;
  int tamano1;
  std::cin >> tamano1;
//Indicación del tamaño y los elementos del primer vector
  for (int i = 0; i < tamano1; ++i) {
    int elemento;
    std::cin >> elemento;
    vector1.push_back(elemento);
  }
//Hacer los tamaños por separados o si no no irá bien
  int tamano2;
  std::cin >> tamano2;
//Indicación del tmñ y los elementos del segundo vector
  for (int i = 0; i < tamano2; ++i) {
    int elemento2;
    std::cin >> elemento2;
    vector2.push_back(elemento2);
  }
//Proceso de concatenación de vectores
  std::vector<int> resultado = vector1;
  resultado.insert(resultado.end(), vector2.begin(), vector2.end());
//Return de toda esta wea
  return resultado;
}


int main() {
//Meto los valores de los tamaños
  std::vector<int> resultado = concatenacion ();
//Necesito mostrar ese "resultado" que acaba de salir de la función 
  for (const auto &concatenado : resultado) {
    std::cout << concatenado << " ";
  }
  std::cout << '\n';

  return 0;
}
