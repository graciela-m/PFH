/*UN DJ DESEA ADMINISTRAR SU TRABAJO. TIENE UNA RECOPILACIÓN DE MUSICA TIPICA DE 4 MUSICOS, OSVALDO, ULPIANO, ALFREDO Y NENITO VARGAS.
ADEMAS DE SALSA, Y MUSICA DE TODO TIPO DENOMINADA RELLENO. ES BUSCADO PARA AMENIZAR EVENTOS, CADA EVENTO TIENE FECHA, HORA Y LUGAR,
CONTRATANTE, Y TIPO DE CELEBRACIÓN QUE PUEDE SER CUMPLEAÑOS, BODA, DESPEDIDA SOLTEROS. SE DESEA ADMINISTRAR LA ACTIVIDAD, CONOCER
LOS EVENTOS Y QUE CREE UNA PISTA CON MUSICA TIPCA, SALSA Y RELLENO EN SET DE CANCIONES POR MUSICO. CREE UNA APLICACIÓN PARA ADMINISTRAR ESTE TRABAJO*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct contratista
    {
        char nombre[40];
        char telefono[15];
    };
struct fecha
{
    int mes;
    int dia;
    int anio;
    char hora; // mañana, tarde, noche o todo el dia.
};
struct
{
    char celebracion;
    struct fecha cal;
    char lugar [100];
    struct contratista persona;
}party[50];  // Limite de 50 eventos, cada uno tendrá el struct.

void inicial(); // inicializar
void menu();   // donde se actualiza o se ve, eliminar y eso.
void crearevento(); // crear y meter los datos de los eventos.
void eliminarevento(); // elimino...
void calendario(); //muestra los eventos
void mix(); // crear los  mix de los eventos
void main()
{
    inicial();
    menu();
}
void inicial()
{
    int x=0;
    for(x=0;x<50;x++)
    {
        party[x].cal.dia=0;
        party[x].cal.mes=0;
        party[x].cal.anio=0;
        party[x].cal.hora= '-';
    }
}
void menuprin()
{
    int x=0, m=0, a=0, d=0;
    char ocupara;
    printf("\nCOLOQUE LA FECHA: ");
    printf("\nMES: ");
    scanf("%d",&m);
    printf("\nDIA: ");
    scanf("%d",&d);
    printf("\nANIO: ");
    scanf("%d",&a);
    printf("\nCOLOQUE EL HORARIO: \n M... MAÑANA \n T... TARDE \n N...NOCHE \n D... OCUPARÁ TODO EL DÍA");
    gets(party[x].cal.hora);
    switch (ocupara)
    {
        case 'M':
            {
                x=1;
            }
        case 'T':
            {
                x=2;
            }
        case 'N':
            {
                x=3;
            }
        case 'D':
            {
                x=4;
            }
    }
    if(party[x].cal.dia==0)
    {
       party[x].cal.dia=d;
       printf("\nTIPOO DE EVENTO: \n C... CUMPLEAÑOS. \n B... BODA. \n D... DESPEDIDA DE SOLTEROS.");
       gets(party[hoy-1].celebracion);
       printf("\nPORFAVOR INTRODUZCA SU NOMBRE:\n      ");
       gets(contratista.nombre);
       printf("\nCOLOQUE SU NUMERO DE CONTACTO:\n      ");
       gets(persona.telefono);
    }
    else
    {
        printf("\nEL DIA Y LA HORA ESTÁN OCUPADOS.");
        menuprin();
    }
}
void calendario()
{
    int x=0;
    if(party[x].fecha)
}
