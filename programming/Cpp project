#include <iostream>
#include <string>
using namespace std;

int num;
//초기 출력 화면
int money;
int adult, child;	//성인과 청소년의 인원 수를 체크하기 위해 변수를 지정해줍니다.
 //2차원 배열로 지정좌석을 나타내줍니다.

int seats[11][7] = {};
int i; //세로줄 좌석을 나타냅니다.
int j; //가로줄 좌석을 나타냅니다.
int k, l = 0;

int main()
{
		while ( num !=3 )
		{

		cout << "**영화 예약 시스템**\n\n";
		cout << "1. 좌석 예약\n";
		cout << "2. 예약 변경\n";
		cout << "3. 프로그램 종료\n\n";


			cout << "번호를 입력하세요: ";
			cin >> num;
			//먼저 영화관 메인 시스템을 실행합니다. 3개의 선택지가 나와있습니다.

			//1번을 입력했을 경우.
			if (num == 1) {

				cout << endl << endl;
				cout << "1 2 3 4 5 6" << endl;
				cout << "----------- " << endl;
				cout << endl;

				//2차원 배열을 구현해줍니다. 0으로 이루어져 있으며, 세로줄은 10줄. 가로줄은 6줄입니다.
				for (i = 1; i < 11; i++) {
					for (j = 1; j < 7; j++) {
						cout << seats[i][j] << " ";
					}
					cout << endl;
				}

				

				cout << endl <<"성인(14000원): ";
				cin >> adult;
				cout << "청소년(11000원): ";
				cin >> child;


				for (int total = adult + child; total > 0; --total)	//total = 성인+청소년 인원수. total -1 (0이 될 때까지 반복).
				{//인원수에 따라 반복되어야 함

					cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?" << endl;
					cin >> i >> j;	//예약할 행,열을 입력하세요.

					if (i < 11 && j < 7)	//10열, 6번째 행을 벗어나지 않아야 합니다.
					{
						if (seats[i][j] == 0)	//i,j가 0일 때(비어있는 좌석일 때)
						{
							cout << "예약되었습니다." << endl << endl;

							seats[i][j] = 1;	//예약이 완료되며, 해당 좌석은 1표시로 바뀝니다.(예약된 좌석)

						}
						else if (seats[i][j] == 1)	//i,j가 1일 때 (이미 예약된 좌석)
						{
							cout << "이미 예약되었습니다. 다른 자리를 선택하세요" << endl << endl;
							++total;	//카운트가 차감되지 않도록 total +1.
						}
					}

					else 
					{	//행, 열을 벗어난 정수 입력 시.

						cout << "예약 가능한 좌석이 아닙니다." << endl << endl;
						++total;	//카운트가 차감되지 않도록 total +1.

					}
				}

			}

			//2번 입력 (예약 변경)
			else if (num == 2) {

			

				cout << endl << endl;
				cout << "1 2 3 4 5 6" << endl;
				cout << "-----------";
				cout << endl;
				
				for (i = 1; i < 11; i++) {
					for (j = 1; j < 7; j++) {
						cout << seats[i][j] << " ";
					
					}
					cout << endl;
				}
				int change = 0;
					cout << "바꿀 좌석의 갯수를 입력하세요:";
					cin >> change;

					for (change; change > 0; --change) {
						cout << endl << "현재 좌석과 바꿀 좌석을 입력하세요" << endl;
						cout << "현재 좌석(N열, M번째): ";
						cin >> i >> j;	//상태가 1이어야 함
						//예약 변경 후 0이 되어야 함



						if (i < 11 && j < 7 )
						{
							cout << "변경 좌석(N열, M번째): ";
							cin >> k >> l;	//상태가 0이어야 함

							if (k < 11 && l < 7) {

								if (seats[i][j] == 1)	//현재 좌석이 예약된 좌석일 때 (정상)
								{
									if (seats[k][l] == 1)	//변경 좌석이 1인 상태일 때.
									{
										cout << "이미 예약되었습니다. 다른 자리를 선택하세요." << endl;
										++change;
									}
									else if (seats[k][l] == 0)	//변경 좌석이 0인 상태일  때.
									{
										cout << "변경되었습니다." << endl;
										seats[k][l] = 1;
										seats[i][j] = 0;
									}
								}
								else if (seats[i][j] == 0)	//현재 좌석이 0인 상태일 때. (비정상)
								{
									cout << "현재 좌석이 틀렸습니다. 다시 입력해주세요." << endl;
									++change;
								}
							}
							else
							{
								cout << "잘못된 입력입니다. 좌석 번호를 다시 입력해주세요" << endl;
								++change;
							}
						}
						
						else	//범위 밖의 내용을 입력했을  때.
						{
						cout << "잘못된 입력입니다. 좌석 번호를 다시 입력해주세요" << endl;
							++change;
						}
					
					}
				
					cout << endl;
					for (i = 1; i < 11; i++) {
						for (j = 1; j < 7; j++) {
							cout << seats[i][j] << " ";

						}
						cout << endl;
					}
			
			}

			else if (num == 3) 
			{

				
				money = adult * 14000 + child * 11000;
				cout << endl << "총" << money << "원 입니다."<< endl;	//3을 입력하고 프로그램을 종료시킵니다.
				break;

			}


			else
			{	//메인 메뉴에서 1,2,3이 아닌 경우 포괄. 경고문을 출력합니다.

				cout << endl << "올바른 숫자를 입력해주세요." << endl << endl;
			}

		}
}
