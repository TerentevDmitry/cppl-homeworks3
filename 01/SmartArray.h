#pragma once
#include <iostream>
#include <string>



	class SmartArray
	{
	private:
		int* smArray_ = 0;
		int countForPushBack_ = 0;
		int sizeOfArray_ = 0;

	public:
		SmartArray(const int sizeOfArray);
		~SmartArray();
		
		//чтобы программист, использующий класс, случайно не скопировал объект, нужно запретить конструктор копировани€ и оператор присваивани€.¬ противном случае, пользователь класса может случайно скопировать указатель на выделенную пам€ть.“огда при уничтожении обоих объектов произойдет двойное освобождение пам€ти, и программа упадет :
		//{
		//	SmartArray arr(5);
		//	SmartArray arr2 = arr;
		//} //ѕрограмма упадет вот здесь
		//«апретить конструктор копировани€ и оператор перемещени€ можно

		SmartArray(const SmartArray&) = delete;
		SmartArray& operator=(const SmartArray&) = delete;

		void smartArrayPrint();
		void smartArrayPushBack(const int addingElement);
		int smartArrayGetElement(const int gettingElementByIndex);
		
	};