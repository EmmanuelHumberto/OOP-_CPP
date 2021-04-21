#include "ContaPoupanca.hpp"
#include <string>
#include <iostream>

//Chamando o construtor da classe base Conta
ContaPoupanca::ContaPoupanca(std::string numero, Titular titular): 
Conta(numero, titular)
{
}
/*-----------------------------------------------------------------
 * CONSTRUTOR CP*/
void ContaPoupanca::sacar(float valorASacar){ 
	
	std::cout << "Chamando o metodo sacar da conta poupança" << std::endl;

	if (valorASacar < 0){
		std::cout << "Não pode sacar valor negativo." << std::endl;
		return;
	 }
	 	 
	 float tarifaSaque = valorASacar * 0.03;
	 float valorSaque = valorASacar + tarifaSaque;

	if (valorSaque > saldo){
	std::cout << "Saldo insuficiente." << std::endl;
	return;

	 }

	saldo -= valorSaque;
	
 }
/*-----------------------------------------------------------------*/