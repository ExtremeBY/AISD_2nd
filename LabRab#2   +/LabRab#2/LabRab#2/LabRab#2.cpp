#include "Macros.h"
int main()
{
    SCOCP1251
    SCCP1251
    int N;
    vi "������� ����� N: ";
    vv N; nl nl nl

    int low = 1, high = N;
    vector<int> steps;
    while (low <= high) {
        int mid = low + (high - low) / 2;
    

        vi "� �����, ��� �����"; nw vi mid; vi "."; nw vi "��� �����(����, �����, ������):"; nw
        string response;
        vv response;

        if (response == "����") {
            low = mid + 1;
            steps.push_back(mid);
        }
        else
        {
            if (response == "�����") {
                high = mid - 1;
                steps.push_back(mid);
            }
            else if (response == "������") {
                steps.push_back(mid);
                break;
            }
            else {
                vi "�������� ����. ���������� ��� ���."; nl
            }
        }
    }

    vi "������������ ���������� �����"; nw vi "="; nw vi ceil(log2(N)); nl
    for (int step = 0; step < steps.size(); step++) {
    vi steps[step]; nl
    }
    ret 0;
}