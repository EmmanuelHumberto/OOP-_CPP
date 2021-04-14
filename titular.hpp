#pragma once
#include <string>

	
class Titular{

private:

	std::string nome;
	
public:
	Titular(std::string nome);
	std::string recuperaTitular();

	
private:
	void verifica_tam_nome();

};
	


