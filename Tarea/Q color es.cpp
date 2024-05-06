#include <iostream>
#include <string>

int main()
{
    char Letra;
    std :: cout << "Ingresar una letra EN MAYUSCULA: ";
    std :: cin >> Letra;
    
    switch(Letra)
    {
        case 'R':
        std :: cout << " es Rojo";
        break;

        case 'Y':
        std :: cout << " es Amarillo";
        break;

        case 'B':
        std :: cout << " es Azul";
        break;

        case 'W':
        std :: cout << " es Blanco";
        break;

        case 'K':
        std :: cout << " es Negro";
        break;

        case 'C':
        std :: cout << " es Cian";
        break;

        case 'G':
        std :: cout << " es Verde";
        break;

        default:
        std :: cout << "Esa letra no es valida!";

    }
    return 0;
}