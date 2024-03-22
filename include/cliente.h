#ifndef CLIENTE_H
#define CLIENTE_H

#include <string.h>
class Cliente{
    private:
        int idCLiente;
        string nombre;
        string apellido;
    public:
        Cliente(int,string,string);
        int getIdCLiente();
        string getNombre();
        string getApellido();
};


#endif // CLIENTE_H_INCLUDED

