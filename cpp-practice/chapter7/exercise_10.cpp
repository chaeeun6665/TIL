//
// Created by Jayce Lee on 26. 1. 21.
//

#include <iostream>
using namespace std;

//calculate() 함수를 설계하라.
//calculate 함수의 첫 번째와 두 번째 매개변수는 double형이다.
//세 번째 매개변수는 두 개의 double형을 매개변수로 취햐여 double형을 리턴하는 함수를 지시하는 포인터이다.
//calculate() 함수 역시 double 형이다.
//calculate 함수는 자신의 세 번째 매개변수가 지시하는 함수가, 2개의 double형 매개변수를 취하고 계산하여 리턴하는 값을 다시 리턴한다.
double add(double x, double y);
double sub(double x, double y);

double calculate(double x, double y, double (*f1) (double, double));

//add() 스타일의 다른 함수를 최소한 하나 더 사용하라.
//사용자가 쌍을 이루는 두 수를 반복해서 입력할 수 있도록 루프를 사용한다.
//각 쌍에 대하여, add() 함수와 add() 스타일의 다른 함수를 calculate() 함수를 사용하여 불러낸다.

int main() {
    double num1, num2;

    // +) add() 스타일의 함수들을 지시하는 포인터들의 배열을 만들고,
    // 이 포인터들을 사용하여 calculate 함수를 일련의 add 스타일의 함수들에 연속적으로 적용하는 루프를 만들어라.
    double (*func[])(double, double) = {add, sub};

    while (true) {
        cout << "두 수를 입력하시오 : \n";
        cin >> num1 >> num2;
        if (cin.fail()) break;

        for (int i = 0; i < 2; ++i) {
            double result = calculate(num1, num2, func[i]);
            cout << result << endl;
        }
        //
        // double add_result = calculate(num1, num2, add);
        // double sub_result = calculate(num1, num2, sub);
        //
        // cout << add_result << endl;
        // cout << sub_result << endl;
    }

    cout << "프로그램을 종료합니다. \n";

}

double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double calculate(double x, double y, double (*f1) (double, double)) {
    return f1(x, y);
}