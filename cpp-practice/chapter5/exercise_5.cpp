//
// Created by Jayce Lee on 25. 7. 9.
//

// chapter 5 - exercise 5

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    const int MONTH_NUM = 12;

    int book_array [MONTH_NUM];
    char * month_name [MONTH_NUM] = { "1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월" };

    int total_book_sales_volume = 0;

    for (int month = 0; month < MONTH_NUM; month++) {
        cout << month_name[month] << " 의 월간 판매량을 권 수로 입력하시오 : ";
        cin >> book_array[month];

        total_book_sales_volume += book_array[month];
    }

    cout << "연간 총 판매량은 :  " << total_book_sales_volume << "권이다.";
    return 0;
}
