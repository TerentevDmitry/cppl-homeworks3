#include "SmartArray.h"


enum class Notes
{
	outOfRange = 1
};

	SmartArray::SmartArray(const int sizeOfArray)
	{
		sizeOfArray_ = sizeOfArray;

		std::cout << "Создание SmartArray::SmartArray(int SizeOfArray)";

		smArray_ = new int[sizeOfArray] {};
		std::cout << std::endl;
	};

	SmartArray::~SmartArray()
	{
		delete[] smArray_;
		std::cout << "Уничтожение SmartArray::~SmartArray()\n\n";
	};

	// To print smartArray
	void SmartArray::smartArrayPrint()
	{
		for (int i = 0; i < sizeOfArray_; i++)
			std::cout << smArray_[i] << " ";

		std::cout << std::endl;
	};

	void SmartArray::smartArrayPushBack(const int addingElement)
	{
		if (countForPushBack_ >= sizeOfArray_)
		{
			std::cout << "Нельзя больше добавить элементов. Массив заполнен...\n\n";
		}
		else
		{
			smArray_[countForPushBack_] = addingElement;
			++countForPushBack_;
		}
	};

	int SmartArray::smartArrayGetElement(const int gettingElementByIndex)
	{
		SmartArray::checkIndex(gettingElementByIndex);

		return smArray_[gettingElementByIndex];
	};

	//private
	void SmartArray::checkIndex(int gettingElementByIndex)
	{

		//return ((gettingElementByIndex >= 0) && (gettingElementByIndex < sizeOfArray_));
		if (gettingElementByIndex >= sizeOfArray_) 
		{ 
			throw std::out_of_range("IndexOfElement_Out_of_range");	
		}
	};