// pratica01.cpp: define o ponto de entrada para o aplicativo.
//

#include "pratica01.h"

class Veiculo {

	std::string nome;
	int num_rodas;

public:
	Veiculo(const char* novo_nome) {
		this->nome = novo_nome;
		std::cout << "objeto construido" << "\n";
	}
	~Veiculo(){ 
		std::cout << "objeto destruido" << "\n";
	}

	int getNum_rodas() {
		return this->num_rodas;

	}
	void setNum_rodas(int a);
};

void Veiculo::setNum_rodas(int a) {
	this->num_rodas = a;
}

int main()
/* {
	Veiculo veiculo1("v1");
	{
		Veiculo veiculo2("v2");
		{
			Veiculo veiculo3("v3");
			{

			}
		}
	}
	*/

{
	Veiculo* rodas = new Veiculo("r1");

	Veiculo* obj1 = new Veiculo("v1");
	delete obj1;
	{
		Veiculo* obj2 = new Veiculo("v2");
		delete obj2;
		{
			Veiculo* obj3 = new Veiculo("v3");
			delete obj3;
			{

			}
		}
	}

	return 0;
}
