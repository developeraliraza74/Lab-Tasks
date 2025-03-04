#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for(int i=0; i < size-1; i++){
        bool isSwap = false;
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if (!isSwap) {
            return;
        }
    }
  
    
}

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
    {
        int smallIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] > arr[smallIndex]) // if we only change the condition from < to > it will sort it in descending orderg
            {
                smallIndex = j;
            }
        }
        swap(arr[i], arr[smallIndex]);
    }
    
}


void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++)
    {
     int curr = arr[i];   
     int prev = i-1;

     while(prev >= 0 && arr[prev] < curr){
        arr[prev + 1] = arr[prev];
        prev--;
     }

     arr[prev+1] = curr;
    }
    
}
int main() {
    int size = 5;
    int arr[5] = {121,219,13,113,9};

    printArr(arr, size);
    // bubbleSort(arr, size);
    // selectionSort(arr, size);
    // insertionSort(arr, size);
    printArr(arr, size);

    return 0;
}