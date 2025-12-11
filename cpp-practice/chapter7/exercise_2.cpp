//
// Created by Jayce Lee on 25. 12. 11.
//

//chapter 7 - exercise 2
//골프 스코어를 최대 10개까지 입력할 것을 사용자에게 요구하고, 배열에 저장하는 프로그램을 작성한다.
//10개의 스코어를 입력하기 전이라도 사용자가 입력을 끝낼 수 있어야 한다.
//모든 스코어를 한 줄에 출력하고, 평균 스코어를 보고한다.
//입력, 출력, 평균 스코어 계산을 위세 세 가지 서로 다른 배열 처리 함수를 사용하라.

#include <iostream>
using namespace std;

void input_array (double arr[], int n);
void show_array (const double arr[], int n);
void calculate_avg (const double arr[], int n);

int main() {
    const int MAX_SIZE = 10;

    int input_count;
    cout << "입력할 골프 스코어의 갯수를 입력하세요 (최대 10개): " << endl;
    cin >> input_count;

    double arr[MAX_SIZE];

    input_array(arr, input_count);
    show_array(arr, input_count);
    calculate_avg(arr, input_count);
}

void input_array (double arr[], int n) {
    cout << n << "개의 골프 스코어를 입력하세요." << endl;
    for (int i = 0; i < n; i++) {
        cout << i+1 << "번 째 스코어 입력 : ";
        cin >> arr[i];
    }
}

void show_array (const double arr[], int n) {
    cout << "입력된 골프 스코어는 다음과 같습니다. " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

void calculate_avg (const double arr[], int n) {
    double avg = 0;
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    avg = total / n;
    cout << "평균 점수는 다음과 같습니다. : " << avg << endl;
}