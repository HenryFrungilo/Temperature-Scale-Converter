//
// Created by henry on 10/05/2024.
//
#include <iostream>
#include <vector>
#include <string>
#include "temperatura.h"

using namespace std;

int main() {
    short int opcao;
    vector<float> temperatura(3);
    cout << "|-----------------------------------------------------|" << endl;
    cout << "| Bem vindo ao programa de Conversão de Temperaturas! |" << endl;
    cout << "| Escolha a escala de temperatura para ser convertida |" << endl;
    cout << "| 1 - Celsius                                         |" << endl;
    cout << "| 2 - Kelvin                                          |" << endl;
    cout << "| 3 - Fahrenheit                                      |" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "Digite a temperatura em Celsius: ";
            float celsius;
            cin >> celsius;
            temperatura.at(0) = celsius;
            temperatura.at(1) = converterCelsiusParaFahrenheit(celsius);
            temperatura.at(2) = converterCelsiusParaKelvin(celsius);
            break;
        case 2:
            cout << "Digite a temperatura em Kelvin: ";
            float kelvin;
            cin >> kelvin;
            temperatura.at(2) = kelvin;
            temperatura.at(0) = converterKelvinParaCelsius(kelvin);
            temperatura.at(1) = converterKelvinParaFahrenheit(kelvin);
            break;
        case 3:
            cout << "Digite a temperatura em Fahrenheit: ";
            float fahrenheit;
            cin >> fahrenheit;
            temperatura.at(1) = fahrenheit;
            temperatura.at(0) = converterFahrenheitParaCelsius(fahrenheit);
            temperatura.at(2) = converterFahrenheitParaKelvin(fahrenheit);
            break;
    }

    cout << "|-----------------------------------------------------|" << endl;
    cout << "| Temperatura em Celsius: " << temperatura.at(0) << "°C" << endl;
    cout << "| Temperatura em Fahrenheit: " << temperatura.at(1) << "°F" << endl;
    cout << "| Temperatura em Kelvin: " << temperatura.at(2) << "K" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cout << "Deseja converter outra temperatura? (S/N): ";
    string resposta;
    cin >> resposta;
    if (resposta == "S" || resposta == "s") {
        main();
    } else {
        cout << "Obrigado por utilizar o programa de Conversão de Temperaturas!" << endl;
        return 0;
    }
}