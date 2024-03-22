#ifndef ABONO_H
#define ABONO_H


#include "Fecha.h"
class Abono{
    private:
        Fecha *fecha;
        float montoAbono;
    public:
        Abono(Fecha*,float);
        Fecha *getFechaAbono();
        float getMontoAbono();
};


#endif // ABONO_H_INCLUDED

