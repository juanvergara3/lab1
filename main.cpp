#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    short selec = 0, digit;
    long int a,b, rev, temp, temp2, i, j, count, aux;
    float d, e, f;
    double res;
    float pi = 3.1416;
    char c;
    bool sum;

    while (selec != -1){

        cout<<"\nIngrese el ejercicio a ejecutar (-1 para ir a los problemas): "; cin>>selec;
        if (selec != -1 && selec <=30 && selec>=1) cout<<"\n**Ejercicio "<<selec<<"**\n\n";

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


    selec = 0;

    while(selec != -1){ //PROBLEMAS***********
        cout<<"\nIngrese el problema a ejecutar (-1 para salir): "; cin>>selec;
        if (selec != -1 && selec <=17 && selec>=1) cout<<"\n**Problema "<<selec<<"**\n\n";

        switch (selec) {

        default:
            cout<<"ejercicio no definido!"<<endl;
        break;

        case 1: //Problema 1
            cout<<"Ingrese una letra: "; cin>>c;
            a = int(c);

            if ((a>=65 && a<=90)||(a>=97 && a<=122)){

                if (a>=97 && a<=122) a -= 32;

                if (a==65 || a==69 || a==73 || a==79 || a==85){
                cout<<c<<" es una vocal"<<endl;
                }

                else cout<<c<<" es una consonate"<<endl;
            }

            else cout<<"No es una letra!"<<endl;
        break;

        case 2: //Problema 2
            cout<<"Ingrese la catidad: ";cin>>a;

            if(a>=0){
                cout<<"50000: "<<a/50000<<endl; a %= 50000;
                cout<<"20000: "<<a/20000<<endl; a %=20000;
                cout<<"10000: "<<a/10000<<endl; a %= 10000;
                cout<<"5000: "<<a/5000<<endl; a %= 5000;
                cout<<"2000: "<<a/2000<<endl; a %= 2000;
                cout<<"1000: "<<a/1000<<endl; a %= 1000;
                cout<<"500: "<<a/500<<endl; a %= 500;
                cout<<"200: "<<a/200<<endl; a %= 200;
                cout<<"100: "<<a/100<<endl; a %= 100;
                cout<<"50: "<<a/50<<endl; a %= 50;
                cout<<"Faltante: "<<a<<endl;
            }

            else cout<<"Ingrese un cantidad positiva!"<<endl;
        break;

        case 3: //Problema 3

            a=0;

            while(a != -1){
                cout<<"Ingrese el mes (-1 para salir): "; cin>>a;

                if (a>=1 && a<=12){
                    cout<<"Ingrese el dia: "; cin>>b;
                    if (b>=1 && b<=31){

                        cout<<a<<'/'<<b;

                        if (a==4 || a==6 || a==9 || a==11){ //meses de 30 dias
                            if(b==31) cout<<" es una fecha invalida"<<endl;
                            else cout<<" es una fecha valida"<<endl;
                        }

                        else if (a==2){ //febrero
                            if (b == 29) cout<<" es una fecha valida en bisiesto"<<endl;
                            else if (b<=28) cout<<" es una fecha valida"<<endl;
                            else cout<<" es una fecha invalida"<<endl;
                        }

                        else{ //meses de 31 dias
                            cout<<" es una fecha valida"<<endl;
                        }

                    }
                    else cout<<b<<" es un dia invalido."<<endl;
                }
                else if (a == -1) cout<<"saliendo..."<<endl;

                else cout<<a<<" es un mes invalido."<<endl;
            }
        break;

        case 4: //Problema 4

            rev = 0; // dias
            i = 0; // horas
            j = 0; // minutos

            cout<<"Ingrese la hora (Formato 24h): "; cin>>a;
            cout<<"Ingrese la duracion (Formato 24h): "; cin>>b;


            if(a>=0 && a<=2359 && b>=0 && b<=2359 && a%100<60 && b%100<60){// valida intervalos de tiempo

                j = a%100 + b%100; //suma los minutos

                if (j>=60){ //si son 60 minutos o mas, suma 1h y resta esos 60 minuntos
                    i++;
                    j -= 60;
                }

                i += a/100 + b/100; //suma las horas

                if(i>=24){ // si son 24h o mas, suma 1 dia y resta esas 24 horas
                    rev++;
                    i -= 24;
                }

                if(rev>0) cout<<rev<<" dia y "<<i<<':'<<j<<endl; // si hay mas de 0 dias
                else if (j >= 10) cout<<i<<':'<<j<<endl; // si son 10 minutos o mas
                else cout<<i<<":0"<<j<<endl; // menos de 10 min

            }
            else cout<<"Ingrese tiempos validos!"<<endl;
        break;

        case 5: //Problema 5
                cout<<"Ingrese el numero de filas: "; cin>>digit; //a = filas, b = columnas

                if (digit%2 != 0){
                    digit-=1;
                    temp = digit/2; //"cantidad de espacios"

                    for(int k = 1, a=0; a >= 0; a += k ){ //recorre filas

                        if (a>=(digit/2)) k = -1; //revierte el avace del ciclo

                        for(b = 0; b <= digit; b++){ //recorre columnas

                            if(b<temp || b>digit-temp) cout << ' ';

                            else if (b>=temp) cout << '*';
                        }

                        if (k==1) temp--; //decrece la cantidad de espacios hastq ue llega a la mitad
                        else temp++; // aumenta la cantidad de espacios despues de la mitad

                        cout<<endl;
                    }
                }
                else cout<<"El numero de filas debe ser impar!"<<endl;
        break;

        case 6: //Problema 6
            cout<<"Ingrese la cantidad de digitos para la aproximacion: ";cin>>a;

            e = 0;

            if (a>0){
                for(int k = 0; k<a; k++){

                    f=1;

                    for(int m = k; m>0; m--){
                        f *= m;
                    }

                    e += (1/f);
                }

                cout<<"e es aproximadamente: "<<e<<endl;

            }
            else cout<<"Ingrese una cantidad positiva!"<<endl;

        break;

        case 7: //Problema 7

            //se usa un for para definir las variables grandes, ya que al terminar la ejecucion estas se eliminan automaticamente.

            for( long long unsigned int term1, term2, large_count, large_sum, large_digit, large_temp; true; ){
                cout<<"Ingrese la cantidad de terminos de la serie (<1134903171): "; cin>>large_digit;

                if (large_digit <= 1134903171){ // si se ingresa un valor mayor puede salir negativo
                    term1=1; term2=1;
                    large_sum=0;

                    for(large_count=0; large_count<large_digit-2; large_count++){

                        large_temp = term1+term2;

                        term1 = term2;

                        term2 = large_temp;

                        if(large_temp%2 == 0 && large_temp<large_digit && large_temp>0) large_sum += large_temp;

                    }
                    cout<<"El resultado de la suma es: "<<large_sum<<endl;
                    break;
                }

                else if (large_digit >= 1134903171) {
                    cout<<"La suma no es correcta debido a que el tamaño de los numeros de la serie excede el tamaño de los long long unsigned int"<<endl;
                    break;
                }

                else {
                    cout<<"Ingrese una cantidad positiva!"<<endl;
                    break;
                }
            }
        break;

        case 8: //Problema 8
            cout<<"Ingrese 3 numeros: "; cin>>a>>b>>rev;

            if(a>0 && b>0 && rev>a && rev>b ){
                i = a;
                j = b;
                aux = 0;
                sum = true;

                for(int k = 2; ; k++){

                    if(i<rev) { // multiplos de 'a'
                        cout<<i<<'+';
                        aux += i;
                        i = k*a;
                    }

                    if ( i>=rev && sum == true){ // resetea el contador unicamente cuando los multiplos de 'a' sobrepasan el limite (para poder calcular los multiplos de 'b' desde el inicio)
                        sum =false;
                        k=2;
                    }

                    if(j<rev && i>=rev){ // multiplos de 'b'

                        if(j%a != 0) { // si no esta repetido
                            cout<<j<<'+';
                            aux += j;
                        }

                        j = k*b;
                    }

                    if(j>=rev && i>=rev) break; // si ambos multiplos sobrepasan el  limite

                }//final for

                cout<<"\b = "<<aux<<endl; // imprime la suma
            }

            else cout<<"Ingrese entradas validas (el 3er numero debe ser mayor a los dos 1eros, que a su vez deben ser mayores que 0)"<<endl;
        break;

        case 9: //Problema 9
            rev=0;
            temp = 1;

            cout<<"Ingrese un numero: "; cin>>a;

            if(a<0) a *= -1;

            for(; a>0; (a /= 10)&&(temp = 1)){

               digit = (a%10);

               for(temp2 = digit ; temp2>0;--temp2){
                    temp *= digit;
               }
               rev += temp;
            }
            cout<<"\nLa suma de la potencias de sus digitos es: "<<rev<<endl;
        break;

        case 10: //Problema 10
            cout<<"Ingrese el primo que desea ver: ";cin>>a;

            if(a>0){
                temp = 1;
                aux = 1;

                for(count=0; count<a; ){ //cuenta  entre  1 y a

                    aux++; //Potencial numero primo

                    for(rev=2; rev<=(aux/2); rev++){ //verifica si es primo

                        if(aux%rev==0) {// si es divisible por algun numero rompe el ciclo
                            temp = 0;
                            break;
                        }

                        else if(aux%rev != 0){
                            temp = 1;
                        }

                    }
                    if(temp != 0) count++;
                }
                cout<<"\nEl primo numero "<<a<<" es: "<<aux<<endl;
            }

            else cout<<"Ingrese una posicion valida!"<<endl;
        break;

        case 11: //Problema 11
            cout<<"Ingrese el numero: "; cin>>a;

            if (a>0){

                b = 1;
                rev = 1;

                cout<<"El MCM de todos los numero menores a "<<a<<" es: ";

                for(; a>0; a--){

                    temp = a;
                    temp2 = b;

                    while(temp != temp2) { // calcula el MCD
                        if(temp > temp2)
                            temp -= temp2;
                        else
                            temp2 -= temp;
                    }

                    b = (a*b)/temp; // formula para el MCM: (a*b)/MCD(a, b)
                }
                cout<<b<<endl;
            }
            else cout<<"Ingrese un entero positivo!"<<endl;
        break;

        case 12: //Problema 12
            cout<<"Ingrese el numero: ";cin>>a;

            if(a>0){

                temp=1;
                aux = 0;
                cout<<"El mayor factor primo de "<<a<<" es: ";

                for(i = 2; i < a; i++) {

                    if(a % i == 0){ //si i es un factor de a (no necesariamente primo)

                        if(i==3) {
                          temp=1;
                        }

                        for(rev = 2; rev <=  i/2; rev++){ //verifica si es primo

                            if(i % rev == 0) {// si es divisible por algun numero rompe el ciclo
                                temp = 0;
                                break;
                            }

                            else if(i%rev != 0){
                                temp = 1;
                            }

                        }

                        if(temp != 0 && i > aux) {
                            aux = i;
                            temp=0;
                        }
                    }
                }

                if(aux == 0){
                    cout << a << endl; //si a es primo
                }

                else cout << aux << endl;

            }

            else cout<<"Ingrese un numero positivo!"<<endl;

        break;

        case 13: //Problema 13
            cout<<"Ingrese el numero: ";cin>>a;

            if(a>0){
                temp = 1;
                aux = 2;
                temp2=0;

                for(; aux<a; aux++){ //cuenta  entre  1 y a


                    for(rev=2; rev<=(aux/2); rev++){ //verifica si es primo

                        if(aux%rev==0) {// si es divisible por algun numero rompe el ciclo
                            temp = 0;
                            break;
                        }

                        else if(aux%rev != 0){
                            temp = 1;
                        }

                    }
                    if(temp != 0) {
                        count++;
                        temp2+=aux;
                    }

                }
                cout<<"\nLa suma de los primos menores a "<<a<<" es: "<<temp2<<endl;
            }

            else cout<<"Ingrese un numero positivo!"<<endl;
        break;

        case 14: //Problema 14

            cout<<"Si quiere ver todos los palindromos ingrese 'y', de lo contrario ingrese 'n': ";cin>>c;

            /*
            soy consciente de que la solucion de fuerza bruta no es la mejor (~406.000 iteraciones), pero no pude encontrar ninguna documentacion
            sobre metodos para calcular numeros palindromos como multiplicacion de numeros de 3 cifras.
            */

            a = 999;
            b = 999;
            temp2 = 0;
            count = 0;

            while(a>99 && b>99){

                for(; b>99; b--){

                    temp = a*b;
                    aux = temp;
                    rev=0;

                    while(temp>0){
                        digit = temp % 10;
                        rev = (rev * 10) + digit;
                        temp = temp / 10;
                    }
                    if (aux == rev || aux==1 || aux==0) {

                        if(c=='y') cout <<a<<'*'<<b<<" = "<<aux<<endl;

                        if(aux>temp2) {
                            temp2=aux;
                            i =a; j = b;
                        }
                    }
                }

                b = a;
                a--;
            }
            cout<<"\nEl palindromo mas grande como multiplicacion de numeros de 3 cifras es: "<<temp2<<" = "<<i<<'*'<<j<<endl;
        break;

        case 15: //Problema 15
            cout<<"Ingrese el numero de filas: "; cin>>digit; //a = filas, b = columnas

            if (digit%2 != 0){

                cout<<endl;

                temp2 = 0; //suma de las diagonales

                for(a=1; a<= digit; a++){ //recorre filas

                    for(b = 1; b <= digit; b++){ //recorre columnas

                        for(count = 1, i=(digit/2)+1, j=i, c='j', rev=1, temp = 1, sum=true, aux=1; temp <= digit*digit; temp++){ //calcula el numero que corresponde en base a la posicion

                            if(i==a && j==b){ //si coinciden las filas y columnas externas con las internas termina el ciclo

                                if (temp<10) cout<<temp<<"  ";
                                else cout<<temp<<' ';

                                if(a==b || a+b == digit+1) temp2 += temp; //si hace parte de una de las diagonales se suma

                                temp=digit*digit; //rompe el ciclo
                            }

                            if(c=='j'){ //operaciones de columna

                                if(sum==true) j++;
                                else if(sum==false) j--;
                            }

                            else if(c=='i'){ //operaciones de fila

                                 if(sum==true) i++;
                                else if(sum==false) i--;
                            }

                            count++;
                            aux++;

                            if(aux > rev){ //alterna entre  filas y columnas; primero cada 2 operaciones, luego cada 4, cada 6, etc.

                                if(c == 'i') c = 'j';
                                else if (c == 'j') c = 'i';

                                aux=1;
                            }

                            if (count > rev*2){
                                count=1; //reseta el contador
                                rev++; //cantidad de veces que se realiza una operacion
                                sum = !sum; //alterna entre sumar o restar casa 2 iteraciones
                            }

                            }// final del for maestro

                        }// final del for de columnas

                    cout<<endl;

                    }// final del for de filas

                cout<<"\nLa suma de las diagonales es: "<<temp2<<endl;

            }//final del if inicial

            else cout<<"El numero de filas debe ser impar!"<<endl;
        break;

        case 16: //Problema 16
            cout<<"Ingrese un numero: "; cin>>a;

            if(a>0){
                cout<<"si quiere ver todas las series ingrese 't', si solo quiere ver la mas larga ingrese 'm', y si no quiere ver ninguna ingrese 'n': "; cin>>c;

                count = 0;
                temp = 0;

                for(; a>0; a--){

                    b = a;

                    while(true){

                        if(c=='t') cout<<b<<' ';

                        count++;

                        if(b%2 == 0) b /= 2;

                        else b = (3*b)+1;

                        if (b==1) {
                            count++;
                            if(c=='t') cout<<'1'<<endl;
                            break;
                        }
                    }

                    if(temp<count) {
                        temp = count;
                        temp2 = a;
                    }
                    count = 0;
                }

                if(c == 'n' || c == 't') cout<<"La serie mas larga es con la semilla "<<temp2<<" y tiene "<<temp<<" terminos"<<endl;

                if(c == 'm'){ //imprime la serie mas larga

                    cout<<"La serie mas larga es con la semilla "<<temp2<<" y tiene "<<temp<<" terminos: "<<endl;

                    a = temp2;
                    b = a;

                    while(true){

                        cout<<b<<' ';

                        count++;

                        if(b%2 == 0) b /= 2;

                        else b = (3*b)+1;

                        if (b==1) {
                            count++;
                            cout<<'1'<<endl;
                            break;
                        }
                    }
                }
            }
            else cout<<"Ingrese una entrada valida!"<<endl;
        break;

        case 17: //Problema 17
            cout<<"Ingrese la cantidad de divisores: "; cin>>a;

            if(a>=0){ //verica que sea un numero positivo
                b = 0;
                count = 0;

                while(count<=a){

                    b++;
                    count = 0;
                    rev = b*(b+1)/2; // calcula el b-esimo termino

                    for(int k = 1; k<=rev; k++) { //divide rev por los numeros entre 1 y rev
                        if (rev%k == 0) { // si es un divisor suma a count
                            count++;
                        }
                    }

                }
                cout<<rev<<" tiene "<<count<<" divisores"<<endl;
            }
            else cout<<"Ingrese un cantidad positiva!"<<endl;
        break;

        case -1:
            cout<<"\n"<<"Saliendo..."<<endl;
            break;
        break;
        }
    }
    return 0;
}
