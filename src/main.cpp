#include <iostream>

/// @brief: Adiciona 1 ao valor do parâmetro `x`
void by_value(int x) {
  // TODO
  x+=1;
}

/// @brief: Adiciona 1 ao valor do parâmetro `x`
void by_reference(int &x) {
  // TODO
  x+=1 ;
}

int main(){
  // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
  int V=10;
  
  // 2) Declare um ponteiro para inteiros e inicialize com valor nulo (aka 'nullptr')
  int *ptr = nullptr;
  
  // 3) Declare um vetor de inteiros e inicialize com valores de 9 a 0 (nessa ordem)
  int Vetor[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  
  // 4) Imprima o ENDEREÇO da variável declarada em (1)
  std::cout<< " " << &V << std::endl;
  
  // 5) Imprima o CONTEÚDO da variável declarada em (1)
  std::cout<< " " << V << std::endl;
  
  // 6) Imprima o ENDEREÇO da variável declarada em (2)
  std::cout<< " " << &ptr << std::endl;
   
  // 7) Imprima o CONTEÚDO da variável declarada em (2)
  std::cout<< " " << ptr << std::endl;

  // 8) Imprima o ENDEREÇO da variável declarada em (3)
  std::cout<< " " << &Vetor << std::endl;
  
  // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
  std::cout<< " " << &Vetor[0] << std::endl;
  
  // 10) Imprima o CONTEÚDO da primeira posição da variável declarada em (3)
  std::cout<< " " << Vetor[0] << std::endl;

  // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
  ptr = &V;

  // 12) Imprima o CONTEÚDO da variável declarada em (2)
  std::cout << " " << ptr << std::endl;
   
  // 13) Imprima o CONTEÚDO da varíavel que é apontada por (2)
  std::cout << " " << *ptr << std::endl;
  
  // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do CONTEÚDO de (2)
  std::cout << " " << (&V == ptr) << std::endl;
  
  // 15) Coloque o VALOR '5' na varíavel que é apontada pela variável de (2)
  *ptr = 5;

  // 16) Imprima o CONTEÚDO da variável declarada em (1)
  std::cout << " " << V << std::endl;

  // 17) Atribua o CONTEÚDO da variável de (3) à variável de (2)
  ptr = Vetor;

  // 18) Imprima o CONTEÚDO da variável declarada em (2) 
  std::cout << " " << ptr << std::endl;
 
  // 19) Imprima o CONTEÚDO da variável que é apontada pela variável de (2)
  std::cout << " " << *ptr << std::endl;

  // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável de (2)
  *(ptr)= Vetor[0];

  // 21) Imprima o CONTEÚDO da variável declarada em (2) 
  std::cout << " " << &Vetor[0] << std::endl;

  // 22) Imprima o CONTEÚDO da variável que é apontada pela variável de (2) 
  std::cout << " " << *ptr << std::endl;

  // 23) Imprima os elementos de (3) utilizando a notação [] (e.g. v[i])
   for (int i = 0; i < 10; i++) {
    std::cout << " " << Vetor[i];
  }
  std::cout <<"\\s*";
  std::cout << std::endl;

  // 24) Imprima os elementos de (3) utilizando a notação ponteiro/deslocamento (e.g. *(v + i))
  for (int i = 0; i < 10; i++) {
    std::cout << " " << *(Vetor + i);
  }
  std::cout <<"\\s*";
  std::cout << std::endl;

  // 25) Implemente a função `by_value`
  // 26) Chame a função `by_value`, passando a variável declarada em (1) como argumento
   by_value(V);
  
  // 27) Imprima o CONTEÚDO da variável declarada em (1)
  std::cout << " " << V << std::endl;


  // 28) Implementa a função `by_reference`
  // 29) Chame a função `by_reference`, passando a variável declarada em (1) como argumento
  by_reference(V);
  
  // 30) Imprima o CONTEÚDO da variável declarada em (1)
  std::cout << " " << V << std::endl;

  return 0;
}