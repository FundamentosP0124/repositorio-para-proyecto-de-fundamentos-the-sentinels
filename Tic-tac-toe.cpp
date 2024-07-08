#include <iostream>
using namespace std;

void loop (char c [3][3]);
void intro_primera (char c [3][3]);
void tabla (char c [3][3]);
int main (){

char c [3][3];

loop (c); // LLama a todas las funciones fundamentales y hace un refresco de pantalla.

    system ("pause");
    return 0;
}

void loop (char c [3][3]){
    intro_primera (c);
    tabla (c);
}

void intro_primera (char c [3][3]){

    int i, j;
    char aux;

    aux = '1';

    for (i=0; i < 3; i ++){
        for (j =0; j < 3; j++){
            c [i][j] = aux++;
        }
    }
}

void tabla (char c [3][3]){
    int i, j;

        for (i=0; i < 3; i ++){
            for (j =0; j < 3; j++){
                if (j < 2){
                    cout << ( "%c| ", c [i][j]);
                }   
                else {
                    cout << ( "%c", c [i][j]);
                }
            }
            if (1 < 2){
                cout << ("\n--------\n");
            } 
        }  
        cout << ("\n\n");
}