/* Бабченко Ольга Валерьевна*/
//* написать функцию вставки элемента по указанному индексу*//

#include <iostream>

using namespace std;

void RandomFillArray(int* array, int size, int begin, int end) {
    for (int i = 0; i < size; ++i) {
        array[i] = begin + rand() % (end - begin + 1);
    }
}

void PrintArray(int* array, int size) {
    cout << "[ ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}


int* AddElementByIndex(int* old_array, int old_size,int* new_size, int index){
    *new_size = old_size + 1;
    int* new_array = new int[*new_size];

    for (int i = 0; i < old_size; ++i) {
        new_array[i] = old_array[i];
    }
    for (int i = index - 1, j = index; i < old_size; ++i, ++j) {
        new_array[j] = old_array[i];
    }

    return new_array;
}

int main() {
    const int SIZE = 10;
    int array[SIZE];

    RandomFillArray(array, SIZE, 0, 10);
    PrintArray(array, SIZE);

    int size_2;
    int* array_2 = AddElementByIndex(array, SIZE, &size_2, 3);
    PrintArray(array_2, size_2);

    return 0;
}