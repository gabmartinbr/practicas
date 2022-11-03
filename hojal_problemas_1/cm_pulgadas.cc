//3. Escriba un programa que convierta de centímetros a pulgadas. Una pulgada es igual a 2.54 centímetros.
#include <iostream>
int main(){
	int cm{0};
	float factor_conversion{2.54};
	float pulgadas{0};
	std::cout<<"Introduzca longitud: ";
	std::cin>>cm;
	pulgadas = cm / factor_conversion;
	std::cout<< cm <<" cm = " << pulgadas <<" in"<<std::endl;

	return 0;
}
