//
// Created by Jayce Lee on 25. 12. 11.
//

//chapter 7 - exercise 3
//a. box 구조체를 값으로 전달받아, 각 멤버의 값을 출력하는 함수를 작성하라.
//b. box 구조체의 주소를 전달받아, volume 멤버를 다른 세 가지 멤버의 고브로 설정하는 함수를 작성하라.
//c. 앞의 두 함수를 사용하는 간단한 프로그램을 작성하라.

#include <iostream>
using namespace std;

struct Box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void showContent(Box box);
void calVolume(Box &box);

int main() {
    Box box_1 = {"Chaeeun", 30, 30, 30, 30 };

    showContent(box_1);
    calVolume(box_1);
    showContent(box_1);
}

void showContent(Box box) {
    cout << box.maker << endl;
    cout << box.height << endl;
    cout << box.width << endl;
    cout << box.length << endl;
    cout << box.volume << endl;
}

void calVolume(Box &box) {
    box.volume = box.length * box.height * box.width;
}


