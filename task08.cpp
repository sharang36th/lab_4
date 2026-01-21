#include "lab04.h"

// Необходимо реализовать функцию, которая соединяет массив строк в одну строку.
std::string join(const std::vector<std::string>& arr, const std::string& sep)
{
	std::string result = "";

	for (size_t i = 0; i < arr.size(); i++)
	{
		if (i > 0)
		{
			result = result + sep;
		}

		result = result + arr[i];
	}

	return result;
}
