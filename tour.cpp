// Tipos de Recorridos en Matrices
// Desarrollador: Alexanyer Naranjo
// Fecha: 10/01/2021
// Contacto: alexanyernaranjo@outlook.com

/*
    Acotación: 
            Cuando conocemos las dimensiones exactadas de una matrices o arreglo,
            el trabajo es mas sencillo de realizar pero lo ideal es buscar la manera
            de trabajar de forma general, es decir, para matrices NxN e inclusive NxM.
*/

#include <iostream>
using namespace std;

void porFilas(int [][3]);
void porColumnas(int [][3]);
void zigzag_horizontal(int [][3]);
void zigzag_vertical(int [][3]);
void escalera_subiendo(int [][3]);
void escalera_bajando(int [][3]);

int main() {

    // Matriz ejemplar de dimensiones 3x3
    int mat[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    // porFilas(mat);
    // porColumnas(mat);
    // zigzag_horizontal(mat);
    // zigzag_vertical(mat);
    // escalera_subiendo(mat);
    // escalera_bajando(mat);

    return 0;
}

void porFilas(int m[][3]) {
    cout<<"::POR FILAS::"<<endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void porColumnas(int m[][3]) {
    cout<<"::POR COLUMNAS::"<<endl;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<m[j][i]<<" ";
        }
        cout<<endl;
    }

}

void zigzag_horizontal(int m[][3]) {
    cout<<"::ZIGZAG HORIZONTAL::"<<endl;

    for (int i = 0; i < 3; i++) {
        if ( i % 2 == 0 ) {
            for (int j = 0; j < 3; j++) {
                cout<<m[i][j]<<" ";
            }
        } else {
            for (int j = 2; j >= 0; j-- ) {
                cout<<m[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void zigzag_vertical(int m[][3]) {
    cout<<"::ZIGZAG VERTICAL::"<<endl;

    for (int j = 0; j < 3; j++ ){
        if ( j % 2 == 0) {
            for (int i = 0; i < 3; i++ ) {
                cout<<m[i][j]<<" ";
            }
        } else {
            for (int i = 2; i >= 0; i-- ) {
                cout<<m[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void escalera_subiendo(int m[][3]) {
    cout<<"::ESCALERA SUBIENDO::"<<endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < (3 - i); j++) {
            cout<<m[i][j]<<" ";
        }
    }
}

void escalera_bajando(int m[][3]) {
    int aux = 2;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < (3 - aux); j++) {
            cout<<m[i][j]<<" ";
        }
        aux--;
    }   
}