#include <stdio.h>
#include <stdlib.h>
#include "Usuario_Serie.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);
    mostrarListaSeries(listaDeSeries, TAMSERIE);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);
    mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);

    mostrarUsuariosConSeries (listaDeSeries, listaDeUsuarios, TAMUSUARIO, TAMSERIE);
    mostrarSeriesConUsuarios(listaDeSeries, listaDeUsuarios, TAMUSUARIO, TAMSERIE);

/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/
/*
    5. Registrar mas de una serie por usuario

    Relacion de muchos a muchos.
    Una nueva estrucutura para relacionar las dos estructuras
    us_usuario
    (Guarda los ids de las otras dos tablas estas dos son foreign key).

    .ABM de usuarios
    .ABM de series
    .elegir serie (alta u - s)
    .dejar de ver serie (baja u - s)
    .LISTAR
        usuarios
        series
        usuarios con sus series
        cada serie con sus usuarios
        todos los usuarios que ven una serie ingresando por teclado
        la serie menos popular
*/



    return 0;
}
