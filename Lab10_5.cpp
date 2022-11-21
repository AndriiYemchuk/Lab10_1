//Задача4: Скласти структурну схему алгоритму та програму обчислення значень функції y=F(x) відповідно до завдань, зазначених у таблиці.
//y=sin3(𝑎+𝑏) ; 𝑎=𝑡3+√𝑏 ;𝑏=𝑙𝑔2|𝑥|
//x=10.9; t=2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

   float x = 10.9;
   double t;
   double y, a, b;

   cout << "Введіть значення t: " << endl;
   cin >> t;

   b = pow(log(abs(x)), 2);
   a = pow(t, 3) + sqrt(b);

   y = pow(sin(a+b), 3);

   cout << "Результат: " << y << endl;

}