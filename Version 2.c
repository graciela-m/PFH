/*UN DJ DESEA ADMINISTRAR SU TRABAJO. TIENE UNA RECOPILACIÓN DE MUSICA TIPICA DE 4 MUSICOS, OSVALDO, ULPIANO, ALFREDO Y NENITO VARGAS.
ADEMAS DE SALSA, Y MUSICA DE TODO TIPO DENOMINADA RELLENO. ES BUSCADO PARA AMENIZAR EVENTOS, CADA EVENTO TIENE FECHA, HORA Y LUGAR,
CONTRATANTE, Y TIPO DE CELEBRACIÓN QUE PUEDE SER CUMPLEAÑOS, BODA, DESPEDIDA SOLTEROS. SE DESEA ADMINISTRAR LA ACTIVIDAD, CONOCER
LOS EVENTOS Y QUE CREE UNA PISTA CON MUSICA TIPCA, SALSA Y RELLENO EN SET DE CANCIONES POR MUSICO. CREE UNA APLICACIÓN PARA ADMINISTRAR ESTE TRABAJO*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>
struct
{
    char genero[10];
    char compositor[40];
    char nombre[40];
}temas[22];
struct contratista
    {
        char nombre[40];
        char telefono[15];
    };
struct fecha
{
    int mes;
    int dia;
    char hora[15]; // mañana, tarde, noche o todo el dia.
};
struct
{
    char celebracion[30];
    struct fecha cal;
    char lugar [100];
    struct contratista persona;
    int cancion[12];
}party[360];  // Son 12 meses con todos los dias.

void inicial(); // inicializar.
void menu();   // donde se actualiza o se ve, eliminar y eso.
void crearevento(); // crear y meter los datos de los eventos.
int dianio(int, int); // para sabes que día sería en el año.
bool comprobar(int, int); // comprueba si el día está ocupado o no.
void datos(int); // Pedir los datos de la persona y la fiesta.
void eliminarevento(); // elimino...
void calendario(); //muestra los eventos.
void mix(int); // crear los  mix de los eventos.
void main()
{
    inicial();
    menu();
}
void inicial()
{
    int x=0, y=0;
    for(x=0;x<360;x++)
    {
        party[x].cal.dia=0;
        party[x].cal.mes=0;
        for(y=0;y<12;y++)
        {
            party[x].cancion[y]=0;
        }
    }
    strcpy(temas[0].genero,"TIPICO");
    strcpy(temas[0].compositor,"OSVALDO AYALA");
    strcpy(temas[0].nombre,"LOS SENTIMIENTOS DEL ALMA");
    strcpy(temas[1].genero,"TIPICO");
    strcpy(temas[1].compositor,"OSVALDO AYALA");
    strcpy(temas[1].nombre,"ANHELOS");
    strcpy(temas[2].genero,"TIPICO");
    strcpy(temas[2].compositor,"ULPIANO VERGARA");
    strcpy(temas[2].nombre,"DUENA DE MI CORAZON");
    strcpy(temas[3].genero,"TIPICO");
    strcpy(temas[3].compositor,"ULPIANO VERGARA");
    strcpy(temas[3].nombre,"TE PIDO QUE NO TE VAYAS");
    strcpy(temas[4].genero,"TIPICO");
    strcpy(temas[4].compositor,"ALFREDO ESCUDERO");
    strcpy(temas[4].nombre,"MAGNETISMO DEL AMOR");
    strcpy(temas[5].genero,"TIPICO");
    strcpy(temas[5].compositor,"ALFREDO ESCUDERO");
    strcpy(temas[5].nombre,"AMAR ES PARA SIEMPRE");
    strcpy(temas[6].genero,"TIPICO");
    strcpy(temas[6].compositor,"NENITO VARGAS");
    strcpy(temas[6].nombre,"LA ULTIMA MARIPOSITA");
    strcpy(temas[7].genero,"TIPICO");
    strcpy(temas[7].compositor,"NENITO VARGAS");
    strcpy(temas[7].nombre,"ERES LO QUE YO MAS QUIERO");
    strcpy(temas[8].genero,"SALSA");
    strcpy(temas[8].compositor,"MARC ANTONI");
    strcpy(temas[8].nombre,"VIVIR MI VIDA");
    strcpy(temas[9].genero,"SALSA");
    strcpy(temas[9].compositor,"RUBEN BLADES");
    strcpy(temas[9].nombre,"PEDRO NAVAJA");
    strcpy(temas[10].genero,"REGGAETON");
    strcpy(temas[10].compositor,"J-BALBIN");
    strcpy(temas[10].nombre,"MI GENTE");
    strcpy(temas[11].genero,"REGGAETON");
    strcpy(temas[11].compositor,"BAD BUNNY");
    strcpy(temas[11].nombre,"25/7");
    strcpy(temas[12].genero,"RAP");
    strcpy(temas[12].compositor,"NACH");
    strcpy(temas[12].nombre,"EXODO");
    strcpy(temas[13].genero,"RAP");
    strcpy(temas[13].compositor,"KEYBLADE");
    strcpy(temas[13].nombre,"FIBONACCI");
    strcpy(temas[14].genero,"POP");
    strcpy(temas[14].compositor,"MICHAEL JACKSON");
    strcpy(temas[14].nombre,"THRILLER");
    strcpy(temas[15].genero,"POP");
    strcpy(temas[15].compositor,"RIHANNA");
    strcpy(temas[15].nombre,"UMBRELLA");
    strcpy(temas[16].genero,"ROCK");
    strcpy(temas[16].compositor,"ECANESCENCE");
    strcpy(temas[16].nombre,"BRING ME TO LIFE");
    strcpy(temas[17].genero,"ROCK");
    strcpy(temas[17].compositor,"SIXX:A.M.");
    strcpy(temas[17].nombre,"LIFE IS BEAUTIFUL");
    strcpy(temas[18].genero,"K-POP");
    strcpy(temas[18].compositor,"MOMOLAND");
    strcpy(temas[18].nombre,"I´M SO HOT");
    strcpy(temas[19].genero,"K-POP");
    strcpy(temas[19].compositor,"BLACKPINK");
    strcpy(temas[19].nombre,"HOW YOU LIKE THAT");
    strcpy(temas[20].genero,"TRAP");
    strcpy(temas[20].compositor,"PAULO LONDRA");
    strcpy(temas[20].nombre,"NO PUEDO");
    strcpy(temas[21].genero,"TRAP");
    strcpy(temas[21].compositor,"CAZZU");
    strcpy(temas[21].nombre,"SOBRE MI TUMBA");
}
void menu()
{
    while(true)
    {  char ocupara;
        printf("\n QUE DESEA: \n [A]... AGREGAR EVENTO. \n [E]... ELIMINAR EVENTO. \n [M]... MOSTRAR EL CALENDARIO. \n TECLEE ALEATORIAMENTE PARA SALIR.\n");
        fflush(stdin);
        scanf("%c",&ocupara);
        switch(ocupara){
        case 'A':
            {
                crearevento();
                break;
            }
        case 'E':
            {
                eliminarevento();
                break;
            }
        case 'M':
            {
                calendario();
                break;
            }
        default:
            {
                return;
            }
        }
    }
}
void crearevento()
{
    bool ret;
    int d=0, m=0, dano=0, x=0;
    char hor;
    do
    {  d=0, m=0, dano=0;
        do{  x=0;
            printf("\nCOLOQUE EL MES:    (*use n%cmeros)\n",163);
            fflush(stdin);
            scanf("%d",&m);
            if((m>0)&&(m<=12))
            {x=1;}
            else{printf("\nCOLOQUE UN VALOR ADECUADO");}
        }while(x!=1);
        do{ x=0;
            printf("\nCOLOQUE EL DIA:    (*use n%cmeros)\n",163);
            fflush(stdin);
            scanf("%d",&d);
            if((d>0)&&(d<=30))
            {x=1;}
            else{printf("\nCOLOQUE UN VALOR ADECUADO");}
        }while(x!=1);
        dano=dianio(d,m);
        ret=comprobar(dano, m);
    }while(ret==false);
    party[dano-1].cal.dia=d;
    party[dano-1].cal.mes=m;
    printf("\n**EL EVENTO SE HA CREADO CON EXITO**");
    datos(dano);
}
void eliminarevento()
{
    int m=0, d=0, dano=0, x;
    printf("\nFECHA DEL EVENTO: ");
     do{  x=0;
            printf("\nCOLOQUE EL MES:      (*use n%cmeros)\n",163);
            fflush(stdin);
            scanf("%d",&m);
            if((m>0)&&(m<=12))
            {x=1;}
            else{printf("\n\tCOLOQUE EL MES CORRECTO");}
        }while(x!=1);
    do{ x=0;
            printf("\nCOLOQUE EL DIA:     (*use n%cmeros)\n",163);
            fflush(stdin);
            scanf("%d",&d);
            if((d>0)&&(d<=30))
            {x=1;}
            else{printf("\n\tCOLOQUE EL DIA ADECUADO");}
        }while(x!=1);
    dano=dianio(d,m);
    party[dano-1].cal.dia=0;
    printf("\n**EL EVENTO SE HA ELIMINADO CON EXITO**%c",07);
}
int dianio(int d, int m)
{
    int x=0;
    for(x=1;x<=12;x++)
    {
        if(x==m)
        {
            return(d);
        }
        d=d+30;
    }
}
bool comprobar(int dano, int m)
{
    int y=0;
    do{ y++;
        if(dianio(party[y].cal.dia, m)==dano)
        {
            printf("\n**ESA FECHA ESTA OCUPADA, ELIJA OTRA.**%c",07);
                return(false);
        }
    }while(y<=dano);
    return (true);
}
void datos(int dano)
{
    printf("\nTIPO DE EVENTO: \n CUMPLEA%cOS. \n BODA. \n DESPEDIDA DE SOLTEROS.\n ",165);
    fflush(stdin);
    gets(party[dano-1].celebracion);
    printf("\nPOR FAVOR COLOQUE SU NOMBRE: \n      ");
    fflush(stdin);
    gets(party[dano-1].persona.nombre);
    printf("\nPOR FAVOR COLOQUE SU NUMERO DE TELEFONO: \n      ");
    fflush(stdin);
    gets(party[dano-1].persona.telefono);
    printf("\nAGREGUE EL LUGAR: \n     ");
    fflush(stdin);
    gets(party[dano-1].lugar);
    printf("\nCOLOQUE LA HORA:\n MA%cANA\n TARDE\n NOCHE\n TODO EL DIA\n   ",165);
    fflush(stdin);
    gets(party[dano-1].cal.hora);
    mix(dano);
}
void calendario()
{
    int x=0,y=0;
    printf("\n---------CALENDARIO DE EVENTOS.----------");
    for(x=0;x<360;x++)
    {
        if(party[x].cal.dia!=0)
            {y=0;
                printf("\n FECHA: %d del %d. \n HORA: %s. \n EVENTO: %s. \n LUGAR: %s. \n CONTRATISTA: %s. \n TELEFONO: %s\n", party[x].cal.dia, party[x].cal.mes, party[x].cal.hora, party[x].celebracion, party[x].lugar,party[x].persona.nombre, party[x].persona.telefono);
                printf("\nMIX DEL EVENTO\n");
                do
                {   printf("\n");
                    puts(temas[party[x].cancion[y]-1].genero);
                    puts(temas[party[x].cancion[y]-1].compositor);
                    puts(temas[party[x].cancion[y]-1].nombre);
                    y++;
                }while(party[x].cancion[y]!=0);
            }
    }
}
void mix(int dano)
{
    printf("\n**ELIJA EL REPERTORIO**");
    int x=0,c=0;
    for(x=0;x<22;x++)
    {
        printf("\n [%d]",x+1);
        puts(temas[x].genero);
        puts(temas[x].compositor);
        puts(temas[x].nombre);
    }
    printf("\n PUEDE ESCOGER UN MAXIMO DE 12 CANCIONES:\n  ");
    for(x=0;x<12;x++)
    {
        scanf("%d",&party[dano-1].cancion[x]);
        printf("\nQUIERE ELEGIR OTRA CANCION?  [1] SI.   [2] NO.");
        fflush(stdin);
        scanf("%d",&c);
        if(c==2)
        {
            break;
        }
    }
}

