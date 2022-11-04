/*Write a program that reads an integer number that
represents a temperature given in degree Celsius,
and that tells if the weather is hot, if it’s cold,
or if it’s ok. Suppose that it’s hot if the temperature
is higher than 30 degrees, that it’s cold if the temperature
is lower than 10 degrees, and that it’s ok otherwise.
Moreover, warn if with the given temperature water would boil,
or if water would freeze. Assume that water boils at 100 or
more degrees, and that water freezes at 0 or less degrees.*/
#include <iostream>
int main() {
  int temp;
  std::cin >> temp;
  if (temp > 30) {
    std::cout << "it's hot" << std::endl;
  } else if (temp < 10) {
    std::cout << "it's cold" << std ::endl;
  } else {
    std::cout << "it's ok" << std::endl;
  }
  if (temp <= 0) {
    std::cout << "water would freeze" << std::endl;
  }
  if (temp >= 100) {
    std::cout << "water would boil" << std::endl;
  }

  return 0;
}