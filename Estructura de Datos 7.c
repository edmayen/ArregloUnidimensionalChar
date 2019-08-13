#include<stdio.h>
#include<string.h>
#define A 50
void carga(char[]);
void contar(char[],int*);
void impresioncxc(char[]);
void impresionF(char[],int);

int main()
{
    system("color F0");
    printf("\n\t\t\tArreglo Unidimensional, Tipo Cadena.\n\n");
    char cadena[A];
    int longcxc=0;
    carga(cadena);
    contar(cadena,&longcxc);
    impresioncxc(cadena);
    impresionF(cadena,longcxc);
    getchar();
    getchar();
}

void carga(char cadena[])
{
    char aux;
    int i;
    printf("Carga del Arreglo, Caracter por Caracter.\n\n");
    for(i=0;i<A-1&&(aux=getchar())!='\n';++i)
    {
        cadena[i]=aux;
    }
    cadena[i]='\0';
}

void contar(char cadena[], int *longcxc)
{
    int i;
    for(i=0;i<A&&cadena[i]!='\0';++i)
    {
        ++(*longcxc);
    }
}

void impresioncxc(char cadena[])
{
    int i;
    printf("\n\nImpresion de la Cadena, Caracter por Caracter.\n\n");
    for(i=0;i<A&&cadena[i]!='\0';++i)
    {
        putchar(cadena[i]);
    }
}

void impresionF(char cadena[], int longcxc)
{
    printf("\n\nLa Cadena Introducida es: ");
    puts(cadena);
    printf("\nLa Longitud de la Cadena es: %d\n",longcxc);
    printf("\nLa Longitud de la Cadena por Funcion Strlen es: %d\n\n",strlen(cadena));

}
