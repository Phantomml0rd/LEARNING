#include <iostream>
using namespace std;
// endereços variaveis
int main() {
int copos = 6;
float cafe = 4.5;
  cout << "o valor de copos é:"<< copos << endl;
  cout << "o endereço dos copos é:" << &copos << endl;

  cout<< "O valor do café é:" << cafe << endl;
  cout << "o endereço do café é:" << &cafe << endl;
  return 0;
  // os valore de copos e cafe são iguais, mas os endereços são diferentes a cada execução do programa.

}
## SAIDA DO PROGRAMA 01
conteudo de total = 0x7ffda58d5f3c
conteudo apontado = 6
emdereço total =6
conteudo de ptr = 0x7ffda58d5f3c
agora totais vale = 7

## SAIDA DO PROGRAMA 02
conteudo de total = 0x7ffda58d5f3c
conteudo apontado = 6
emdereço total =6
conteudo de ptr = 0x7ffda58d5f3c
agora totais vale = 7


