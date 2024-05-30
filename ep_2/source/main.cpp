#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a + b;
}

int main(){

    std::cout << "C++ 20" << std::endl;
    std::cout << "Sum: " << add(9, 5) << std::endl;

    return 0;

}