#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

char  *Buff,*Nombre;
char **Cadena;
int n=0;
Cadena=(char **)malloc(5*sizeof(char*));
Buff= (char *) malloc(100*sizeof(char));
while (n<5)
{
    printf("Ingrese el nombre numero %d: ",n+1);
    gets (Buff);
    Cadena[n] = (char *) malloc((strlen(Buff)+1)*sizeof(char));
    strcpy(Cadena[n],Buff);
    n++;
}

for (int i = 0; i < n; i++)
{
    printf("El nombre numero %d es: %s\n",i+1,*(Cadena+i));
}

for (int j = 0; j < n; j++)
{
    free(Cadena[j]);
}

free(Buff);
return 0;
}