// Array Lab 7 Code Junior Ezuma-Ngwu

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Global Variables
const int SIZE = 10;
int arr[SIZE];

// Function that fills array with random numbers
void fillArray(int arr[], int SIZE, int min, int max)
{
    srand(time(nullptr));

    for (int c = 0; c < SIZE; c++)
    {
        arr[c] = rand() % (max-min + 1) + min;
    } 
}

// Function that prints the array to terminal
void printArray(int arr[], int size, int format, ostream& out)
{
    for (int c = 0; c < SIZE; c++)
    {
        cout << arr[c] << " ";
        if ((c + 1) % format == 0)
        {
            cout << endl;
        }
    }
}

// Copies the elements of the orignal array and pastes it to this function
void doubleArray(int arr[], int SIZE)
{   
    for(int c = 0; c < SIZE; c++)
    {
        arr[c] *= 2;
    }
}

int main()
{
// Initlaized variables
    int min = 0;
    int max = 300;
    int format = 5;

// Calling function to fill array with random numbers
     fillArray(arr, SIZE, min, max);

// Prints the original array values
     cout << "Original array values: " << endl;
     printArray(arr, SIZE, format, cout); 


// Calling function to copy the first array to the second array function
     doubleArray(arr, SIZE);

// Prints the copied values of the array
     cout << " Doubled array values: " << endl;
     printArray(arr, SIZE, format, cout);

     return 0;
}