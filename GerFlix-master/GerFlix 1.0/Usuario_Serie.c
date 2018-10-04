#include "Usuario_Serie.h"

void mostrarUsuariosConSeries (eSerie series, eUsuario usuarios, int cantUsuario, int cantSerie)
{
    int i;
    int j;
    for (i=0; i<cantUsuario; i++)
    {
        printf("%s", usuarios[i].nombre);
        for (j=0; j<cantSerie; j++)
        {
            if (usuarios[i].idSerie == series[i].idSerie)
            {
                printf("%s", series[j].nombre);
                break;
            }
        }
    }
}

void mostrarSeriesConUsuarios (eSerie series, eUsuario usuarios, int cantUsuario, int cantSeries)
{
    int i;
    int j;
    for (i=0; i<cantSeries; i++)
    {
        printf("%s", series[i].nombre);
        for (j=0; j<cantUsuario; j++)
        {
            if (usuarios[i].idSerie == series[i].idSerie)
            {
                printf("%s", usuarios[i].nombre);
            }
        }
    }
}
