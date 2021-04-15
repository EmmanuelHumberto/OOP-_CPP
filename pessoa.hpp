#pragma once
#include "cpf.hpp"
#include <string>
#include <iostream>

class Pessoa
{
	
protected:
	Cpf cpf;
	std::string nome;
	
public:
	Pessoa(Cpf cpf, std::string nome);
	std::string recuperaTitular();
	

private:
	void verifica_tam_nome();


};