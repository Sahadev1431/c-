/*
Q5. Write a program to create class ‘Search’ having data members (int a[ ], x) and 
     define member functions as void input(), void output(), void search(int position), void add(int value) 
     to display result.
*/
//===================================================================================================================================================================================

#include <iostream>
using namespace std;

class Search 
{
private:
    int a[100]; // Assuming a maximum of 100 elements in the array
    int x;
    int size;

public:
    void input();
    void output();
    void search();
    void add(int value);
};

void Search::input() 
{
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> a[i];
    }
    cout << "Enter the value to search: ";
    cin >> x;
}

void Search::output() 
{
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] << " ";
    }
    cout << std::endl;
}

void Search::search()
{
    int position = 0;
    for (int i = 0; i < size; i++) 
    {
        if (a[i] == x) 
        {
            position = i;
            break;
        }
    }
    if (position != 0) 
    {
        cout << "Element " << x << " found at position " << position + 1 << std::endl;
    } 
    else 
    {
        cout << "Element " << x << " not found in the array" << std::endl;
    }
}

void Search::add(int value) 
{
    if (size < 100) 
    {
        a[size] = value;
        size++;
        std::cout << "Element " << value << " added to the array" << std::endl;
    } 
    else 
    {
        cout << "Array is full. Cannot add more elements." << std::endl;
    }
}

int main() 
{
    Search obj;
    obj.input();
    obj.output();

    obj.search();

    int newValue;
    std::cout << "Enter a new element to add: ";
    std::cin >> newValue;
    obj.add(newValue);

    obj.output();

    return 0;
}
