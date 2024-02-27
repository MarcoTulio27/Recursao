#include <iostream>

using namespace std;

float potencia(int n, int expoente){
    if(expoente==0){
        return 1;
    }
    else if(expoente<0){
        return 1/potencia(n, -expoente);    //para expoentes negativos, 2^-1 = 1/2
    }
    else{
        return n * potencia(n, expoente-1);
    }
}

int fatorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * fatorial(n-1);
    }

}

int main()
{
    int n;
    cout << "Digite  um numero: ";
    cin >> n;

    cout << "Fatorial de " << n<< " = " << fatorial(n) << endl;

    float expoente;
    cout << "Digite o expoente para " << n << endl;
    cin >> expoente;
    cout<< potencia(n, expoente) << endl;
    cout << " " << n << " elevado a " << expoente << " = " << potencia(n, expoente) << endl;


    return 0;
}
