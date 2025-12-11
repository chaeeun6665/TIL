//
// Created by Jayce Lee on 25. 12. 12.
//

//chapter 7 - exercise 4
//사용자가 수의 범위를 정하고, 그 집합에서 몇 개의 수를 뽑을 수 있다.
//그랑프리를 타려면, 뽑아 낸 모든 수가 들어맞아야 한다.
//승률은 범위에 속하는 모든 수를 바르게 뽑을 확률, 메가 수(두 번째 범위)를 바르게 뽑을 확률을 곱한 것.
//책의 Listing 7.4 문제를 이에 맞게 수정하라.
#include <iostream>
using namespace std;
long double probability(long double numbers, unsigned picks);
int main() {

    long double total, total_2;
    unsigned choices, choices_2;

    cout << "첫번째 : 전체 수의 개수와 뽑을 수의 개수를 입력하십시오: \n";
    cin >> total >> choices;
    long double probability_1 = probability(total, choices);

    cout << "두번째 메가 수 : 전체 수의 개수와 뽑을 수의 개수를 입력하십시오: \n";
    cin >> total_2 >> choices_2;
    long double probability_2 = probability(total_2, choices_2);


    cout << "당신이 그랑프리를 탈 확률은 ";
    cout << probability_1 * probability_2 << "입니다. \n";

    cout << "프로그램을 종료합니다. \n";
    return 0;
}

//numbers개의 수 중에서 picks 개의 수를 정확하게 뽑을 확률을 계산한다.
long double probability(long double numbers, unsigned picks) {
    long double comb = 1.0L;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        comb = comb * n / p;   // comb = C(numbers, picks)

    long double result = 1.0L / comb; //정확히 그 조합 하나를 맞출 확률
    return result;
}