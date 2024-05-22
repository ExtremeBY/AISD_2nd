#include "Macros.h"
int main()
{
    SCOCP1251
    SCCP1251
    int N;
    vi "Введите число N: ";
    vv N; nl nl nl

    int low = 1, high = N;
    vector<int> steps;
    while (low <= high) {
        int mid = low + (high - low) / 2;
    

        vi "Я думаю, это число"; nw vi mid; vi "."; nw vi "Ваш ответ(мало, много, угадал):"; nw
        string response;
        vv response;

        if (response == "мало") {
            low = mid + 1;
            steps.push_back(mid);
        }
        else
        {
            if (response == "много") {
                high = mid - 1;
                steps.push_back(mid);
            }
            else if (response == "угадал") {
                steps.push_back(mid);
                break;
            }
            else {
                vi "Неверный ввод. Попробуйте еще раз."; nl
            }
        }
    }

    vi "Максимальное количество шагов"; nw vi "="; nw vi ceil(log2(N)); nl
    for (int step = 0; step < steps.size(); step++) {
    vi steps[step]; nl
    }
    ret 0;
}