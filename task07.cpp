#include "lab04.h"

// Необходимо реализовать функцию split, которая делит строку по заданному символу.
std::vector<std::string> split(const std::string& str, char sep)
{
	// Если строка состоит только из символов, которые указаны вторым аргументом, функция должна вернуть пустой вектор.
	std::vector<std::string> result;
	std::string current = "";

	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == sep)
		{
			if (current.size() > 0)
			{
				result.push_back(current);
				current = "";
			}
		}
		else
		{
			current = current + str[i];
		}
	}

	if (current.size() > 0)
	{
		result.push_back(current);
	}

	return result;
}
