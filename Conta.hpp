/*Diretiva de compilação não standard  Serve para fazer com que 
	o ficheiro atual apenas seja incluído uma vez durante o processo de compilação.
*/
#pragma once
#include <string>
#include "titular.hpp"
#include "cpf.hpp"

class Conta{
	
	private:
		static int conta_nun_decontas;
	
	public:
		static int recupera_conta_nun_decontas();
			
private:
		Cpf cpf;
		std::string numero;
		Titular titular;
		float saldo;
	
	public:
		Conta(Cpf cpf, std::string numero, Titular titular);
		~Conta();
		void sacar(float valorASacar);
		void depositar(float valorADepositar);
		float recuperaSaldo()const;
		std::string recuperaNumero();
		
};	