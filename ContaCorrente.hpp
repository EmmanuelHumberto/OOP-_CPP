#include "Conta.hpp"

class ContaCorrente final : public Conta {


public:
	ContaCorrente(std::string numero, Titular titular);
	float taxaSaque()const override;
	void transferePara(Conta& contaDestino, float valor);
/*-------------------------------------------------------*/


};

