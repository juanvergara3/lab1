#include <iostream>
using namespace std;

int main()
{
    short selec = 0;
    int long a,b;
    double res;
    float pi = 3.1416;

    while (selec != -1){

        cout<<"\nIngrese el ejercicio a ejecutar (-1 para ir a los problemas): "; cin>>selec;
        if (selec != -1) cout<<"\nEjercicio "<<selec<<"\n\n";

        switch (selec){
        case 1: //Ejercicio 1
            cout<<"Ingrese el numerador: "; cin>>a;
            cout<<"Ingrese el denominador: "; cin>>b;

            if (b == 0) cout<<"No definido!"<<endl;
            else if (a<0 && b<0) cout<<"El residuo de "<<a<<'/'<<b<<" es: "<<(-1)*(a%b)<<endl;
            else cout<<"El residuo de "<<a<<'/'<<b<<" es: "<<a%b<<endl;
        break;

        case 2: //Ejercicio 2
            cout<<"Ingrese un numero: "; cin>>a;

            if(a%2 == 0 && a!=0) cout<<a<<" es par"<<endl;
            else if (a%2 == 1) cout<<a<<" es impar"<<endl;
            else cout<<a<<" no es ni par ni impar"<<endl;
        break;

        case 3: //Ejercicio 3
            cout<<"Ingrese A: "; cin>>a;
            cout<<"Ingrese B: "; cin>>b;

            if (a>b) cout<<"El mayor es "<<a<<endl;

            else if (b>a) cout<<"El mayor es "<<b<<endl;

            else  cout<<"Los 2 numeros son iguales"<<endl;
        break;

        case 4: //Ejercicio 4
            cout<<"Ingrese A: "; cin>>a;
            cout<<"Ingrese B: "; cin>>b;

            if (b<a) cout<<"El menor es "<<b<<endl;

            else if (a<b) cout<<"El menor es "<<a<<endl;

            else  cout<<"Los 2 numeros son iguales"<<endl;
        break;

        case 5: //Ejercicio 5
            cout<<"Ingrese el numerador: "; cin>>a;
            cout<<"Ingrese el denominador: "; cin>>b;
            if (b == 0) cout<<"No definido!"<<endl;
            else cout<<a<<'/'<<b<<" = "<<a/b<<" (con redondeo)"<<endl;
        break;

        case 6: //Ejercicio 6
            res =1;
            cout<<"Ingrese la base: "; cin>>a;
            cout<<"Ingrese el exponente: "; cin>>b;

            if (b==0 && a==0){
                cout<<"La operacion no esta definida";
            }

            else if (b==0 || a==1){
                res = 1;
                cout<<"\n"<<a<<'^'<<b<<" es igual a: ";
                cout<<res<<endl;
            }

            else if (b==1 || a == 0){
                res = a;
                cout<<"\n"<<a<<'^'<<b<<" es igual a: ";
                cout<<res<<endl;
            }

            else if ( b>1){
                cout<<"\n"<<a<<'^'<<b<<" es igual a: ";
                for(;b>0;--b){
                    res *= a;
                }
                cout<<res<<endl;
            }

           else if (b<0){
                a = 1/a;
                b = (-1)*b;
                for(;b>0;--b){
                    res *= a;
                }
                cout<<res<<endl;
            }
        break;

        case 7: //Ejercicio 7
            res = 0;
            cout<<"Ingrese un numero: "; cin>>a;
            cout<<"La suma de todos los numeros entre 0 y "<<a<<" es: ";

            if (a > 0){
                for (;a>0;a--){
                    res += a;
                }
                cout<<res<<endl;
            }
            else if (a<0){
                for (;a<0;a++){
                    res += a;
                }
                cout<<res<<endl;
            }
            else cout<<0<<endl;
        break;

        case 8: //Ejercicio 8
            res=1;
            cout<<"Ingrese un numero: "; cin>>a;
            cout<<a<<"! = ";

            if (a>0) {
                for(;a>0;a--)res *= a;
                cout<<res<<endl;
            }
            else if (a<0) {
                for(;a<0;a++)res *= a;
                if (res>0) res *= -1;
                cout<<res<<endl;
            }
            else cout<<res<<endl;
        break;

        case 9: //Ejercicio 9
            cout<<"Ingrese el radio del circulo: "; cin>>a;
            if (a<=0) cout<<"Ingrese un radio positivo!"<<endl;
            else cout<<"El perimetro del circulo de radio "<<a<<" es: "<<2*pi*a<<endl;
        break;

        case 10: //Ejercicio 10
            cout<<"Ingrese N: "; cin>>a;
            if (a<=0)cout<<"Ingrese un entero positivo!"<<endl;
            else{
                cout<<"Los multiplos de "<<a<<" menores que 100 son: "<<endl;
                for(int k=1 ;k<100; k++){
                    if (a*k >=100) break;
                    cout<<a*k<<endl;
                }
            }

        break;

        case 11: //Ejercicio 11
            cout<<"Ingrese un numero: "; cin>>a;
            for (int k=1;k<=10;k++) cout<<a<<" x "<<k<<" = "<<a*k<<endl;
        break;

        case 12: //Ejercicio 12
            cout<<"Ingrese un numero: "; cin>>a;
        break;

        case 13: //Ejercicio 13

        break;

        case 14: //Ejercicio 14

        break;

        case 15: //Ejercicio 15

        break;

        case 16: //Ejercicio 16

        break;

        case 17: //Ejercicio 17

        break;

        case 18: //Ejercicio 18

        break;

        case 19: //Ejercicio 19

        break;

        case 20: //Ejercicio 20

        break;

        case 21: //Ejercicio 21

        break;

        case 22: //Ejercicio 22

        break;

        case 23: //Ejercicio 23

        break;

        case 24: //Ejercicio 24

        break;

        case 25: //Ejercicio 25

        break;

        case 26: //Ejercicio 26

        break;

        case 27: //Ejercicio 27

        break;

        case 28: //Ejercicio 28

        break;

        case 29: //Ejercicio 29

        break;

        case 30: //Ejercicio 30

        break;

        case -1:
            cout<<"\n"<<"Ahora ejecutando problemas: "<<endl;
        break;

        default:
            cout<<"ejercicio no definido"<<endl;
        break;

        }
    }
}
