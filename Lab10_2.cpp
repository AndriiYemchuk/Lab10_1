//Задача1.2: Курець в середньому витрачає 2 год/день на паління. Обчислити кількість років, що витратила людина в залежності від її віку.

#include <iostream>

using namespace std;

int main()
{
   int years;
   int for_year;
   int result;
   string resultname;

   cout << "Скільки Вам років? " << endl;
   cin >> years;
   
   for_year = 2*361;
   result = for_year*years;
   result = result/24;
   result = result/30;
   result = result/12;

   if(result==1||result==21)
   {
      resultname = " рік";
   }
   else if(result==2||result==3||result==4)
   {
      resultname = " роки";
   }
   else
   {
      resultname = " років";
   }

   cout << "За Ваші " << years << " років, Ви витратили б приблизно " << result << resultname << " на паління!" <<endl;

}