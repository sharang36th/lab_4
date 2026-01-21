#include "lab04.h"

// Необходимо реализовать функцию, которая заменяет в строке все вхождения подстроки на новую строку.
std::string replace(const std::string& str, const std::string& old, const std::string& new_string)
{
	// Можно пользоваться функцией std::string::find
	if (old.size() == 0)
	{
		return str;
	}

	std::string result = str;
	size_t pos = 0;

	while (true)
	{
		pos = result.find(old, pos);

		if (pos == std::string::npos)
		{
			break;
		}

		result.erase(pos, old.size());
		result.insert(pos, new_string);

		pos = pos + new_string.size();
	}

	return result;
}
