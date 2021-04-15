#include <iostream>
#include "funcionarios.hpp"

Funcionarios::Funcionarios(Cpf cpf, std::string nome, float salario)
:Pessoa(cpf,nome),salario(salario)
{}

std::string Funcionarios::recuperaNome()
{
	
return nome;
}