//
// Created by Jayce Lee on 25. 12. 12.
//

//chapter 7 - exercise 5
//하나의 정수를 매개변수로 취하고, 그 매개변수의 팩토리얼을 리턴하는 재귀함수를 정의하라.
//3의 계승은 3!이라고 쓰고, 3*2!과 같다. 0!은 1로 정의 한다.
//사용자가 다양한 값들을 입력하면 그 값들의 계승을 계산하여 보고하는 프로그램을 루프를 사용하여 작성하라.
#include <iostream>
using namespace std;
long long factorial(int n);

int main() {
    int number;
    while (true) {
        cout << "계승을 계산할 숫자를 입력하시오 : (그만두려면 -1 입력)\n";
        cin >> number;
        if (number == -1) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }
        cout << "입력한 숫자의 계승 값은 " << factorial(number) << "입니다." << endl;
    }
    return 0;
}

long long factorial(int n) {
    if (n == 0) return 1;

    long long result = 0;
    if (n > 0)
        result = n * factorial(n - 1);

    return result;
}