#include <iostream>
using namespace std;

int main()
{
    int fil, col, k, count, i, j, aug, temp, aux;
    char alt;
    bool sum;

    cout<<"Ingrese el numero de filas: "; cin>>k;

    if (k%2 != 0){

        for(fil=1; fil<= k; fil++){ //recorre filas

            for(col = 1; col <= k; col++){ //recorre columnas

                for(count = 1, i=(k/2)+1, j=i, alt='j', aug=1, temp = 1, sum=true, aux=1; temp <= k*k; temp++){ //calcula el numero que corresponde en base a la posicion

                    if(i==fil && j==col){ //si coinciden las filas y columnas externas con las internas termina el ciclo

                        if (temp<10) cout<<temp<<"  ";
                        else cout<<temp<<' ';

                        temp=k*k;
                    }

                    if(alt=='j'){ //operaciones de columna

                        if(sum==true) j++;
                        else if(sum==false) j--;
                    }

                    else if(alt=='i'){ //operaciones de fila

                         if(sum==true) i++;
                        else if(sum==false) i--;
                    }

                    count++;
                    aux++;

                    if(aux > aug && alt == 'i'){
                        alt = 'j';
                        aux=1;
                    }

                    else if(aux > aug && alt == 'j'){
                        alt = 'i';
                        aux=1;
                    }

                    if (count > aug*2){
                        count=1; //reseta el contador
                        aux=1;
                        aug++; //cantidad de veces que se realiza una operacion
                        sum = !sum; //alterna entre sumar o restar casa 2 iteraciones
                    }

                    }// final del for maestro

                }// final del for de columnas
            cout<<endl;
            }// final del for de filas
        }
    return 0;
}
