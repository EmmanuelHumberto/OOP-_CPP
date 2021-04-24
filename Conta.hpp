#pragma once
#include <string>
#include "Titular.hpp"
#include "Cpf.hpp"

class Conta{

private:
	static int conta_nun_decontas;
/*-------------------------------------------------------------*/

public:
	static int recupera_conta_nun_decontas();
/*-------------------------------------------------------------*/

private:
	std::string numero;
	Titular titular;
/*-------------------------------------------------------------*/


protected:
	float saldo;
/*-------------------------------------------------------------*/

public:
	Conta(std::string numero, Titular titular);
	virtual~Conta();

	 /*Uma função virtual é uma função de membro que é declarada
	 * dentro de uma classe base e é redefinida (Substituída) por
	 * uma classe derivada. Quando você se refere a um objeto de classe
	 * derivada usando um ponteiro ou uma referência à classe base,
	 * pode chamar uma função virtual para esse objeto e executar
	 * a versão da função da classe derivada.
	 */
	void sacar(float valorASacar);

	 /*Uma função virtual pura ou método virtual puro é uma função virtual
	 *que deve ser implementada por uma classe derivada
	 *Tipicamente, métodos virtuais puros tem uma declaração (assinatura) e
	 *nenhuma definição (implementação).
	 */
	virtual float taxaSaque() const = 0;

	void depositar(float valorADepositar);
	float recuperaSaldo()const;
	std::string recuperaNumero();
/*-------------------------------------------------------------*/
};
