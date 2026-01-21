//
// Created by Jayce Lee on 26. 1. 22.
//

#include <iostream>
using namespace std;

//평상시에는 문자열의 주소를 하나의 매개변수로 취하여 그 문자열을 한 번 출력하는 함수를 작성하라.
//그러다가 0이 아닌 int형 값을 두 번째 매개변수로 제공하면,
//그 시점에 도달할 때까지 그 함수가 호출되었던 횟수만큼 그 문자열을 반복해서 출력한다.

void printFunc(string &word, int x);

void printFunc(string &word, int x = 0) {
    static int callCount = 0;
    callCount++;
    if (x != 0) {
        cout << "지금까지 호출된 수 : " << callCount << endl;
        for (int i = 0; i < callCount; i++) {
            cout << word << "\n";
        }
    }
    else
        cout << word << "\n";
}

int main() {
    string word = "word";
    printFunc(word);
    printFunc(word, 1);
}


