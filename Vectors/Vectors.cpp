#include <iostream>
#include <vector>
#include <Windows.h>
#include <algorithm>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::vector<int> data;   //std::vector<тип_данных> имя;
    std::vector<int> dataOne(10);
    std::vector<int> dataTwo(5, 0);
    std::vector<int> dataThree = { 3, 4, 5, 6, 7, 8, 9 };
    data = { 3, 0, 6, 4, 5 };
    /*for (auto i : data)
    {
        std::cout << i << " ";
    }*/
    /*std::cout << data.size() << "\n";  //кол-во ячеек
    std::cout << data.front() << "\n"; //первая ячейка
    std::cout << data.back() << "\n"; //последняя ячейка
    std::cout << data.empty() << "\n"; //пустой или нет
    int one;
    std::cin >> one;
    data.push_back(one);  //добовляет елемент в конец вектора
    data.pop_back(); // удаление последнего элемента вектора
    data.clear();  //очистка вектора
    data.erase(data.begin() + 1);  //удаление элемента (data.begin(), data.begin() + 2)  с начала до какого-либо элемента
    data.insert(data.begin() + 1, 3);  //добавление элемента (начало + позиция, что добавляем)*/
    /*std::vector<int> d = { 2, 3, 9, 8, 1 };
    for (auto i : d)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    d.erase(d.begin() + 2);
    d.resize(2);  //оставление только первых двух ячеек
    for (auto i : d)
    {
        std::cout << i << " ";
    }
    std::cout << "\n" << d.capacity() << "\n";
    std::erase(d, 3); //удаление всех троек !!поменять версию в проект - свойства - стандарт языка c++ - 20
    for (auto i : d)
    {
        std::cout << i << " ";
    }
    std::cout << "\n" << d.capacity() << "\n";*/
    std::vector<int> d = { 2, 3, 9, 8, 1 };
    for (auto i : d)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::sort(d.begin(), d.end());// сортировка массива по увелечению
    for (auto i : d)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::sort(d.rbegin(), d.rend());// сортировка массива по уменьшению
    for (auto i : d)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::ranges::sort(d);// тоже сортировка, но быстрее
    for (auto i : d)
    {
        std::cout << i << " ";
    }
    return 0;
}

