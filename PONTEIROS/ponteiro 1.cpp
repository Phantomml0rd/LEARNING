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
