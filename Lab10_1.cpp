
//Задача1.1: Середній вік людини 75 років. Написати програму, яка за вказаною кількістю прийомів їжі на добу та їх тривалістю підраховує, скільки часу за все життя людина витрачає на приймання їжі.


#include <iostream>

using namespace std;

int main()
{


    int amount;
    float timeam;
    float for_day;
    float for_year;
    float for_life;
    string yearname;
    int result;

    cout <<  "Введіть кількість прийомів їжі: " << endl;
    cin >> amount;
    cout <<  "Скільки часу Ви витрачаєте на один прийом їжі у хвилинах? " << endl;
    cin >> timeam;

    for_day = (amount*timeam)/60;
    for_year = 361*for_day;
    for_life = 75*for_year;
    result = for_life/24;
    result = result/30;


    result = result/12;
    
    if(result==1||result ==21)
    {
      yearname = " рік ";
    }
    else if(result==2||result==3||result==4)
    {
      yearname=" роки ";
    }
    else
    {
      yearname=" років ";
    }

    cout << "За все життя Ви витратите приблизно " << result << yearname  << "на прийом їжі!" << endl;
    
}