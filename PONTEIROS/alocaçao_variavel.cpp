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
