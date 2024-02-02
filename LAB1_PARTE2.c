#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>





 void main(){
  int x;
  float n1;
  int n2;
  float n3;
  int l;
  char pal[ 60];
  printf("\t\t\t\tBIENVENIDO \n\n");
  printf("Por favor espere\n\n\n");
  printf(".");
  Sleep(1000);
  printf(".");
  Sleep(1000);
  printf(".");
  printf("\n\n");

do{
  printf("Seleccione la opcion ha realizar:\n\n");
  printf("1. Verificar si un numero es entero o real\n\n");
  printf("2. Verificar si ha inroducido un caracter o una cadena\n\n");
  printf("3. Salir\n\n");
  scanf("%d",&x);


  switch (x){
  case 1:
  printf("Ingrese el numero ha evaluar: \n\n");
  scanf("%f",&n1);
  n2=n1;
  n3=n2-n1;
  if(n3==0)
  printf("El numero introducido es entero \n\n");
  else if(n3!=0)
  printf("El numero es real\n\n");
  break;



  case 2:
  printf("Ingrese el texto ha analizar: \n\n");
  scanf("%s",&pal);
  l=strlen(pal);
  if(l==1)
  printf("Ha introducido un solo caracter \n\n");
  if(l>1)
  printf("Ha introducido una secuencia de caracteres \n\n");
  break;

  case 3:
  system("cls");
  break;


  }

 }while(x!=3);
















 }
