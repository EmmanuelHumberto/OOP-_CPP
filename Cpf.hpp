#pragma once
#include <string>
#include <iostream>


class Cpf{

private:
	std::string numero;
/*------------------------------------------*/

public:
	/*Especifica que um construtor ou função de conversão é explícito, ou seja,
	 * não pode ser usado para conversões implícitas e inicialização de cópia.
	 */
	explicit Cpf(std::string numero);
    std::string recuperaNumero() const;
/*------------------------------------------*/

};
