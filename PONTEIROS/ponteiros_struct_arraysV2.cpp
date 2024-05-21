#include <iostream>
using namespace std;
struct jogador{
  char nome[20];
  float salario;
  unsigned gols;
};

void exibir (jogador * ptr){
  cout << ptr->gols <<endl;
  ptr ->gols = 1000;
  
}

int main(){
  jogador novato =  {"joazinho", 100, 2};
  exibir(&novato);
  cout<< novato.gols << endl;
}
##SAIDA DO PROGRAMA
2
1000
