// 2. Desarrolle en C++ un programa que reciba como entrada el radio de un
// círculo y entregue como salida su perímetro y su área:
#include <math.h>
#include <iostream>
int main() {
  float radio{0};
  double perimetro{0};  // como poner precision para el float
  double area{0};
  std::cout << "Introduzca el radio: ";
  std::cin >> radio;
  perimetro = 2 * M_PI * radio;
  area = M_PI * (radio * radio);
  std::cout << "Perímetro: " << perimetro << std::endl;
  std::cout << "Area: " << area << std::endl;

  return 0;
}
