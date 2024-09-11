#include <iostream>
#include <math.h>

void Koren(float a, float b, float c, float* x1, float* x2) {
    float D = b * b - 4 * a * c;
    if (D > 0) {
        *x1 = (-b + sqrt(D)) / (2 * a);
        *x2 = (-b - sqrt(D)) / (2 * a);
    }
    else if (D == 0) {
        *x1 = *x2 = -b / (2 * a);
    }
    else if (D < 0) {
        std::cout << "Uravnenie imeet kompleksnie chisla\n";
        *x1 = *x2 = NAN;  // ќбозначение отсутстви€ действительных корней
    }
}

int main() {
    float q, p, r;
    float y1, y2;

    std::cout << "Vvedite a, b, c: ";
    std::cin >> q >> p >> r;

    if (q == 0) {
        std::cout << "Ne kvadratnoe uravnenie";
        return 0;
    }

    Koren(q, p, r, &y1, &y2);

    std::cout << "Korni uravneniya: x1 = " << y1 << ", x2 = " << y2 << std::endl;

    return 0;
}
