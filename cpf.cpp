#include <iostream>
#include "cpf.hpp"

/*------------------------------------------
 * CONTRUTOR CPF*/

Cpf::Cpf(std::string numero): numero(numero)

{
	std::cout << "Cpf criado" << std::endl;
}

/*------------------------------------------
 * RECUPERA NUM*/
std::string Cpf::recuperaNumero() const
{
    return numero;
}