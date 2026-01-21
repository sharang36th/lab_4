#include "lab04.h"

// Необходимо реализовать функцию, которая определяет арифметическое среднее в массиве.
float mean(const std::vector<float>& vec)
{
	if (vec.size() == 0)
	{
		return 0.0f;
	}

	float sum = 0.0f;

	for (size_t i = 0; i < vec.size(); i++)
	{
		sum = sum + vec[i];
	}

	return sum / (float)vec.size();
}
