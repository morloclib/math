#ifndef __CPP_MATH_HPP__
#define __CPP_MATH_HPP__

#include <math.h>
#include <vector>


std::vector<size_t> fibonacci(size_t);

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

std::vector<size_t> fibonacci(size_t n){
    std::vector<size_t> xs;
    if(n <= 0){
       return xs; 
    }
    if(n > 0){
        xs.push_back(1);
    }
    if(n > 1){
        xs.push_back(1);
    }
    while(xs.size() <= (n-1)){
        xs.push_back(xs[xs.size()-1] + xs[xs.size()-2]);
    }
    return(xs);
}

double morloc_acos(double x){
    return acos(x);
}
double morloc_asin(double x){
    return asin(x);
}
double morloc_atan(double x){
    return atan(x);
}
double morloc_atan2(double x, double y){
    return atan2(x, y);
}
double morloc_ceil(double x){
    return ceil(x);
}
double morloc_cos(double x){
    return cos(x);
}
double morloc_cosh(double x){
    return cosh(x);
}
double morloc_exp(double x){
    return exp(x);
}
double morloc_fabs(double x){
    return fabs(x);
}
double morloc_floor(double x){
    return floor(x);
}
double morloc_fmod(double x, double y){
    return fmod(x, y);
}
double morloc_pow(double x, double y){
    return pow(x, y);
}
double morloc_ldexp(double x, int y){
    return ldexp(x, y);
}
double morloc_log(double x){
    return log(x);
}
double morloc_log10(double x){
    return log10(x);
}
double morloc_sin(double x){
    return sin(x);
}
double morloc_sinh(double x){
    return sinh(x);
}
double morloc_sqrt(double x){
    return sqrt(x);
}
double morloc_tan(double x){
    return tan(x);
}
double morloc_tanh(double x){
    return tanh(x);
}

#endif
