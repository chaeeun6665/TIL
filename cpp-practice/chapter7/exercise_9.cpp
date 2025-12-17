//
// Created by Jayce Lee on 25. 12. 18.
//

#include <iostream>
#include <string>
using namespace std;

//주석문을 바탕으로 함수를 완성하라.

const int SLEN = 20;

struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int opplevel;
};

int getinfo(student pa[], int n);

//display() student 구조체를 매개변수로 취하며 그 구조체의 내용을 출력한다.
void display(student st);

//display2()는 student 구조체의 주소를 매개변수로 취하며 그 구조체의 내용을 출력한다.
void display2(const student * ps);

//display3()은 student 구조체 배열의 첫 번째 원소의 주소와 배열의 원소 수를 매개변수로 취하며
//구조체들의 내용을 출력한다.
void display3(const student pa[], int n);

int main() {
    cout << "학급의 학생 수를 입력하십시오 : ";
    int class_size;
    cin >> class_size;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 중요

    // while (cin.get() != '\n'){}

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for (int i =0; i < entered; i++) {
        display(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }

    display3(ptr_stu, entered);
    cout << "프로그램을 종료합니다. \n";
    return 0;
}

//getinfo()는 두 개의 매개변수를 취한다.
//하나는 student 구조체 배열의 첫 번째 원소를 지시하는 포인터이고,
//다른 하나는 그 배열의 원소 수를 나타내는 int 값이다.

//이 함수는 학생들과 관련된 데이터를 요구하여 배열에 저장하고
//배열이 다 찼거나 학생 이름에 빈 줄이 입력되면 종료된다.
//이 함수는 배열의 실제로 채워진 원소 수를 리턴한다.

int getinfo(student pa[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << "번째 학생의 이름을 입력하시오 : \n";
        cin.getline(pa[i].fullname, SLEN + 1);

        // 빈 줄이면 종료
        if (pa[i].fullname[0] == '\0') break;

        cout << i + 1 << "번째 학생의 취미를 입력하시오 : \n";
        cin.getline(pa[i].hobby, SLEN + 1);

        cout << i + 1 << "번째 학생의 레벨을 입력하시오 : \n";
        while (!(cin >> pa[i].opplevel)) {
            cin.clear();
            while (cin.get() != '\n') { }   // 잘못 입력한 줄 버리기
            cout << "잘못 입력했습니다. 정수를 입력하세요 : \n";
        }
        while (cin.get() != '\n') { }       // 숫자 뒤에 남은 개행 제거 (다음 getline 대비)

        count++;
    }

    return count;
}

//display() student 구조체를 매개변수로 취하며 그 구조체의 내용을 출력한다.
void display(student st) {
    cout << st.fullname << endl;
    cout << st.hobby << endl;
    cout << st.opplevel << endl;
}

//display2()는 student 구조체의 주소를 매개변수로 취하며 그 구조체의 내용을 출력한다.
void display2(const student * ps) {
    cout << ps->fullname << endl;
    cout << ps->hobby << endl;
    cout << ps->opplevel << endl;
}

//display3()은 student 구조체 배열의 첫 번째 원소의 주소와 배열의 원소 수를 매개변수로 취하며
//구조체들의 내용을 출력한다.
void display3(const student pa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << pa[i].fullname << endl;
        cout << pa[i].hobby << endl;
        cout << pa[i].opplevel << endl;
    }
}