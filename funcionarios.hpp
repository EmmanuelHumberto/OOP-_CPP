#pragma once
#include <string>
#include "cpf.hpp"
#include "pessoa.hpp"


class Funcionarios:public Pessoa
{
	
private:
	float salario;

public:
	Funcionarios(Cpf cpf, std::string nome, float salario);
	std::string recuperaNome();

};
