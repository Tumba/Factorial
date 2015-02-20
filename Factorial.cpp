#include <iostream>
#include <cstdlib>
 
void dec_to_fact()//Десятичное в факториальную запись
{
    int num;
    std::cout << "Введите число в десятичной системе исчисления" << std::endl;
    std::cin >> num;
    int i = 2;
    int *mas = NULL;
    while(num >= i)
    {
        mas = (int*)realloc(mas,(i-1)*sizeof(int));
        *(mas+i-2) = num % i;
        num /= i;
        i++;
    }
    *(mas+i-2) = num;
    std::cout << "В факториальной: ";
    for(int j = i-2;j >=0;j--)
      std::cout << *(mas+j);
    std::cout << std::endl;
}
void fact_to_des()//Факториальное в десятичное
{
    int num,sum = 0;
    std::cout << "Введите число в факториальной системе исчисления" << std::endl;
    std::cin >> num;
    int f = 1;
    while(num)
    {
 
        int a = num % 10;
        int fact = 1;
        for(int j = 1;j <= f;j++)
            fact *= j;
       sum += a * fact;
       num /= 10;
       f++;
    }
    std::cout << "В десятичной: " << sum << std::endl;
}
int main()
{
    setlocale(LC_ALL,"Russian");
    dec_to_fact();
    fact_to_des();
    return 0;
}
