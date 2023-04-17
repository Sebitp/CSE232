#include "temp.hpp"


Temperature::Temperature(double num, char symb){
    temp = num;
    symbol = symb;
}
double Temperature::AsCelsius() {
        if (symbol == 'C') return temp;
        if (symbol == 'F') return (temp - 32) * 5 / 9;
        if (symbol == 'K') return temp - 273.15;
        if (symbol == 'R') return (temp - 491.67) * 5 / 9;
        return 0;  // default case
}

double Temperature::AsFahrenheit() {
    if (symbol == 'C') return temp * 9 / 5 + 32;
    if (symbol == 'F') return temp;
    if (symbol == 'K') return (temp - 273.15) * 9 / 5 + 32;
    if (symbol == 'R') return temp - 459.67;
    return 0;  // default case
}

double Temperature::AsKelvin() {
    if (symbol == 'C') return temp + 273.15;
    if (symbol == 'F') return (temp + 459.67) * 5 / 9;
    if (symbol == 'K') return temp;
    if (symbol == 'R') return temp * 5 / 9;
    return 0;  // default case
}

double Temperature::AsRankine() {
    if (symbol == 'C') return (temp + 273.15) * 9 / 5;
    if (symbol == 'F') return temp + 459.67;
    if (symbol == 'K') return temp * 9 / 5;
    if (symbol == 'R') return temp;
    return 0;  // default case
}