  
#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    double salarioHora;  
    double quotaMensalVendas;  


    double pagamentoMes(double horasTrabalhadas) {
 
      double horasTotais = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double horasExtra = horasTrabalhadas - 8;
        horasTotais += horasExtra / 2;
      }
	  return t * salarioHora;
    }
	
};

#endif