#include <iostream>
using namespace std; class gato{
    private:
        int suEdad;
        float suPeso;
public: void Edad( int edad);
int Edad(); void Peso(float peso); float peso(); void Maullara(); };


 void gato::Edad (int edad){ suEdad=edad; }
int gato::Edad (){ return suEdad;
}

void Gato :: Peso(float peso) { suPeso = peso;
}

float gato::peso(){return suPeso;
}
void Gato::Maullar(){cout << "Miauuu" << endl;
 }
int main (void){
Gato pelusa;
pelusa edad(5};
pelusa.peso(3.5);

cout << "El peso de pelusa es: " << Pelusa.Edad() << endl;
cout << "La edad de Pelusa es: " << Pelusa.Peso() << endl;
Pelusa.Maullar();

}
