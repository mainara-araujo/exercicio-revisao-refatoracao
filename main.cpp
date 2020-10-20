#include "Engenheiro.cpp"
#include "Vendedor.cpp"

void novoEngenheiro(Engenheiro eng, std::string nome, double salario, int projetos){
  eng.nome = nome;
  eng.salarioHora = salario;
  eng.projetos = projetos; 
}

void novoVendedor(Vendedor vend, std::string nome, double salario, int quotas){
  vend.nome = nome;
  vend.salarioHora = salario;
  vend.quotaMensalVendas = quotas;
}

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

  Engenheiro eng1, eng2, eng3;
  novoEngenheiro(eng1,"Joao Snow",35,3);
  novoEngenheiro(eng2,"Daniela Targaryen",30,1);
  novoEngenheiro(eng3,"Bruno Stark",30,2);

  printEngenheiro(eng1);
  printEngenheiro(eng2);
  printEngenheiro(eng3);
  
  Vendedor vend1, vend2, vend3;
  novoVendedor(vend1,"Tonho Lannister",20,5000);
  novoVendedor(vend1,"Jose Mormont",25,3000);
  novoVendedor(vend1,"Sonia Stark",30,4000);
  
  printVendedor(vend1);
  printVendedor(vend2);
  printVendedor(vend3);
  
  return 0;	
}