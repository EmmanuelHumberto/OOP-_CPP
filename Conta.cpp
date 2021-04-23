#include "Conta.hpp"
#include <iostream>

int Conta::conta_nun_decontas = 0;

/*-------------------------------------------------------------
* CONSTRUTOR CONTA*/
Conta::Conta(std::string numero, Titular titular)://lista de inicialização.

numero(numero),
titular(titular),
saldo(0)

 {

	//atributo de classe
	conta_nun_decontas++;

	std::cout << "Saldo = " << saldo << std::endl;
	std::cout << "------------------------" << std::endl;

}
/*-------------------------------------------------------------
 *DESCONSTRUTOR CONTA */

Conta::~Conta(){

	conta_nun_decontas--;
	std::cout << "chamando o DESTRUTOR da CONTA." << std::endl;
 }

/*-------------------------------------------------------------
 * TAXA DE SAQUE*/

float Conta::taxaSaque() const

{


	return taxaSaque();
}
/*-------------------------------------------------------------
 * SACAR*/
void Conta::sacar(float valorASacar){


	if (valorASacar < 0){
		std::cout << "Não pode sacar valor negativo." << std::endl;
		return;
	 }


	 float tarifaSaque = valorASacar * taxaSaque();
	 float valorSaque = valorASacar + tarifaSaque;

	if (valorSaque > saldo){
	std::cout << "Saldo insuficiente." << std::endl;
	return;

	 }

	saldo -= valorSaque;

	std::cout << "Saque realizado no valor de R$." << valorASacar << std::endl;
	std::cout << "==========================================" << std::endl;

 }

/*-------------------------------------------------------------
 * DEPOSITAR*/

void Conta::depositar(float valorADepositar){

	if (valorADepositar < 0){
		std::cout << "Não pode sacar valor negativo." << std::endl;
		return;

	 }

	saldo += valorADepositar;

	std::cout << "Deposito realizado no valor de R$." << valorADepositar << std::endl;
	std::cout << "============================================" << std::endl;
 }

/*-------------------------------------------------------------
 * RECUPERA NUMERO*/

std::string Conta::recuperaNumero(){

	return numero;
}

/*-------------------------------------------------------------
 * RECUPERA NUMERO DE CONTAS*/

int Conta::recupera_conta_nun_decontas(){

	return conta_nun_decontas;
}

/*-------------------------------------------------------------
 * RECUPERA SALDO*/

float Conta::recuperaSaldo() const
{
	return saldo;
}


