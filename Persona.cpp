#include <iostream>
using namespace std;

class Persona{
    protected:
        string nombres;   
        string DNI;
        int edad;
    public:
    // Constructor 
        Persona(string, string , int);
        void mostrarDatos();
};

//Constructor de la clase persona
//Nameclass :: Nameconstructor(tipo de datos la misma cantidad que lo que se declaro)
//Preferible que los parametros tengan relacion con las varibales de esa clase 
// n de nombres, d de DNI, e de edad 

//Funciones de la clase Persona 
Persona :: Persona(string n, string d, int e){
    //Asignar lo que se menciono en el comentario anterior 
    nombres=n;
    DNI=d;
    edad=e;
}

void Persona :: mostrarDatos(){
    cout<< nombres <<" tiene el #DNI "<< DNI <<"y su edad es "<< edad ;
    cout<<" years. "<<endl;
}

//Clase derivada docente 

class Docente : public Persona{
    private:
        int sueldo;
        string especialidad;
    piblic:
    //las 3 primeras variables osn derivadas de la clase Persona
        Docente(string,string,int, int,string);
        void mostrarDocente();   
};

Docente:: Docente(string n,string d,int e,int s,string es): Persona(n,d,e){
    sueldo=s;
    especialidad=es;
}
void Docente:: mostrarDocente(){
    mostrarDatos();
    cout<<" es un docente con un sueldo de S/"<<sueldo;
    cout<<"y tiene una especialidad: "<<especialidad<<endl;
}

int main(){
    //Objeto p de la clase Persona , pero en este caso es el constructor por eso los 3 parametros
    Persona p("Carla lopez", "49999005",25);
    //Llamada a la funcion mostrarDatos pero para el objeto p-
    p.mostrarDatos();
    cout << endl;

    Docente d("Maria Igleasias","10203040",54,1000, "Consejeria");
    d.mostrarDocente();cout<<endl;
    return 0;
}
