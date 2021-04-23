#include "Poupanca.hpp"
#include <string>
#include <iostream>

/* CONSTRUTOR CP*/
ContaPoupanca::ContaPoupanca(std::string numero, Titular titular):
Conta(numero, titular)
{


	std::cout << " Conta - Poupanca [OK] " << std::endl;
	std::cout << "------------------------" << std::endl;

}

/*-----------------------------------------------------------------
 * SACAR CP*/
float ContaPoupanca::taxaSaque()const {

	 std::cout << "Chamando o metodo sacar da conta Poupança" << std::endl;
	 return  0.03;

 }

