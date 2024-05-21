#include <iostream>
using namespace std;
int main (){
  int total = 6; //declara uma variavel.
  int * ptr;  //declara um ponteiro.
  ptr = &total; //atribui endereço de total.

  cout<< "conteudo de total = "<< ptr << endl;
  cout<< "conteudo apontado = "<< *ptr << endl;

  cout<< "emdereço total =" << total <<endl;
  cout<< "conteudo de ptr = "<< ptr << endl;
  *ptr = *ptr + 1; // altera valor.
  cout << "agora totais vale = "<< total << endl;
  return 0;
}
## SAIDA DO PROGRAMA
conteudo de total = 0x7ffda58d5f3c
conteudo apontado = 6
emdereço total =6
conteudo de ptr = 0x7ffda58d5f3c
agora totais vale = 7

