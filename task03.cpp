#include "lab04.h"

// Необходимо реализовать функцию argmax, которая определяет индекс максимума в массиве.
int argmax(const std::vector<float>& vec)
{
	// Если массив пуст, функция должна вернуть -1.
	if (vec.size() == 0)
	{
		return -1;
	}

	int index = 0;
	float best = vec[0];

	for (size_t i = 1; i < vec.size(); i++)
	{
		if (vec[i] > best)
		{
			best = vec[i];
			index = (int)i;
		}
	}

	return index;
}
