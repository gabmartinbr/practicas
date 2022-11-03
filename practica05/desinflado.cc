// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Informática Básica
// @author Gabriel Martin Broock

#include <cctype>  //libreria para función toupper/tolower
#include <iostream>

int main() {
  char letra_minuscula;
  char letra_mayuscula;
  std::cin >> letra_mayuscula;
  letra_minuscula = tolower(letra_mayuscula);
  std::cout << letra_minuscula << std::endl;
  return 0;
}

