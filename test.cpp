#include "cpp_math.hpp"
#include <vector>
#include <iostream>

int main(int argc, char * argv[]){
    std::vector<double> xs = {1.1, 1.2, 1.3}; 
    std::cout << sum(xs) << std::endl;
    std::cout << mean(xs) << std::endl;
    std::vector<double> fs = fibonocci(20);
    for(size_t i = 0; i < fs.size(); i++){
        std::cout << fs[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
