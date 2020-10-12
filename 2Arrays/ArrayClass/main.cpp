#include <iostream>

#include "Array.h"

int main() {
    Array arr = Array();
    //
    arr.Display();
    std::cout << "Sum: " << arr.Sum() << std::endl;
    std::cout << "Max element: " << arr.Max() << std::endl;
    std::cout << "Min element: " << arr.Min() << std::endl;
    std::cout << "Average: " << arr.Avg() << std::endl;
    arr.Insert(2, 7);
    arr.Display();
    std::cout << "7 is at index: " << arr.BinarySearch(7) << "\nNote: Searched via binary search"
              << std::endl;
    arr.Reverse();
    arr.Append(45);
    arr.Display();
    std::cout << std::boolalpha << "isSorted: " << arr.isSorted() << std::endl;
    // arr.LeftShift();
    // arr.LeftRotate();
    // arr.RightShift();
    arr.RightRotate();
    arr.Display();

    return 0;
}
