#pragma once
#include <string>
#include "pessoa.hpp"
#include "cpf.hpp"

	
class Titular: public Pessoa

{
	
	public:
	Titular(Cpf cpf, std::string nome);
};
	


