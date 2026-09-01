#include <iostream>
#include <string>
using namespace std;

// Crear un registro que alamacene los datos de 5 estudiantes

struct reg_estudiantes 
{
    string nombre,carrera,semestre;
    float promedio;

}estudiante [5];



int main()  
{
    int i;
        string nombreBusqueda;
    bool encontrado = false;
    //registro de alumnos 
    for(i=0;i<5;i++)
    {
        cout <<"ingresa el nombre del estudiante" <<endl;
        cin >>estudiante[i].nombre;

        cout << "ingresa la carrera del estudiante" <<endl;
        cin >>estudiante[i].carrera;

        cout << "ingresa el semestre del estudiante" <<endl;
        cin >>estudiante[i].semestre;

        cout << "ingresa el promedio del estudiante" <<endl;
        cin >>estudiante[i].promedio;
    }

    //Mostrar datos de los alumnos inscritos 
    cout <<"_________________________________________________"<<endl;
     cout <<"Alumnos inscritos" <<endl;
    for (i=0;i<5;i++)
    {
        cout<<"Nombre:"<<estudiante[i].nombre<<endl;
        cout<<"Carrera:"<<estudiante[i].carrera<<endl;
        cout<<"Semestre actual:"<<estudiante[i].semestre<<endl;
        cout<<"Promedio:"<<estudiante[i].promedio<<endl;
        cout<<"______________________________________________"<<endl;

    }

    //Busqueda por nombre
    cout << "\nBUSQUEDA DE ESTUDIANTE " << endl;
    cout << "Ingresa el nombre del alumno a buscar: ";
    cin >> nombreBusqueda;

    for (i = 0; i < 5; i++)
    {
        if (estudiante[i].nombre == nombreBusqueda)
        {
            cout << "\n¡Alumno encontrado!" << endl;
            cout << "Nombre: " << estudiante[i].nombre << endl;
            cout << "Carrera: " << estudiante[i].carrera << endl;
            cout << "Semestre actual: " << estudiante[i].semestre << endl;
            cout << "Promedio: " << estudiante[i].promedio << endl;
            encontrado = true;
            
        }
    }

    if (!encontrado)
    {
        cout << "\nAlumno no registrado" << endl;
    }
    
return 0;

}