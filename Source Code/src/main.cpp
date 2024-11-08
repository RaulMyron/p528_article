#include <iostream>
#include "p528.h"

int main() {
    double d__km, h_1__meter, h_2__meter, f__mhz, time_percentage;
    int polarization;

    // Solicita os valores de entrada ao usuário
    // std::cout << "Insira a distância (km): ";
    // std::cin >> d__km;

    // std::cout << "Insira a altura do terminal 1 (metros): ";
    // std::cin >> h_1__meter;

    // std::cout << "Insira a altura do terminal 2 (metros): ";
    // std::cin >> h_2__meter;

    // std::cout << "Insira a frequência (MHz): ";
    // std::cin >> f__mhz;

    // std::cout << "Insira a polarização (0 para horizontal, 1 para vertical): ";
    // std::cin >> polarization;

    // std::cout << "Insira a porcentagem de tempo: ";
    // std::cin >> time_percentage;

    // Cria um objeto Result para armazenar os resultados
    Result result;

    // Chama a função P528 para calcular a perda básica de transmissão
    P528(0, 1000, 1000, 1200, 0, 1, &result);

    // Exibe os resultados
    std::cout << "Modo de propagação: " << result.propagation_mode << std::endl;
    std::cout << "Perda total de transmissão: " << result.A__db << " dB" << std::endl;
    std::cout << "Perda no espaço livre: " << result.A_fs__db << " dB" << std::endl;
    std::cout << "Perda por absorção atmosférica: " << result.A_a__db << " dB" << std::endl;
    std::cout << "Ângulo de elevação no terminal 1: " << result.theta_h1__rad << " rad" << std::endl;

    return 0;
}
