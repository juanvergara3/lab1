#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    short selec = 0, digit;
    long int a,b, rev, temp, temp2;
    float d, e, f;
    double res;
    float pi = 3.1416;
    char c;

    while (selec != -1){

        cout<<"\nIngrese el ejercicio a ejecutar (-1 para ir a los problemas): "; cin>>selec;
        if (selec != -1 && selec <=30 && selec>=1) cout<<"\nEjercicio "<<selec<<"\n\n";

        switch (selec){

        default:
            cout<<"ejercicio no definido!"<<endl;
        break;

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

            for (int k=1; k<=5; k++){
                res = 1;
                for(int i = k; i>0; i--) res *= a;

                cout<<a<<'^'<<k<<" = "<<res<<endl;
            }
        break;

        case 13: //Ejercicio 13
            cout<<"Ingrese un numero(entero positivo): "; cin>>a;
            if (a==0) cout<<"0 tiene infinitos divisores"<<endl;
            else if (a>0){
                for(int k = 1; k<=a; k++){
                    if (a%k == 0) cout<<k<<endl;
                }
            }
            else cout<<"Por favor ingrese un entero positivo!"<<endl;
        break;

        case 14: //Ejercicio 14
            for(int k=1;k<=50;k++){
                cout<<k<<"  "<<51-k<<endl;
            }
        break;

        case 15: //Ejercicio 15
            res = 0;
            while(true){
                cout<<"Ingrese un numero: "; cin>>a;
                if(a == 0) break;
                res += a;
            }
            cout<<"La suma de los numeros ingresados es: "<<res<<endl;
        break;

        case 16: //Ejercicio 16
            res = 0;
            b = 0;
            while(true){
                cout<<"Ingrese un numero: "; cin>>a;
                if(a == 0) break;
                res += a;
                b++;
            }
            cout<<"El promedio de los numeros ingresados es: "<<res/b<<endl;
        break;

        case 17: //Ejercicio 17
            b = -2147483648; //Menor valor posible para un long int
            while(true){
                cout<<"Ingrese un numero: "; cin>>a;
                if(a == 0) break;
                if (a>b) b=a;
            }
            cout<<"El mayor de los numeros ingresados es: "<<b<<endl;
        break;

        case 18: //Ejercicio 18
            cout<<"Ingrese un numero: "; cin>>a;
            b=0;

            if (a<0) cout<<"No real!"<<endl;

            else{
                for(int k=1; k<=(a/2); k++){
                    if(k*k == a){
                        cout<<a<<" es un cuadrado perfecto"<<endl;
                        b=1;
                        break;
                    }
                }
                if (b==0) cout<<a<<" no es un cuadrado perfecto"<<endl;
            }
        break;

        case 19: //Ejercicio 19
            b=0;

            cout<<"Ingrese un numero: "; cin>>a;

            if (a<0) cout<<"Los primos son enteros positivos!"<<endl;

            else{
                for(int k=2; k<=(a/2); k++){
                    if((a%k)== 0){
                        cout<<a<<" NO es primo"<<endl;
                        b=1;
                        break;
                    }
                }
                if (b==0) cout<<a<<" es primo"<<endl;
            }
        break;

        case 20: //Ejercicio 20
                 cout << "Ingrese un numero positivo: "; cin >> a;

                 if (a<0) cout<<"Los palindromos no pueden ser negativos!"<<endl;

                 else{
                     rev=0;
                     b = a;

                     while(a>0){
                         digit = a % 10;
                         rev = (rev * 10) + digit;
                         a = a / 10;
                     }

                     if (b == rev || b==1 || b==0)
                         cout <<b<< " es un numero palindromo"<<endl;
                     else
                         cout <<b<< " NO es un numero palindromo"<<endl;
                 }

        break;

        case 21: //Ejercicio 21
            cout << "Ingrese una letra: "; cin >> c;
            a = int(c);

            if (a>=97 && a<=122)  a -= 32;

            else if (a>=65 && a<=90) a += 32;

            else cout<<"No es una letra: ";

            cout<<c<<"--->"<<char(a)<<endl;
        break;

        case 22: //Ejercicio 22
            cout<<"Ingrese la cantidad de segundos: "; cin>>a;
            if (a<0) cout<<"Ingrese un cantidad positiva!"<<endl;
            else{
                cout<<(a/60)/60<<':'<<(a/60)%60<<':'<<(a%60)%60<<endl;
            }
        break;

        case 23: //Ejercicio 23
            cout<<"Ingrese un numero: "; cin>>a;
            cout<<"Ingrese otro numero: "; cin>>b;

            temp = a;
            temp2 = b;

            while(temp2 != 0){ //se halla el MCD
                rev = temp2;
                temp2 = temp%temp2;
                temp = rev;
            }

            cout<<"El MCM de "<<a<<" y "<<b<<" es: "<<(a*b)/temp<<endl;
        break;

        case 24: //Ejercicio 24
            cout<<"Ingrese el tamaño: "; cin>>a;

            if(a>0){
                for(b=0; b<a; b++) cout<<'+';

                for(temp = a-2, cout<<endl; temp >0;temp--){
                    cout<<'+';
                    for (b = a-2; b>0 ;b--) cout<<' ';
                    cout<<'+'<<endl;
                }

                for(b=0; b<a; b++) cout<<'+';
            }
            else cout<<"Ingrese un tamaño valido!"<<endl;


        break;

        case 25: //Ejercicio 25
            cout<<"Ingrese un numero: "; cin>>a;

            if (a==0) cout<<"0 tiene 1 digito"<<endl;

            else{
                digit = 0;
                cout<<a<<" tiene ";

                if(a<0) a*= (-1);

                while(a>0){
                    a /= 10;
                    digit++;
                }

                cout<<digit<<" digitos"<<endl;
            }

        break;

        case 26: //Ejercicio 26
            cout<<"Ingrese el primer numero: "; cin>>d;
            cout<<"Ingrese el segundo numero: "; cin>>e;
            cout<<"Ingrese el tercer numero: "; cin>>f;

            if(d>0 && e>0 && f>0){
                if ((d+e>f) && (d+f>e) && (e+f>d)){ //teorema de la desigualdad del triángulo
                    if (d==e && d==f && e == f) cout<<"Se forma un triangulo equilatero"<<endl;

                    else if (d==e || d==f || e == f) cout<<"Se forma un triangulo isosceles"<<endl;

                    else if (d!=e && d!=f && e != f) cout<<"Se forma un triangulo escaleno"<<endl;
                }

                else cout<<"Las longitudes ingresadas no forman un triangulo!"<<endl;
            }

            else cout<<"Ingrese longitudes validas! "<<endl;
        break;

        case 27: //Ejercicio 27
            cout<<"Ingrese el primer numero: "; cin>>d;
            cout<<"Ingrese el operando: "; cin>>c;
            cout<<"Ingrese el segundo numero: "; cin>>e;

            if (c == '+') cout<<d<<" + "<<e<<" = "<<d+e<<endl;

            else if (c == '-') cout<<d<<" - "<<e<<" = "<<d-e<<endl;

            else if (c == '*')  cout<<d<<" * "<<e<<" = "<<d*e<<endl;

            else if (c == '/' && e != 0) cout<<d<<" / "<<e<<" = "<<d/e<<endl;

            else cout<<"Error!";
        break;

        case 28: //Ejercicio 28
            cout<<"Ingrese la cantidad de elementos usados para la aproximacion: "; cin>>a;

            if (a>0){
                res = 0;
                d = 1;
                b = 1;

                for(;a>0; a--){

                    if(b == 1) {
                        res += 1/d;
                        b = 0;
                    }

                    else if (b == 0){
                        res -= 1/d;
                        b = 1;
                    }

                    d += 2;
                }
                cout<<"Pi es aproximadamente: "<<4*res<<endl;
            }

            else cout<<"Ingrese un entero positivo!"<<endl;
        break;

        case 29: //Ejercicio 29
            a = 0;
            b=100;

            cout<<"Piense en un numero entre 0 y 100"<<endl;
            cout<<"Ingrese < si su numero es mayor que el que se muestra, > si es menor, o = si es igual: "<<endl;

            while(true){
                rev = (a+b)/2;
                cout<<rev;
                cin>>c;
                if (c=='<'){
                    a = rev;
                }
                else if (c=='>'){
                    b = rev;
                }
                else if (c=='='){
                    cout<<"su numero es "<<rev<<endl;
                    break;
                }

                else cout<<"Ingrese una entrada valida!"<<endl;
            }
        break;

        case 30: //Ejercicio 30
            b = (rand() % 100);

            cout<<"Debes adivinar X\n"<<endl;

            while(true){
                cout<<"Ingrese un numero (0-100): "; cin>>a;

                if(a>=0 && a<=100){
                    if(a>b)cout<<a<<" > X"<<endl;

                    else if (a<b) cout<<a<<" < X"<<endl;

                    else{
                        cout<<"Adivinaste!"<<endl;
                        break;
                    }
                }
                else cout<<"Ingrese un numero en el rango!"<<endl;
            }

        break;

        case -1:
            cout<<"\n"<<"Ahora ejecutando problemas: "<<endl;
            break;
        break;
        }
    }

    while(selec != -1){
        cout<<"\nIngrese el problema a ejecutar (-1 para salir): "; cin>>selec;
        if (selec != -1 && selec <=17 && selec>=1) cout<<"\nProblema "<<selec<<"\n\n";

        switch (selec) {

        default:
            cout<<"ejercicio no definido!"<<endl;
        break;

        case 1: //Problema 1

        break;

        case 2: //Problema 2

        break;

        case 3: //Problema 3

        break;

        case 4: //Problema 4

        break;

        case 5: //Problema 5

        break;

        case 6: //Problema 6

        break;

        case 7: //Problema 7

        break;

        case 8: //Problema 8

        break;

        case 9: //Problema 9

        break;

        case 10: //Problema 10

        break;

        case 11: //Problema 11

        break;

        case 12: //Problema 12

        break;

        case 13: //Problema 13

        break;

        case 14: //Problema 14

        break;

        case 15: //Problema 15

        break;

        case 16: //Problema 16

        break;

        case 17: //Problema 17

        break;

        case -1:
            cout<<"\n"<<"Saliendo..."<<endl;
            break;
        break;
        }
    }
    return 0;
}
