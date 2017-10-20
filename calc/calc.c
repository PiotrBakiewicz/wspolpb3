#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "wprowadź liczby: ";
    cin >> num1;

    char op;
    cout << "wprowadź operator \n 1 dla dodawania, 2 dla odejmowania, 3 dla mnożenia lub  4 dla dzielenia: ";
    cin >> op;

    int num2;
    cout << "wprowadź drugą liczbę: ";
    cin >> num2;

    int answer, answer1, answer2, answer3;
    if (op == 1){
        answer = num1 + num2;
        cout << "odpowiedź: " << answer << endl;;
    } else {
        if (op == 2){
            answer1 = num1 - num2;
            cout << "odpowiedź: " << answer1 << endl;
        } else {
            if (op == 3){
                answer2 = num1 * num2;
                cout <<  "odpowiedź: " << answer2 << endl;
            } else {
                if (op == 4){
                    answer3 = num1 / num2;
                    cout << "odpowiedź: " << answer3 << endl;
                }

                }}}




    system("PAUSE");
    return 0;
}
