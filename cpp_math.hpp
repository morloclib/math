#ifndef __CPP_MATH_HPP__
#define __CPP_MATH_HPP__

#include <math.h>
#include <vector>


// basic arithmetic
#define add(x,y) x + y
#define sub(x,y) x - y
#define mul(x,y) x * y
#define div(x,y) x / y
#define mod(x,y) x % y

std::vector<double> fibonacci(size_t);

template <class A>
A sum(std::vector<A> xs){
    double x = 0; 
    for(size_t i = 0; i < xs.size(); i++){
        x += xs[i];
    }
    return(x);
}

template <class A>
A mean(std::vector<A> xs){
    return(sum(xs) / xs.size());
}

template <class A>
A var(std::vector<A> xs){
    A x_bar = mean(xs);
    A diff = 0; 
    for(size_t i = 0; i < xs.size(); i++){
        diff += pow(x_bar - xs[i], 2);
    }
    return(diff / (xs.size() - 1));
}

std::vector<double> fibonacci(size_t n){
    std::vector<double> xs;
    if(n <= 0){
       return xs; 
    }
    if(n > 0){
        xs.push_back(1);
    }
    if(n > 1){
        xs.push_back(1);
    }
    while(xs.size() <= n){
        xs.push_back(xs[xs.size()-1] + xs[xs.size()-2]);
    }
    return(xs);
}

#endif
