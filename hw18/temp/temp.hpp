#include<string>
using std::string;
struct Temperature{
    double temp;
    char symbol;
    Temperature(double, char);
    double AsCelsius();
    double AsKelvin();
    double AsFahrenheit();
    double AsRankine();

};

