#include <iostream>
#include <type_traits>

template <typename T>
typename std::enable_if<std::is_integral<T>::value>::type
func(T t){
  std::cout << "É Inteiro: " << t << std::endl;
}

template <typename T>
typename std::enable_if<!std::is_integral<T>::value>::type
func(T t){
    std::cout << "Não é inteiro: " << t << std::endl;
}

// é um pouquinho mais rapido o tempo de compilação  do que fazer um if else e decidir qual função usar
int main(){
  func(1);
  func("oi");
}