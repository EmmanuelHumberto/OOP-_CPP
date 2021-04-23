#pragma once
#include <string>
#include "Cpf.hpp"
#include "Pessoa.hpp"


class Funcionarios:public Pessoa
{

private:
	float salario;
/*------------------------------------------*/

public:
	Funcionarios(Cpf cpf, std::string nome, float salario);
	std::string recuperaNome();
/*------------------------------------------*/
};
