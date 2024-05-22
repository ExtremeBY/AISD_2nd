#include "Macros.h"

// Функция для генерации случайного массива
vector<int> generateRandomArray(int N) {
    vector<int> A(N);
    for (int& value : A) {
        value = rand() % 100; // Генерация числа от 0 до 99
    }
    return A;
}

// Функция для вывода массива
void printArray(const vector<int>& array) {
    for (int value : array) {
        vi value << " ";
    }
    nl
}

// Функция пузырьковой сортировки n^2
void bubbleSort(vector<int>& B) {
    bool swapped;
    do {
        swapped = false;
        for (size_t i = 1; i < B.size(); i++) {
            if (B[i - 1] > B[i]) {
                std::swap(B[i - 1], B[i]);
                swapped = true;
            }
        }
    } while (swapped);
}

// Функция сортировки вставками n -best n^2 worst
void insertionSort(vector<int>& C) {
    for (size_t i = 1; i < C.size(); i++) {
        int key = C[i];
        int j = i - 1;
        while (j >= 0 && C[j] > key) {
            C[j + 1] = C[j];
            j--;
        }
        C[j + 1] = key;
    }
}

// Функция сортировки выбором n^2
void selectionSort(vector<int>& D) {
    for (size_t i = 0; i < D.size() - 1; i++) {
        size_t min_index = i;
        for (size_t j = i + 1; j < D.size(); j++) {
            if (D[j] < D[min_index]) {
                min_index = j;
            }
        }
        swap(D[i], D[min_index]);
    }
}

// Вспомогательная функция для быстрой сортировки
int partition(vector<int>& E, int low, int high) {
    int pivot = E[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (E[j] < pivot) {
            i++;
            swap(E[i], E[j]);
        }
    }
    swap(E[i + 1], E[high]);
    return (i + 1);
}

// Функция быстрой сортировки n*log(n)
void quickSort(vector<int>& E, int low, int high) {
    if (low < high) {
        int pi = partition(E, low, high);
        quickSort(E, low, pi - 1);
        quickSort(E, pi + 1, high);
    }
}

int main() {
    SCOCP1251
    SCCP1251
    srand(time(NULL));
    int N;
    vi "Введите число N: ";
    vv N;

    vector<int> A = generateRandomArray(N);
    vector<int> B = A, C = A, D = A, E = A;

    vi "Исходный массив A: ";
    printArray(A); nl nl nl

    clock_t start, end;
    double duration;

    // Пузырьковая сортировка
    start = clock();
    bubbleSort(B);
    end = clock();
    duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    vi "Отсортированный массив B: ";
    printArray(B); nl
    vi "Время выполнения пузырьковой сортировки: " << duration << " секунд."; nl nl nl

    // Сортировка вставками
    start = clock();
    insertionSort(C);
    end = clock();
    duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    vi "Отсортированный массив C: ";
    printArray(C); nl
    vi "Время выполнения сортировки вставками: " << duration << " секунд."; nl nl nl

    // Сортировка выбором
    start = clock();
    selectionSort(D);
    end = clock();
    duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    vi "Отсортированный массив D: ";
    printArray(D); nl
    vi "Время выполнения сортировки выбором: " << duration << " секунд."; nl nl nl

    // Быстрая сортировка
    start = clock();
    quickSort(E, 0, N - 1);
    end = clock();
    duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    vi "Отсортированный массив E: ";
    printArray(E); nl
    vi "Время выполнения быстрой сортировки: " << duration << " секунд."; nl nl nl
    pause
    ret 0;
}
