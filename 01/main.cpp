﻿// 01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "Print.h"
#include "SmartArray.h"

int main()
{
    
    setlocale(LC_ALL, "Russian");

    int initialSizeOfArray = 0;
    
    std::cout << "Введите начальное кол-во элементов:> ";
    std::cin >> initialSizeOfArray;

    //Проверка правильности введенных данных
    while (!std::cin.good())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Неверные данные. Кол-во элементов - целое положительное число.\n";
        std::cout << "Введите начальное кол-во элементов:> ";
        //std::cout << "> ";
        std::cin >> initialSizeOfArray;
    }
   
    
    int ii = 0;
    try {

        SmartArray sArr(initialSizeOfArray);
        
        for (int i = 0; i < initialSizeOfArray; i++)
        {
            sArr.smartArrayPushBack(i);
        }
        
        sArr.smartArrayPrint();

        // Раскомментировать чтоб произошел out_of_range по добавлению элемента в массив
        //sArr.smartArrayPushBack(ii++);
        //sArr.smartArrayPrint();

        std::cout << sArr.smartArrayGetElement((ii = 0)++) << std::endl;

        while (ii < initialSizeOfArray)
        {
            std::cout << sArr.smartArrayGetElement(ii++) << std::endl;
        }

        std::cout << "***********************************" << std::endl;

        //Раскомментировать чтоб произошел out_of_range по взятию элемента из массива
        std::cout << sArr.smartArrayGetElement(ii++) << std::endl;

        std::cout << sArr.smartArrayGetElement(2) << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

   std::cout << "\n\nHello World!\n";
}