//
// Created by Jayce Lee on 25. 12. 17.
//

#include <iostream>
#include <array>
#include <string>
using namespace std;

//chapter 7 - exercise 9

//array 클래스를 사용하지 않고 7.15를 다시 한다.
//a. 계절명에 대해 const char *로 배열을 사용하라. 그리고 그 비용에 대하여 double로 array 객체를 사용하라.
//b. 계절명에 대해 const char *로 배열을 사용하라. 그리고 그 비용에 대하여 double로 배열을 사용하며,
//   그 배열을 단일 멤버로 가지는 구조체를 사용하라.

const int SEASONS = 4;
const char * name[] = {"Spring", "Summer", "Fall", "Winter"};

// void fill(array<double, SEASONS> *pa);
struct Data {
    double arr[4];
};

void fill(Data * data);
void show(Data da);

int main() {
    double expenses[SEASONS];
    // array<double, SEASONS> expenses;
    Data data;
    fill(&data);
    show(data);
    return 0;
}

//a에 대한 해답
// void fill(array<double, SEASONS> *pa) {
//     for (int i = 0; i < SEASONS; i++) {
//         cout << name[i] << "에 소모되는 비용:";
//         cin >> (*pa)[i];
//     }
// }

//b에 대한 해답
void fill(Data * data) {
    for (int i = 0; i < SEASONS; i++) {
        cout << name[i] << "에 소모되는 비용:";
        cin >> data -> arr[i];
    }
}

void show(Data data) {
    double total = 0.0;
    cout << "\n계절별 비용\n";
    for (int i = 0; i < SEASONS; i++) {
        cout << name[i] << " : $ " << data.arr[i] << endl;
        total += data.arr[i];
    }
    cout << "총 비용 : $ " << total << endl;
}
// void show(array<double, SEASONS> da) {
//     double total = 0.0;
//     cout << "\n계절별 비용\n";
//     for (int i = 0; i < SEASONS; i++) {
//         cout << name[i] << " : $ " << da[i] << endl;
//         total += da[i];
//     }
//     cout << "총 비용 : $ " << total << endl;
// }