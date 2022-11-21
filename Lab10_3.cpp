// Задача2: Трикутник задано координатами вершин 𝐴(0;0),𝐵(8;8−1),𝐶(−8;8+1) 
// Обчислити висоту h(b) та медіану m(c).

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
   int i, xa=0, ya=0, xb=8, yb=7, xc=-8, yc=9;

   double a, b, c, p, S, hb, mc;

   a=hypot(xb-xc, yb-yc);    
   b=hypot(xa-xc, ya-yc);        
   c=hypot(xa-xb, ya-yb); 

   p=(a+b+c)/2.; 
   S=sqrt(p*(p-a)*(p-b)*(p-c));
   hb=2.*S/b;
   mc = sqrt(2*c*a+2*b*b-c*c);
   mc = mc/2;

   cout << "Висота трикутника " << hb <<endl;
   cout << "Медіана трикутника " << mc << endl;
}