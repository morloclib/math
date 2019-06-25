#include <math.h>
#include <vector>

double sum(std::vector<double>);
double mean(std::vector<double>);
double var(std::vector<double>);
std::vector<int> fibonocci(size_t);

double sum(std::vector<double> xs){
    double x = 0; 
    for(size_t i = 0; i < xs.size(); i++){
        x += xs[i];
    }
    return(x);
}

double mean(std::vector<double> xs){
    return(sum(xs) / xs.size());
}

double var(std::vector<double> xs){
    double x_bar = mean(xs);
    double diff = 0; 
    for(size_t i = 0; i < xs.size(); i++){
        diff += pow(x_bar - xs[i], 2);
    }
    return(diff / (xs.size() - 1));
}

std::vector<int> fibonocci(size_t n){
    std::vector<int> xs;
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
