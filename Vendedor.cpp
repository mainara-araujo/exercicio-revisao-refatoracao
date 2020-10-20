#include <string>
#include "Empregado.hpp"
const int ANO = 12;

class Vendedor : public Empregado {

  public:
    std::string nome;  	  
	
	double quotaTotalAnual() {
	  return quotaMensalVendas * ANO;
	}
	
};

