#include <iostream>
#include <vector>
// creditos: gustavo

using namespace std;

int main()
{

    /*
    
    1._Calcula el producto de dos vectores y almacena el resultado en otro vector.
    2._Ingresar por consola números reales que se vayan almacenando en un vector y finalmente obtener como resultado la suma total del cuadrado de los números que contiene dicho vector.
    3._Ingresar por consola números enteros que se vayan almacenando en un vector y que me devuelva el mismo vector pero sin los números repetidos.
    4._Hacer lo mismo que el 3 pero que además de devolverme el vector sin los números repetidos también me lo devuelva ordenado de manera ascendente.
    5._Contruye un programa que al recibir como datos dos vectores de tipo entero N y M respectivamente (llenar los vectores por consola)  genere un nuevo vector
    ordenado de forma descendente de N+M (es decir, con el resultado de la suma de los vectores N y M).

    */
    int pNum, pNumR, ejercicio = 0;
    int k, r = 0,x;
    
    
            
    
    // vectores
    vector<int> Trokonas;
    vector<int> Cartuchos;
    vector<int> CacahuatesV1, PistacheV1, Resultado;
    cout << "introduzca el ejercicio a realizar" << endl;
    cin >> ejercicio;
    struct node* root = NULL;

     int x;
     bool Nrep = false;
     vector<int> Numeros, NSR;



    switch (ejercicio)
    {

    case 1:

        cout << "1._Calcula el producto de dos vectores y almacena el resultado en otro vector." << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "cuantos cacahuates tiene juan?: ";
            cin >> pNum;
            CacahuatesV1.push_back(pNum);
            cout << "los multiplica con los cacahuates de victoria: ";
            cin >> pNum;
            PistacheV1.push_back(pNum);

            pNumR = CacahuatesV1[i] * PistacheV1[i];
            Resultado.push_back(pNumR);
        }

        //esto imprime uno por uno el vector eseado
        for (int i = 0; i < Resultado.size(); i++)
        {
            cout << "\n" << CacahuatesV1[i] << " * " << PistacheV1[i] << " | " << Resultado[i]<< "  estos son los cacahuates";
        }
        break;
    

        case 2:
            cout << "2._Ingresar por consola números reales que se vayan almacenando en un vector y finalmente obtener" << endl;
            cout <<"como resultado la suma total del cuadrado de los números que contiene dicho vector." << endl;
            

            for (int i = 0; i < 5; i++)
            {

                cout << "Ingresa un numero: ";
                cin >> k;
                cout << endl;
                Cartuchos.push_back(k);

                r = r + Cartuchos[i];

            }

            r = r * r;

            for (int i = 0; i < Cartuchos.size(); i++)
            {

                if (i == Cartuchos.size() - 1)
                {
                    cout << Cartuchos[i];
                }
                else
                {
                    cout << Cartuchos[i] << " + ";
                }

            }

            cout << " = " << r << endl;

            break;

        case 3:
    
            cout << "3._Ingresar por consola números enteros que se vayan almacenando en un vector y que me devuelva el mismo vector pero sin los números repetidos." << endl;

            for (int i = 0; i < 10; i++)
            {

                cout << "Ingresa un numero: ";
                cin >> x;
                cout << endl;
                Trokonas.push_back(x);

            }

            for (int i = 0; i < Trokonas.size(); i++)
            {

                if (Trokonas[i] != Trokonas[i + 1])
                {
                    if (i < Trokonas.size() - 1)
                    {
                        cout << Trokonas[i] << ", ";
                    }
                    else
                    {
                        cout << Trokonas[i];
                    }

                }

            }
            
            break;
        case 4:

            cout << "2._Ingresar por consola números reales que se vayan almacenando en un vector y finalmente obtener como resultado la suma total del cuadrado de los números que contiene dicho vector. " << endl;

            for (int i = 0; i < 10; i++)
            {

                cout << "Ingresa un numero: ";
                cin >> x;
                cout << endl;
                Numeros.push_back(x);

            }

            for (int i = 0; i < Numeros.size(); i++)
            {
                for (int j = 0; j < Numeros.size(); j++)
                {
                    if (i != j)
                    {

                        if (Numeros[i] == Numeros[j])
                        {
                            //cout<<Numeros[i]<<" == "<<Numeros[j]<<endl;
                            Nrep = false;
                            break;
                        }
                        else
                        {
                            //cout<<Numeros[i]<<" != "<<Numeros[j]<<endl;
                            Nrep = true;
                        }

                    }
                }

                if (Nrep)
                {
                    NSR.push_back(Numeros[i]);
                }

            }

            for (int i = 0; i < NSR.size(); i++)
            {
                cout << NSR[i] << " ";
            }

            root = insertNode(root, Numeros[0]);
            for (int i = 1; i < NSR.size(); i++)
            {
                insertNode(root, Numeros[i]);
            }

            

            break;
        case 5:

            cout << "5._Contruye un programa que al recibir como datos dos vectores de tipo entero N y M respectivamente (llenar los vectores por consola)  genere un nuevo vector" << endl;
            cout << "ordenado de forma descendente de N+M (es decir, con el resultado de la suma de los vectores N y M)." << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << "cuantos cacahuates tiene juan?: ";
                cin >> pNum;
                CacahuatesV1.push_back(pNum);
                cout << "los multiplica con los cacahuates de victoria: ";
                cin >> pNum;
                PistacheV1.push_back(pNum);

                pNumR = CacahuatesV1[i] + PistacheV1[i];
                Resultado.push_back(pNumR);
            }

            //esto imprime uno por uno el vector eseado
            for (int i = 0; i < Resultado.size(); i++)
            {
                cout << "\n" << CacahuatesV1[i] << "  " << PistacheV1[i] << " | " << Resultado[i] << "  estos son los cacahuates";
            }

            break;
    }

    

    return 0;
}


