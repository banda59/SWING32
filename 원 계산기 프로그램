#include <iostream>
using namespace std;
double pie = 3.14;

class Circle1 {		//원 클래스
private:
  double rad;
public:
    Circle1(double r) : rad(r) {
        cout << endl << "***평면 원 계산기 접속***" << endl << endl;
    }

	//소멸자
	~Circle1() { cout << endl << "***평면 원 계산기 종료***" << endl << endl; }

	double calculate1() { return pie * rad * 2; } //원의 둘레
	double calculate2() { return pie * rad * rad; } //원의 넓이


};

class Circle2 {		//원기둥 클래스
private:
	double rad;
	double heig;
public:
	//생성자
	Circle2(double r, double h) : rad(r), heig(h) { cout << endl << "***원기둥 계산기 접속***" << endl << endl; }

	//소멸자
	~Circle2() { cout << endl << "***원기둥 계산기 종료***" << endl << endl; }

	double calculate3() { return pie * 2 * rad * (rad + heig); } //원기둥의 겉넓이
	double calculate4() { return pie * rad * rad * heig; } //원기둥의 부피



};

class Circle3 {		//원뿔 클래스
private:
	double rad;
	double heig;
public:
	//생성자
	Circle3(double r,double h) : rad(r), heig(h) { cout << endl << "***원뿔 계산기 접속***" << endl << endl; }

	//소멸자
	~Circle3() { cout << endl << "***원뿔 계산기 종료***" << endl << endl; }


	double calculate5() { return (pie * rad * rad * heig) / 3; } //원뿔의 부피


};


class Circle4 {  //구 클래스
private:
	double rad;
public:
	//생성자
	Circle4(double r) : rad(r) { cout << endl << "***구 계산기 접속***" << endl << endl; }

	//소멸자
	~Circle4() { cout << endl << "***구 계산기 종료***" << endl << endl; }

	double calculate6() { return rad * rad * pie * 4; } //구의 겉넓이
	double calculate7() { return (rad * rad * rad * pie * 4) / 3; } //구의 부피


};

int main() {

    while (true) {
        int num;
        cout << "원하는 계산을 선택하세요" << endl;
        cout << "1. 원의 넓이 계산" << endl;
        cout << "2. 원의 둘레 계산" << endl;
        cout << "3. 원기둥의 겉넓이 계산" << endl;
        cout << "4. 원기둥의 부피 계산" << endl;
        cout << "5. 원뿔의 부피 계산" << endl;
        cout << "6. 구의 겉넓이 계산" << endl;
        cout << "7. 구의 부피 계산" << endl;
        cout << "8. 종료" << endl;
        cout << endl << "선택: ";
        cin >> num;

        double rad, heig;

        cout << endl << "반지름 입력: ";
        cin >> rad;

        switch (num) {
        case 1: {
            Circle1 circle1(rad);
            cout << "1번. 원의 넓이: " << circle1.calculate1() << endl;
            break;
        }
        case 2: {
            cout << endl;
            Circle1 circle2(rad); // 생성자 호출
            cout << "2.원의 둘레: " << circle2.calculate2() << endl;
            break;
        }
        case 3: {
            cout << "높이 입력: ";
            cin >> heig;
            cout << endl;
            Circle2 circle3(rad, heig); // 생성자 호출
            cout << "3.원기둥의 겉넓이: " << circle3.calculate3() << endl;
            break;
        }
        case 4: {
            cout << "높이 입력: ";
            cin >> heig;
            Circle2 circle4(rad, heig); // 생성자 호출
            cout << "4.원기둥의 부피: " << circle4.calculate4() << endl;
            break;
        }
        case 5: {
            cout << "높이 입력: ";
            cin >> heig;
            Circle3 circle5(rad, heig); // 생성자 호출
            cout << "5.원뿔의 부피: " << circle5.calculate5() << endl;
            break;
        }
        case 6: {
            cout << endl;
            Circle4 circle6(rad); // 생성자 호출
            cout << "6.구의 겉넓이: " << circle6.calculate6() << endl;
            break;
        }
        case 7: {
            cout << endl;
            Circle4 circle7(rad); // 생성자 호출
            cout << "7.구의 부피: " << circle7.calculate7() << endl;
            break;
        }
        case 8: {
            cout << "프로그램을 종료합니다";
            return 0;
        }
        default: {
            cout << "잘못된 선택입니다." << endl;
            break;
        }
        }
    }

    return 0;
}
