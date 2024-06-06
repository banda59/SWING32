#include <iostream>
#include <cmath>
using namespace std;

void MENU() {
    cout << "=============================\n";
    cout << "  공학용 계산기 프로그램\n";
    cout << "=============================\n";
    cout << "사용할 기능을 선택하세요:\n";
    cout << "1. 더하기\n";
    cout << "2. 빼기\n";
    cout << "3. 곱하기\n";
    cout << "4. 나누기\n";
    cout << "5. 거듭제곱\n";
    cout << "6. 제곱근\n";
    cout << "7. 사인\n";
    cout << "8. 코사인\n";
    cout << "9. 탄젠트\n";
}

double ABINPUT(const string& prompt) {
    double value;
    cout << prompt;
    cin >> value;
    
    return value;
}

bool CONT() {
    char cont;
    cout << "계속 하시겠습니까? (y/n): ";
    cin >> cont;
    return (cont == 'Y' || cont == 'y');
}

void ORDER(int c) {
    double a, b, r;
    switch (c) {
    case 1: case 2: case 3: case 4: case 5:
        a = ABINPUT("첫 번째 숫자 입력 : ");
        b = ABINPUT("두 번째 숫자 입력 : ");

        switch (c) {
        case 1: r = a + b;
            break;
        case 2: r = a - b;
            break;
        case 3: r = a * b;
            break;
        case 4: if (b == 0)
        {
            cout << "0으로 나눌 수 없습니다." << endl;
            return;
        } r = a / b;
            break;
        case 5: r = pow(a, b);
            break;
        } break;

    case 6: case 7: case 8: case 9:
        a = ABINPUT("한 개의 숫자 입력 : ");
        switch (c) {
        case 6: if (a < 0)
        {
            cout << "음수의 제곱근은 계산할 수 없습니다." << endl;
            return;
        } r = sqrt(a);
        break;
        case 7: r = sin(a);
            break;
        case 8: r = cos(a);
            break;
        case 9: r = tan(a);
            break;
        } break;
    default:
        cout << "유효하지 않은 선택입니다." << endl;
        return;
    }

    cout << "-----------------------------\n";
    cout << " 결과: " << r << endl;
    cout << "-----------------------------\n";
}

int main() {
    
    while (true) {
        MENU();

        int c;
        cin >> c;

        ORDER(c);

        if (!CONT())
            break;
        cout << "=============================" << endl << endl;
    }

    return 0;

}
