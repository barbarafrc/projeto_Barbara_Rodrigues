#include "D.h"
#include <iostream>

D::D() : D1(0), D2(0.0) {}

void D::MD1() {
    std::cout << "Método MD1() chamado." << std::endl;
}

void D::MD2() {
    std::cout << "Método MD2() chamado." << std::endl;
}
