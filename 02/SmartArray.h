#pragma once
#include <iostream>
#include <variant>
#include <string>



	class SmartArray
	{
	private:
		int* smArray_ = 0;
		int countForPushBack_ = 0;
		int sizeOfArray_ = 0;

		void checkIndex(int checkingIndex);


	public:
		SmartArray(const int sizeOfArray);
		~SmartArray();
		
		void smartArrayPrint();
		void smartArrayPushBack(const int addingElement);
		int smartArrayGetElement(const int gettingElementByIndex);
		
	};