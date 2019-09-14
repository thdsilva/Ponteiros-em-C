#include <stdio.h>
#include <stdlib.h> 
 
 main(){
     /*int x = 15;
     int *px;
     px = &x;
     printf ("Conteudo de x = %d\n", x);
     printf ("Endereco de memoria de x = %p\n", &x);
     printf ("Conteudo da variavel x por meio do ponteiro px = %d\n", *px);
     printf ("Conteudo da variavel px = %p\n", px);
     printf ("Endereco de memoria de px = %p\n", &px);
     system ("PAUSE");
     
      int a, b;
      int *p, *q;
      a = 5;
      b = 15;
      p = &a;
      q = p;
     *q = 25;
      printf ("Conteudo da variavel a = %d\n", a);
      system ("PAUSE");
      
    float a, b, r;
    float *pa, *pb;
    a = 7.3;
    b = 11.5;
    pa = &a;
    pb = &b;
    r = *pa + *pb;
    printf ("Soma de a e b via ponteiros = %f\n", r);
    system ("PAUSE");
  */
    int n = 5;
    int *pn;
    pn = &n;
    *pn = *pn / 5;
    printf ("\n Valor de n = %d\n", *pn);   
    system ("PAUSE");    
 } 
