//
// Created by Jayce Lee on 25. 12. 17.
//

#include <iostream>
using namespace std;

//chapter 7 - exercise 7
//7.7에서 3개의 배열 처리 함수가 범위를 나타내는 두 개의 포인터 매개변수를 사용하도록 수정하라.
//실제로 입력받은 개수를 리턴하는 대신, fill_array() 함수는 배열에서 마지막으로 채워진 곳 바로 다음 위치를 지시하는 포인터를 리턴한다.
//다른 두 함수는 이 포인터를 두 번째 매개변수로 사용하여 데이터의 끝을 판단한다.

const int MAX = 5;

//함수 원형
// int fill_array(double arr[], int n);
double * fill_array(double * begin, const double * end);
void show_array(const double * begin, const double * end);
void revalue(double factor, double * begin, const double * end);

int main() {
    double properties[MAX];
    const double * next_ptr = fill_array(properties, properties + MAX);
    show_array(properties, next_ptr);
    if (next_ptr != properties) {
        cout << "재평가율을 입력하십시오 : ";
        double factor;
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n')
            cout << "잘못 입력했습니다. 수치를 입력하세요 : ";
        }

        revalue(factor, properties, next_ptr);
        show_array(properties, next_ptr);
    }

    cout << "프로그램을 종료합니다 \n";
    cin.get();
    cin.get();
    return 0;
}

double * fill_array(double * begin, const double * end) {
    double temp;
    int i = 1;
    double * ptr = begin;
    for (double *p = begin; p < end; p++) {
        cout << (i) << "번 부동산의 가격 : $ ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                cout  << "입력 불량; 입력 과정을 끝내겠습니다. \n";
            break;
        }
        if (temp < 0) {
            break;
        }
        *p = temp;
        ptr++;
        i++;
    }

    return ptr;
}

void show_array(const double * begin, const double * end) {
    int i = 1;
    for (const double * p = begin; p < end; p ++) {
        cout << (i) << "번 부동산 : $ ";
        cout << *p << endl;
        i++;
    }
}
void revalue(const double factor, double * begin, const double * end) {
    for (double * p = begin; p < end; p++) {
        *p = *p * factor;
    }
}