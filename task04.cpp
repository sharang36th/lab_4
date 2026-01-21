#include "lab04.h"

// Необходимо реализовать функцию, которая сортирует по убыванию входной массив.
// Стандартными функциями для сортировки массива пользоваться нельзя!
void sort(std::vector<float>& vec)
{
	// Сортировка выбором по убыванию
	for (size_t i = 0; i < vec.size(); i++)
	{
		size_t maxPos = i;

		for (size_t j = i + 1; j < vec.size(); j++)
		{
			if (vec[j] > vec[maxPos])
			{
				maxPos = j;
			}
		}

		if (maxPos != i)
		{
			float temp = vec[i];
			vec[i] = vec[maxPos];
			vec[maxPos] = temp;
		}
	}
}
