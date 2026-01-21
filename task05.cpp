#include "lab04.h"

// Необходимо реализовать функцию remove_first_negative_element, которая удаляет первый отрицательный элемент массива.
bool remove_first_negative_element(const std::vector<int>& vec, int& removed_element)
{
	// Функция возвращает true если удалось удалить элемент, а false если не удалось.
	// Значение удаленного элемента помещать в removed_element,
	// если удаление не произошло то инициализировать removed_element нулем.
	removed_element = 0;

	for (size_t i = 0; i < vec.size(); i++)
	{
		if (vec[i] < 0)
		{
			removed_element = vec[i];
			return true;
		}
	}

	return false;
}
