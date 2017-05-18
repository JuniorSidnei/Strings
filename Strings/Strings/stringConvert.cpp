#include "stringConvert.h"



stringConvert::stringConvert()
{
}


stringConvert::~stringConvert()
{
}

void stringConvert::countSpace(std::string expression)
{
	char space[] = " ";
	int cont = 0, i = 0;
	std::string expression2;

	/*for (int i = 0; i < expression.length(); i++)
	{
		if (expression[i] == space[0])
		{*/
			for (int j = (expression.length() - 1); j <= 0; j--)
			{
				expression2[i] = expression[j];
				i++;
				
			}
			expression2[i] = 0;
		//}
		
	//}

	
	
	//std::cout << cont << std::endl;
	std::cout << expression2 << std::endl;
	
}


