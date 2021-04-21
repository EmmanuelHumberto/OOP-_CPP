#include "ContaPoupanca.hpp"
#include <string>
#include <iostream>


ContaPoupanca::ContaPoupanca(std::string numero, Titular titular): Conta(numero, titular)
{
}

void ContaPoupanca::sacar(float valorASacar){ 

	if (valorASacar < 0){
		std::cout << "Não pode sacar valor negativo." << std::endl;
		return;
	 }
	 
	 
	 float tarifaSaque = valorASacar * 0.05;
	 float valorSaque = valorASacar + tarifaSaque;

	if (valorSaque > saldo){
	std::cout << "Saldo insuficiente." << std::endl;
	return;

	 }

	saldo -= valorSaldo;
	
 }
 