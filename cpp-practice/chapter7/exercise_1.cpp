//
// Created by Jayce Lee on 25. 12. 11.
//

//chapter 7 - exercise 1
//쌍을 이루는 두 수를 반복해서 입력할 것을 사용자에게 요구하는 프로그램을 작성하라.
//쌍을 이루는 두 수 중에 적어도 어느 하나가 0으로 입력될 때까지 입력은 계속된다.
//두 수의 조화평균을 계산하는 함수를 사용한다.
//계산 결과를 main()에 리턴해야하고, main()은 그 결과를 보고해야 한다.

#include <iostream>
#include <cctype>
using namespace std;

double calculateAverage(int a, int b);

int main() {
    int a, b;
    cout << "쌍을 이루는 두 수를 입력하세요 : "<< endl;
    double result = 0.0;
    while (true) {
        cin >> a >> b;
        if (a == 0 || b == 0) {
            cout << "프로그램 종료" << endl;
            break;
        }

        result = calculateAverage(a, b);
        cout << "조화 평균 결과 : " << result << endl;
    }

}

double calculateAverage(int a, int b) {
    return 2.0 * a * b / (a + b);
}
