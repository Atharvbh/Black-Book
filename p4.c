// area 
#include<stdio.h>
int fun(int,float*,float*);
int main(void)
{
    int r;
    float area,perimeter;
    printf("Enter the radious of the circle\n");
    scanf("%d",&r);
    fun(r,&area,&perimeter);
    printf("The area of the circle is %f\n",area);
    printf("The perimeter of the circle is %f\n",perimeter);

   

    return 0;
}
int fun(int r,float*a,float*b)
{
  
   *a =3.14*r*r;
   *b= 2* 3.14 *r;


}