//Задача3: Написати програму, яка обчислює вирази за двома формулами.
//Формула 1: 𝑧1=𝑐𝑜𝑠2𝑥+𝑠𝑖𝑛2𝑦+14𝑠𝑖𝑛22𝑥−1
//Формула 2: 𝑧2=sin(𝑥+𝑦)∙sin(𝑦−𝑥)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double x, y;
   double z1;
   double z2;

   cout << "Введіть значення x: " << endl;
   cin >> x;
   cout << "Введіть значення y: " << endl;
   cin >> y;

   z1 = pow(cos(x), 2)+pow(sin(y), 2)+((1/4)*pow(sin(2),2)-1);

   z2 = sin(x+y)*sin(y-x);

   cout << "Результат формули 1: " << z1 << endl;
   cout << "Результат формули 2: " << z2 << endl;

}