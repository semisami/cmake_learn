#include <iostream>
#include "dog.h"

int main(){

   Animal * p_animal = new Dog;

    
   delete p_animal;
   std::cout << "------------- run 2 -------------" << std::endl;
  
    return 0;
}