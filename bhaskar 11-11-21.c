#include<stdio.h>
void main ()
{   
  int l ,a, w ,p;
  printf("enter the length and width ");
  scanf ("%d%d",&l,&w);
  a= l*w;    
  p=2*(l+w); 
  printf("area of the rectangle %d\n",a);
  printf ("perimeter of the rectangle %d",p);   

}
