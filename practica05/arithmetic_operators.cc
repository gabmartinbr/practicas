// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Informática Básica
// @author Gabriel Martin Broock

#include <iostream>

int main () {
  int a{5}, b{2};
  int sum = a + b;
  int rest = a - b;
  int mult = a * b;
  double div = a / b;
  double remin = a % b;
  std::cout << a <<"+" << b << " = " << sum << std::endl;
  std::cout << a <<"-" << b << " = " << rest << std::endl;
  std::cout << a <<"*" << b << " = " << mult << std::endl;
  std::cout << a <<"/" << b << " = " << div << std::endl;
  std::cout << a <<"%" << b << " = " << remin << std::endl;

  return 0;
}
