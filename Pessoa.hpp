#pragma once
#include "Cpf.hpp"
#include <string>
#include <iostream>

class Pessoa
{

/*
 * A protected palavra-chave especifica o acesso a membros de classe
 * na lista de membros. Membros de classe declarados como protected
 * podem ser usados por: Funções de membro da classe que declarou
 * originalmente esses membros. Friends da classe que declarou
 * originalmente esses membros. Classes derivadas com acesso público
 * ou protegido da classe que declarou originalmente esses membros.
 */
protected:
	Cpf cpf;
	std::string nome;
/* -----------------------------------*/


public:
	Pessoa(Cpf cpf, std::string nome);
	~Pessoa();
	std::string recuperaTitular();
/* -----------------------------------*/

private:
	void verifica_tam_nome();
/* -----------------------------------*/

};
