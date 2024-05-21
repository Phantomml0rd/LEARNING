// PONTEIRO E STRINGS
#include<iostream>
using namespace std;
int main (){
  //inicializa o vetor com a constante string.
  char nome[20] = "Joaozinho";
  cout << nome << endl;

  //manipula elementos com um ponteiro.
  char * ptr = &nome[1];
  *ptr = 'P';
  cout  << ptr << endl;

  nome[0] = 'T';
  *ptr = 'i';
  cout << nome << endl;

  return 0;
}
##SAIDA DO PROGRAMA
Joaozinho
Paozinho
Tiaozinho
