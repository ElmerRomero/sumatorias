/* Incacutipa Huarachi Elmer Romero 
en las siguientes se muestras las funciones de :
1 sumatoria de unos.
2 sumatoia de numeros sucesivos
3 sumatoria de i al cuadrado
4 factorial con un bucle
5 factorial en recursivo
6 fibonacci
respectivamente 

*/
#include <iostream>

using namespace std;
// sumas de N unos
void sumatoriaUnos(int n) {
    int suma=0;
      
    for(int i=1;i<=n;i++){
        suma=suma+1;
        if(i==1){
            cout<<"Z = ";
        }
        if(i<n){
            cout<<1<<" + ";
        }
        else
            cout<<1<<" = "<<suma<<endl;
    }
    
}
// suma de 1 a n
void sumatoria1aN(int n) {
    int suma =0;
    for(int i=1;i<=n;i++){
        suma=suma+i;
        if(i==1){
            cout<<"Z = ";
        }
        if(i<n){
            cout<<i<<" + ";
        }
        else
            cout<<i<<" = "<<suma<<endl;
    }
}
// suma de n numeros cuadrados 
void sumatoria1aN2(int n) {
    int suma = 0;
   
    for(int i=1;i<=n;i++){
        
        suma=suma+(i*i);
        if(i==1){
            cout<<"Z = ";
        }
        if(i<n){
            cout<<i<<"^2"<<" + ";
        }
        else
            cout<<i<<"^2"<<" = "<<suma<<endl;
    }
}
// facgtorial  utilizando recursividad 
long factorialBucle(int n){
    long resultado = 1; 
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}
// factorial con recursvidad
long factorialRecursivo(int n) {
    if (n == 0 ) {
        return 1;
    } else {
        return n * factorialRecursivo(n - 1);
    }
}
// secuencia que multiplos hasta n 
void secuencia(int n){
    for (int i = 1; i <= n; ++i) {
        cout << i;
        if (i < n) {
            cout << "x";
        }
    }
    
}
// serie de fibonacci
int  serie(int a){
    if(a==0||a==1){
        return a;
    }
    else{
        return serie(a-1)+serie(a-2);
    }
}
int main() {
    char opcion;
    do {
        int n;
        cout<<"----------------------------------------------------------"<<endl;
        cout << "Seleccione la operacion que desea realizar:" << endl;
        cout << "a) Sumatoria de n unos." << endl;
        cout << "b) Sumatoria de numeros consecutivos." << endl;
        cout << "c) Sumatoria de los cuadrados " << endl;
        cout << "d) factioral con bucle"<<endl;
        cout << "e) factorial con recursividad"<<endl;
        cout << "f) fibonacci "<<endl;
        cout << "d) Salir." << endl;
       
        cout<<"----------------------------------------------------------"<<endl;
        cin >> opcion;

        switch (opcion) {
            case 'a':
                cout << "Ingrese el valor de n para calcular la sumatoria de n unos: ";
                cin >> n;
                cout << "La sumatoria de " << n << " unos es: ";
                       sumatoriaUnos(n) ;
                break;
            case 'b':
                cout << "Ingrese el valor de n para calcular la sumatoria de 1 a n: ";
                cin >> n;
                cout << "La sumatoria de 1 a " << n << " es: " ;
                 sumatoria1aN(n);
                break;
            case 'c':
                cout << "Ingrese el valor de n para calcular la sumatoria de 1 a n^2: ";
                cin >> n;
                cout << "La sumatoria de 1 a " << n << "^2 es: " ;
                 sumatoria1aN2(n) ;
                break;
            case 'd':
                cout << "ingrese el valor para el factorial " << endl;
                cin>>n;
                secuencia(n) ;
                cout << "="<< factorialBucle(n) << endl;
                break;
            case 'e':
                cout << "Ingrese el valor para el factorial" << endl;
                cin >> n;
                secuencia(n) ;
                cout << "=" << factorialRecursivo(n) << endl;
                break;
            case 'f':
                cout << "Ingrese el numero para mostrar en numero de series que quieres" << endl;
                cin>>n;
                
                for (int i=0;i<n;i++){
                    cout<<serie(i)<<" ";
                }
                cout<<"\n";
                break;
            case 'g':
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
                break;
        }
    } while (opcion != 'g');

    return 0;
}
