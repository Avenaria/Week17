// Week17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "iostream"
#include "tchar.h"
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "iomanip"
#include <iostream>
using namespace std;
//const size_t N = 2;
//const size_t M = 2;
//typedef int T[N][M];

int** arr(int rows, int cols)
{
    int** pparr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        pparr[i] = new int[cols];
    }
    return pparr;
}

void completion(int** arr, int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 40;
        }
    }

};


int** GeneralFunc(int** arr, int& row, bool begin, bool end, int  index) {
    row++;

    int** newstr = new int* [row];

    cout << "Enter string:  ";
    int* subStr = new int[256];
    

    if (arr) {
       
        for (int i = begin, j = 0; i < row - end; i++) {
            newstr[i] = new int arr[j + 1];
            if (i != index) {
              
                j++;
            }
        }
    }

char** Insert(char** str, int& row, int index) {
    return GeneralFunc(str, row, 0, 0, index);
}


int main()
{
   
}

