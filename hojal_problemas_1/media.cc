//5. Escriba un programa que calcule la media de cuatro valores introducidos por el usuario:
#include <iostream>
int main(){
	float num1, num2, num3, num4;
	double media{0};
	std::cout<<"escriba 4 números: ";
	std::cin>>num1>>num2>>num3>>num4;
	media = (num1 + num2 + num3 + num4) / 4;
	std::cout<<"El promedio es "<<media;

	return 0;
}
