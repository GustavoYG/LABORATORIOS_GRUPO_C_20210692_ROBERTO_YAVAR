#include "iostream"
#include "string"
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//ejemplo1
/*
int main()
{
int edades[] = {1,2,9,8,16,32,9,50,36,20,1,87};
int limite = (sizeof(edades)/sizeof(edades[0])); //sizeof devuelve la memoria ocupada
for (int i = 0; i < limite; i++)
{
cout<<edades[i]<<endl;
}
}
*/
//Problema01
/*
int main()
{
string Nombres[5];
string Apellidos[5];
string Edades[5];
string dni[5];

cout << "Por favor ingrese la siguiente información de las Personas: \n";
for(int i = 0; i < 3; i++)
{
cout << "\n******* Persona " << i + 1 << "********:\n";
cout << "Nombre: ";
getline(cin, Nombres[i]);
cout << "Apellido: ";
getline(cin, Apellidos[i]);
cout << "Edad: ";
getline(cin, Edades[i]);
cout << "DNI: ";
getline(cin, dni[i]);
}
}
*/
//ejemplo2
/*
int main()
{
int edades[3][2] = {{1,2},{9,8},{14,21}};
int filas = (sizeof(edades)/sizeof(edades[0]));
int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
cout<<edades[i][j]<<endl;
}
}
}
*/
//Problema02
/*
bool buscarvalor(int v[8],int valor)
{
 for(int i = 0; i < 8; i++){
    if(valor == v[i])
    {
        return true;
    }
 }
    return false;
}
int main()
{
    int a[8],n,valor;
    cout<<"Ingresar 8 numeros enteros: "<<endl;
    for(int i = 0; i < 8; i++)
    {
        cin >>a[i];
    }
    cout << "Ingrese un valor a buscar en el vector: ";
    cin >> n;
    valor = buscarvalor(a,n);
    if(valor)
        cout<<"Se encontro el valor";
    else
        cout<<"No se encontro el valor";
    return 0;
}
*/

