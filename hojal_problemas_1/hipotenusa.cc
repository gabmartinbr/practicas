//4. Desarrolle en C++ un programa que reciba como entrada las longitudes de los dos catetos de un triángulo rectángulo, y que calcule como salida la longitud de la hipotenusa del triángulo, dado por el teorema de Pitágoras.
#include <iostream>
#include <math.h>
int main(){
	int catetoa{0};
	int catetob{0};
	float hipotenusa{0};
	std::cout<<"Introduzca cateto a: ";
	std::cin>>catetoa;
	std::cout<<"Introduzca cateto b: ";
	std::cin>>catetob;
	hipotenusa = sqrt(pow(catetoa, 2) + pow(catetob, 2));
	std::cout<<"El valor de la hipotenusa es "<< hipotenusa <<std::endl;

	return 0;
}
