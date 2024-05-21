//PONTEIROS TRABALHANDO COM VETORES E REGISTROS (STRUCTS)
#include <iostream>
using namespace std;

struct jogador{
  char nome[20];
  float salario;
  unsigned gols;

};
int main(){
  jogador time[22];
  jogador * estrela = &time[0];

    cout<< "Digite o nome, salário e gols de dois jogadores: "<< endl;
    cin>> time[0].nome; cin>> time[0].salario; cin>>time[0].gols;
    cin>> time[1].nome; cin>> time[1].salario; cin>>time[1].gols;

    cout<< "\nO jogador estrela do time é: "<< estrela->nome << endl; // a seta é usada aqui para apontar pois estamos estamos apontando para um TIPO do registro.
}
## SAIDA DO PROGRAMA
ROBERSVALDO
60000
34
WERSANDELEY
75555 
56

O jogador estrela do time é: ROBERSVALDO
