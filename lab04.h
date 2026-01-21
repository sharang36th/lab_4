#ifndef LAB04_H
#define LAB04_H

#include <vector>
#include <string>
#include <utility>

// Необходимо реализовать функцию, которая определяет арифметическое среднее в массиве.
float mean(const std::vector<float>&);

// Необходимо реализовать функцию, которая определяет максимум и минимум в массиве.
// .first is min
// .second is max
std::pair<float, float> minMax(const std::vector<float>&);

// Необходимо реализовать функцию argmax, которая определяет индекс максимума в массиве.
// Нумерация элементов массива начинается с нуля. Если массив пуст, функция должна вернуть -1.
int argmax(const std::vector<float>&);

// Необходимо реализовать функцию, которая сортирует по убыванию входной массив.
// Стандартными функциями для сортировки массива пользоваться нельзя!
void sort(std::vector<float>&);

// Необходимо реализовать функцию remove_first_negative_element, которая удаляет первый отрицательный элемент массива.
bool remove_first_negative_element(const std::vector<int>& vec, int& removed_element);

// Необходимо реализовать функцию, которая заменяет в строке все вхождения подстроки на новую строку.
std::string replace(const std::string& str, const std::string& old, const std::string& new_string);

// Необходимо реализовать функцию split, которая делит строку по заданному символу.
std::vector<std::string> split(const std::string& str, char sep);

// Необходимо реализовать функцию, которая соединяет массив строк в одну строку.
std::string join(const std::vector<std::string>& arr, const std::string& sep);

#endif
