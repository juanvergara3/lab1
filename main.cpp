#include <iostream>
using namespace std;

int main()
{
    short selec = 0;
    int long a,b;
    double res;

    while (selec != -1){

        cout<<"\nIngrese el ejercicio a ejecutar (-1 para ir a los problemas): "; cin>>selec;
        if (selec != -1) cout<<"\nEjercicio "<<selec<<"\n\n";

        switch (selec){
        case 1:
            cout<<"Ingrese A: "; cin>>a;
            cout<<"Ingrese B: "; cin>>b;

            cout<<"El residuo de "<<a<<'/'<<b<<" es: "<<a%b<<endl;
        break;

        case 2:
            cout<<"Ingrese un numero: "; cin>>a;

            if(a%2 == 0 && a!=0) cout<<a<<" es par"<<endl;
            else if (a%2 == 1) cout<<a<<" es impar"<<endl;
            else cout<<a<<" no es ni par ni impar"<<endl;
        break;

        case 3:
            cout<<"Ingrese A: "; cin>>a;
            cout<<"Ingrese B: "; cin>>b;

            if (a>b) cout<<"El mayor es "<<a<<endl;

            else if (b>a) cout<<"El mayor es "<<b<<endl;

            else  cout<<"Los 2 numeros son iguales"<<endl;
        break;

        case 4:
            cout<<"Ingrese A: "; cin>>a;
            cout<<"Ingrese B: "; cin>>b;

            if (b<a) cout<<"El menor es "<<b<<endl;

            else if (a<b) cout<<"El menor es "<<a<<endl;

            else  cout<<"Los 2 numeros son iguales"<<endl;
        break;

        case 5:
            cout<<"Ingrese A: "; cin>>a;
            cout<<"Ingrese B: "; cin>>b;

            cout<<a<<'/'<<b<<" = "<<a/b;
        break;

        case 6:
            res =1;
            cout<<"Ingrese A: "; cin>>a;
            cout<<"Ingrese B: "; cin>>b;

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

        case 7:

        break;

        case 8:

        break;

        case 9:

        break;

        case 10:

        break;

        case 11:
            cout<<"Ingrese N: "; cin>>a;
            for (int k=1;k<=10;k++) cout<<a<<" x "<<k<<" = "<<a*k<<endl;
        break;

        case 12:

        break;

        case 13:

        break;

        case 14:

        break;

        case 15:

        break;

        case 16:

        break;

        case 17:

        break;

        case 18:

        break;

        case 19:

        break;

        case 20:

        break;

        case 21:

        break;

        case 22:

        break;

        case 23:

        break;

        case 24:

        break;

        case 25:

        break;

        case 26:

        break;

        case 27:

        break;

        case 28:

        break;

        case 29:

        break;

        case 30:

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
