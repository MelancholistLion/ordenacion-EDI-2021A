#include <stdio.h>

void intercambiar(int *a, int *b);
void quicksort(int arreglo[], int izquierda, int derecha);
int particion(int arreglo[], int izquierda, int derecha);

int main()
{

}

void intercambiar(int *a, int *b) {
  int temporal = *a;
  *a = *b;
  *b = temporal;
}



void quicksort(int arreglo[], int izquierda, int derecha) {
  if (izquierda < derecha) {
    int indiceParticion = particion(arreglo, izquierda, derecha);
    quicksort(arreglo, izquierda, indiceParticion);
    quicksort(arreglo, indiceParticion + 1, derecha);
  }
}

int particion(int arreglo[], int izquierda, int derecha) {

  int pivote = arreglo[izquierda];

  while (1) {

    while (arreglo[izquierda] < pivote) {
      izquierda++;
    }

    while (arreglo[derecha] > pivote) {
      derecha--;
    }

    if (izquierda >= derecha) {

      return derecha;
    } else {

      intercambiar(&arreglo[izquierda], &arreglo[derecha]);

      izquierda++;
      derecha--;
    }
  }
}
