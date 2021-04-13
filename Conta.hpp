/*Diretiva de compilação não standard
  Serve para fazer com que o ficheiro atual 
	apenas seja incluído uma vez durante o processo de compilação.
*/
#pragma once
#include <string>


class Conta{
	
 private:
    std::string numero;
    std::string cpf;
    std::string nome;
    float saldo = 0;
	
  public:
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
	float recuperaSaldo();
	void defineNome(std::string nome);
	char recuperaNome();
	
	
};
