//Задача5: Використовуючи відповідні компоненти створити додаток для розв’язування наступної задачі: знайти значення виразу врахувавши область визначення.
//Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double x, y;
  double result;

  cout << "Введіть x: " << endl;
  cin >> x;
  cout << "Введіть y: " << endl;
  cin >> y;

  result = sqrt(sqrt((x+2)/(3*y+1))+(8*(pow(x,2))+3)/(1-9*pow(y,2)));

  cout << "Результат: " << result << endl;

}