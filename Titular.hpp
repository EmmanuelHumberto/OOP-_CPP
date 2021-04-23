/*Diretiva de compilação não standard  Serve para fazer com que
  o ficheiro atual apenas seja incluído uma vez durante o processo de compilação.
*/
#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Cpf.hpp"



//Classe tirtular herda de classe Pessoa
class Titular: public Pessoa

{

	public:
	Titular(Cpf cpf, std::string nome);
};


