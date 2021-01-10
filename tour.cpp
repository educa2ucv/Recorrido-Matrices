// Tipos de Recorrido para matriz 3x3
// Desarrollador: Alexanyer Naranjo
// Fecha: 10/01/2021
// Contacto: alexanyernaranjo@outlook.com

#include <iostream>
using namespace std;

void porFilas(int [][3]);
void porColumnas(int [][3]);
void zigzag_horizontal(int [][3]);
void zigzag_vertical(int [][3]);

int main() {

    int mat[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    // porFilas(mat);
    // porColumnas(mat);
    
    return 0;
}

void porFilas(int m[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void porColumnas(int m[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<m[j][i]<<" ";
        }
        cout<<endl;
    }

}

void zigzag_horizontal(int m[][3]) {

}

void zigzag_vertical(int m[][3]) {

}