//Problema03
/*
int sumafilapar(int matriz[][3])
{
    int f,c;
    int suma = 0;
    for(f = 0;f < 5;f += 2){
        for(c = 0; c <3 ; c++)
        {
            suma += matriz[f][c];
        }
    }
    return suma;
}
int main()
{
    int matriz[5][3],f,c;
    cout<<"Rellenado matriz: "<<endl;
    for(f = 0; f < 5; f++){
        for(c = 0; c < 3; c++)
        {
        cin >> matriz[f][c];
        }
    }
    cout << "La suma de las filas pares es: " << sumafilapar(matriz);
    return 0;
}
*/
//Problema04
/*
bool primo(int n) {
  if (n == 0 || n== 1 || n== 4)
    return false;
  for (int i = 2; i < n/2; i++)
  {
    if (n% i == 0)
        return false;
  }
  return true;
}

int main() {
int primos[100];
cout << "Numeros primos de forma descendente:"<<endl;
for(int i=0;i<100;i++)
    if(primo(i))
        primos[i]=i;
for(int j=100;j>=2;j--)
    if(primo(j))
        cout<<j<<endl;
}
*/
//Problema05
/*

*/
//Problema06
/*
int main () {
    int matriz[3][3];
    int f,c,sumafila=0,fila=0,mayor=0;
    for (f=0;f<3;f++) {
        for (c=0;c<3;c++) {
            cout<<"Llenando matriz "<<"["<<f<<"]"<<"["<<c<<"]";
            cin>>matriz[f][c];
    }
    }
    for (f=0;f<3;f++) {
        sumafila=0;
        fila=f+1;
        for (c=0;c<3;c++) {
            sumafila+=matriz[f][c];
            if (sumafila>mayor) {
                mayor=sumafila;
            }
        }
    }
    cout<<"Mostrando Matriz:"<<endl;
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
            cout<<matriz[i][j]<<"\t";
        cout<<endl;
    }
    cout<<"La fila "<<fila<<" es mayor con: "<<mayor;
    return 0;
}
*/
/*
void llenarmatriz(int m[3][3],int f,int c)
{
    for (f=0;f<3;f++) {
        for (c=0;c<3;c++) {
            cout<<"Llenando matriz "<<"["<<f<<"]"<<"["<<c<<"]";
            cin>>m[f][c];
    }
    }
}
void mostrarmatriz(int m[3][3],int f,int c)
{
   cout<<"Mostrando Matriz:"<<endl;
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
            cout<<m[i][j]<<"\t";
        cout<<endl;
    }
}
void rotarderecha(int m[3][3],int f,int c)
{
    int n[3][3];
     for (f=0; f<3; f++) {
        for (c=0; c<3; c++) {
            if (c == 2) {
                n[f][0] = m[f][c];
            } else {
                n[f][c+1] = m [f][c];
            }
        }
}
    mostrarmatriz(n,3,3);
}
void rotarizquierda(int m[3][3],int f,int c)
{
    int n[3][3];
     for (f=0; f<3; f++) {
        for (c=0; c<3; c++) {
            if (c == 0) {
                n[f][2] = m[f][c];
            } else {
                n[f][c-1] = m [f][c];
            }
        }
}

    mostrarmatriz(n,3,3);
}
void rotararriba(int m[3][3],int f,int c)
{
    int n[3][3];
     for (f=0; f<3; f++) {
        for (c=0; c<3; c++) {
            if (c == 2) {
                n[0][f] = m[f][c];
            } else {
                n[f+1][c] = m [f][c];
            }
        }
}

    mostrarmatriz(n,3,3);
}

int main () {
    int matriz[3][3];
    int opc;
    do {
        cout<<"Ingrese opcion"<<endl;
        cout<<"Opcion 1= Llenar Matriz"<<endl;
        cout<<"Opcion 2= Mostrar Matriz"<<endl;
        cout<<"Opcion 3= Mover columna hacia la derecha"<<endl;
        cout<<"Opcion 4= Mover columna hacia la izquierda"<<endl;
        cout<<"Opcion 5= Mover fila hacia arriba"<<endl;
        cout<<"Opcion 6= Mover fila hacia abajo"<<endl;
        cout<<"Opcion 7= SALIR"<<endl;
        cin>>opc;
        switch (opc) {
            case 1:
                llenarmatriz(matriz,3,3);
            break;
            case 2:
                mostrarmatriz(matriz,3,3);
            break;
            case 3:
                cout<<"Desplazando hacia la derecha..."<<endl;
                rotarderecha(matriz,3,3);
            break;
            case 4:
                cout<<"Desplazando hacia la izquierda..."<<endl;
                rotarizquierda(matriz,3,3);
            break;
            case 5:
                cout<<"Desplazando hacia arriba..."<<endl;
                rotararriba(matriz,3,3);
            default:
                cout<<"Seleccione una opcion"<<endl;
            break;
        }
    }while(opc !=7);
    return 0;
}
*/
void llenarmatriz(int m[3][3],int f,int c)
{
    for (f=0;f<3;f++) {
        for (c=0;c<3;c++) {
            cout<<"Llenando matriz "<<"["<<f<<"]"<<"["<<c<<"]";
            cin>>m[f][c];
    }
    }
}
void mostrarmatriz(int m[3][3],int f,int c)
{
   cout<<"Mostrando Matriz:"<<endl;
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
            cout<<m[i][j]<<"\t";
        cout<<endl;
    }
}
void rotarderecha(int m[3][3],int f,int c)
{
    int n[3][3];
     for (f=0; f<3; f++) {
        for (c=0; c<3; c++) {
            if (c == 2) {
                n[f][0] = m[f][c];
            } else {
                n[f][c+1] = m [f][c];
            }
        }
}
    mostrarmatriz(n,3,3);
}
void rotararriba(int m[3][3],int f,int c)
{
    int n[3][3];
    for (f=0; f<3; f++) {
        for (c=0; c<3; c++) {
            n[f][c] = m[2][2];
        }
    }

    for (f=0; f<3; f++) {
        for (c=0; c<3; c++) {
            m[f][c] = n[f][c];
        }
    }
    mostrarmatriz(n,3,3);
}
int main()
{
    int m[3][3];
    llenarmatriz(m,3,3);
    mostrarmatriz(m,3,3);
    rotararriba(m,3,3);
}
