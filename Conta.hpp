/*Diretiva de compilação não standard
  Serve para fazer com que o ficheiro atual 
	apenas seja incluído uma vez durante o processo de compilação.
*/
#pragma once
#include <string>


class Conta{
	
 private:
    std::string numero_conta;
    std::string cpf_titular;
    std::string nome_titular;
    float saldo = 0;
	
public:
    Conta(std::string numero_conta, std::string cpf_titular, std::string nome_titular);
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
	float recuperaSaldo()const;
	void defineNome(std::string nome);
	void defineCpf(std::string cpf);	
	void defineNumero(std::string numero);
	std::string recuperaCpf();
	std::string recuperaNome();
	std::string recuperaNumero();
	void ExibeSaldo(const Conta& conta);
	
	
};