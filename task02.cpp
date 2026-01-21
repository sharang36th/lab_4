#include "lab04.h"
#include <limits>

// Необходимо реализовать функцию, которая определяет максимум и минимум в массиве.
std::pair<float, float> minMax(const std::vector<float>& vec)
{
	// Если массив пуст, функция должна вернуть min и max из std::numeric_limits.
	if (vec.size() == 0)
	{
		float mn = std::numeric_limits<float>::max();
		float mx = std::numeric_limits<float>::lowest();
		return std::make_pair(mn, mx);
	}

	float mn = vec[0];
	float mx = vec[0];

	for (size_t i = 1; i < vec.size(); i++)
	{
		if (vec[i] < mn)
		{
			mn = vec[i];
		}

		if (vec[i] > mx)
		{
			mx = vec[i];
		}
	}

	return std::make_pair(mn, mx);
}
