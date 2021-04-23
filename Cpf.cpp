#include <iostream>
#include "Cpf.hpp"

/*------------------------------------------
 * CONTRUTOR CPF*/

Cpf::Cpf(std::string numero): numero(numero)

{

	std::cout << "CPF: " << numero << std::endl;
	std::cout << "------------------------" << std::endl;

}

/*------------------------------------------
 * RECUPERA NUM*/



std::string Cpf::recuperaNumero() const
{
    return numero;
}
