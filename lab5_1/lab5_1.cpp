// lab5_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//Підрахувати суму додатних елементів у даному одновимірному масиві.


#include <iostream>
    using namespace std;
#include <windows.h>

  
    
    int Sum(int* arr, int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }

    int main() {

        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);

        int size;

        cout << "Введіть розмір масиву: ";
        cin >> size;

        
        int* arr = new int [size];

        cout << "Введіть " << size << " елементів масиву:\n";
        for (int i = 0; i < size; i++) {
            cout << "Елемент " << i + 1 << ": ";
            cin >> arr[i];
        }

        cout << "\n";
        cout << "Масив: \n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }

        int pSum = Sum(arr, size);
        cout << "\n";
        cout << "____________________________________________";
        cout << "\n";
        cout << "Сума додатних елементів: " << pSum << endl;

        delete[] arr;

        return 0;
    }
