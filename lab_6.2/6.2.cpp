#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

const int SIZE = 10;

void COUT(int mas[], int size, int i = 0) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << mas[i] << " ";
    COUT(mas, size, i + 1);
}

int FindMaxEvenIndex(int mas[], int size) {
    int maxEven = -1; // Значення для збереження найбільшого парного числа
    int maxIndex = -1; // Індекс найбільшого парного числа
    for (int i = 0; i < size; i++) {
        if (mas[i] % 2 == 0 && mas[i] > maxEven) {
            maxEven = mas[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    srand((unsigned)time(0));
    setlocale(LC_CTYPE, "ukr");

    int a[SIZE];

    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100;
    }

    cout << "Початковий масив: " << endl;
    COUT(a, SIZE);

    int maxEvenIndex = FindMaxEvenIndex(a, SIZE);

    if (maxEvenIndex != -1) {
        cout << "Індекс найбільшого парного елемента: " << maxEvenIndex << endl;
        cout << "Значення найбільшого парного елемента: " << a[maxEvenIndex] << endl;
    }
    else {
        cout << "У масиві немає парних елементів." << endl;
    }

    return 0;
}
