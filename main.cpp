//Escriba un algoritmo que dados los datos a, b, c que representan número enteros diferentes, escriba
//los números en forma ascendente. Por ejemplo, si los números son 2,3,1, la salida del programa sería: 1,2,3.
int main() {
    int a, b, c;

    std::cout << "Digite 3 números" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a > b) {
        if (a > c) {
            if (b > c) {
                std::cout << "El órden de los números es: " << c << " , " << b << " , " << a << std::endl;
            }
            else {
                std::cout << "El órden de los números es: " << b << " , " << c << " , " << a << std::endl;
            }

        }
        else {
            std::cout << "El órden de los números es: "<< b << " , " << a << " , " << c << std::endl;
        }

    }
    else if (b > c) {
        if (a > c) {
            std::cout << "El órden de los números es: "<< c << " , " << a << " , " << b << std::endl;
        }
        else {
            std::cout << "El órden de los números es: " << a << " , " << c << " , " << b << std::endl;
        }
    }
    else {
        std::cout << "El órden de los números es: " << a << " , " << b << " , " << c << std::endl;
    }
    return 0;
}