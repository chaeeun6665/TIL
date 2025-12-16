//
// Created by Jayce Lee on 25. 12. 12.
//

//chapter 7 - exercise 6
//하나의 정수를 매개변수로 취하고, 그 매개변수의 팩토리얼을 리턴하는 재귀함수를 정의하라.
//3의 계승은 3!이라고 쓰고, 3*2!과 같다. 0!은 1로 정의 한다.
//사용자가 다양한 값들을 입력하면 그 값들의 계승을 계산하여 보고하는 프로그램을 루프를 사용하여 작성하라.
#include <iostream>
using namespace std;

//chapter 7 - exercise 6
//Fill_array()는 double형 값들의 배열 이름과 배열 크기를 매개변수로 취한다.
//배열에 저장할 double형 값들을 입력하라는 프롬프트를 표시한다.
//배열이 가득 찼거나, 숫자가 아닌 것이 입력되면 입력받기를 멈추고, 그때까지 입력받은 개수를 리턴

//Show_array()는 double형 값들의 배열 이름과 배열 크기를 매개변수로 취하고, 배열의 내용을 출력

//Reverse_array()는 double형 값들의 배열 이름과 배열 크기를 매개변수로 취하고, 배열에 저장된 값들의 순서를 뒤집는다.

//배열 채우기 -> 출력 -> 순서 뒤집기 -> 출력 -> 배열의 첫번째 원소와 마지막 원소를 제외한 모든 원소의 순서를 뒤집기 -> 출력
int Fill_array(double arr[], const int n);
void Show_array(const double arr[], const int n);
void Reverse_array(double arr[], const int n);

int main() {
    const int n = 5;
    double arr[n];
    const int length = Fill_array(arr, n);
    Show_array(arr, length);
    Reverse_array(arr, length);
    Show_array(arr, length);
    Reverse_array(arr + 1, length - 2);
    Show_array(arr, length);
}

int Fill_array(double arr[], const int n) {//
    cout << "배열을 채우시오 : \n";
    int count = 0;
    for (int i = 0; i < n ; i++) {
        double element;
        cin >> element;
        if (cin.fail()) { // 숫자가 아닌 것이 들어갔을 때
            break;
        }
        arr[i] = element;
        count ++;
    }

    return count; //입력받은 개수를 리턴
}

void Show_array(const double arr[], const int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Reverse_array()는 double형 값들의 배열 이름과 배열 크기를 매개변수로 취하고, 배열에 저장된 값들의 순서를 뒤집는다.
void Reverse_array(double arr[], const int n) {
    for (int i = 0; i < n/2; i++) {
        const double temp = arr[i]; // 2
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}