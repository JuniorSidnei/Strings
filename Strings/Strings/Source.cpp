#include <iostream>
#include <string>
#include "stringConvert.h"

///PASSOS:
//Digitar uma string com espa�os e virgulas OK
//Ler essa string com todos os caracteres OK
//Separar essa string a cada espa�o em uma nova string
//Aplicar a fun��o de invers�o em cada string
//Juntar todas as frases em umna s�


int main()
{
	stringConvert myS;


	std::cout << "Digite uma frase qualquer!" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::getline(std::cin, myS.my_expression);
	myS.countSpace(myS.my_expression);

	system("pause");
	return 0;
}