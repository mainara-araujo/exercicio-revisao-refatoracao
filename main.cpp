#include "Engenheiro.cpp"
#include "Vendedor.cpp"

void printEngenheiro(Engenheiro eng){
  std::cout << "Nome: " << eng.nome << std::endl;
  std::cout << "Salario Mes: " << eng.pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng.projetos << std::endl;
  std::cout << std::endl;
}

void printVendedor(Vendedor vend){
  std::cout << "Nome: " << vend.nome << std::endl;
  std::cout << "Salario Mes: " << vend.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}

int main() {

  Engenheiro eng1;
  eng1.nome = "Joao Snow";
  eng1.salarioHora = 35;
  eng1.projetos = 3; 
  
  Engenheiro eng2;
  eng2.nome = "Daniela Targaryen";
  eng2.salarioHora = 30;
  eng2.projetos = 1; 
  
  Engenheiro eng3;
  eng3.nome = "Bruno Stark";
  eng3.salarioHora = 30;
  eng3.projetos = 2; 
  
  printEngenheiro(eng1);
  printEngenheiro(eng2);
  printEngenheiro(eng3);
  
  Vendedor vend1;
  vend1.nome = "Tonho Lannister";
  vend1.salarioHora = 20;
  vend1.quotaMensalVendas = 5000;
  
  Vendedor vend2;
  vend2.nome = "Jose Mormont";
  vend2.salarioHora = 25;
  vend2.quotaMensalVendas = 3000;
	
  Vendedor vend3;
  vend3.nome = "Sonia Stark";
  vend3.salarioHora = 30;
  vend3.quotaMensalVendas = 4000;
  
  printVendedor(vend1);
  printVendedor(vend2);
  printVendedor(vend3);
  
  return 0;	
}