//
// Created by henry on 10/05/2024.
//

#ifndef TRABALHOBRITO_TEMPERATURA_H
#define TRABALHOBRITO_TEMPERATURA_H

// Functions prototypes declaration for temperature conversions between Celsius, Kelvin and Fahrenheit
double converterCelsiusParaKelvin(double celsius);
double converterCelsiusParaFahrenheit(double fahrenheit);
double converterKelvinParaCelsius(double kelvin);
double converterKelvinParaFahrenheit(double kelvin);
double converterFahrenheitParaCelsius(double fahrenheit);
double converterFahrenheitParaKelvin(double fahrenheit);

// Functions implementation for temperature conversions between Celsius, Kelvin and Fahrenheit
double converterCelsiusParaKelvin(double celsius) {
    return celsius + 273.15;
}

double converterCelsiusParaFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double converterKelvinParaCelsius(double kelvin) {
    return kelvin - 273.15;
}

double converterKelvinParaFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

double converterFahrenheitParaCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double converterFahrenheitParaKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

#endif //TRABALHOBRITO_TEMPERATURA_H