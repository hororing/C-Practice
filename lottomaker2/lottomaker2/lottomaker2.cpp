// Lotto.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void MakeNumber()
{
	int number;
	int i;
	int number1;
	int number2;
	int number3;
	int number4;
	int number5;
	int number6;

	cout << "몇 개를 생성할까요?" << endl;
	cin >> number;

	for ( i = 0; i < number; i++) // 입력한 값만큼 출력
	{
		number1 = (rand() % 45) + 1;
		number2 = (rand() % 45) + 1;
		number3 = (rand() % 45) + 1;
		number4 = (rand() % 45) + 1;
		number5 = (rand() % 45) + 1;
		number6 = (rand() % 45) + 1;
		// 6자리 숫자 랜덤 생성... 자꾸 0이 나와서 1을 더해줌


		// 하나라도 같은 애가 있다면 다시 생성

		while//true인동안 반복. 숫자중 같은게 하나라도 있으면 반복
			(number1 == number2 || number1 == number3 || number1 == number4 || number1 == number5 || number1 == number6
			|| number2 == number3 || number2 == number4 || number2 == number5 || number2 == number6
			|| number3 == number4 || number3 == number5 || number3 == number6
			|| number4 == number5 || number4 == number6
			|| number5 == number6)
		{
			number1 = (rand() % 45) + 1;
			number2 = (rand() % 45) + 1;
			number3 = (rand() % 45) + 1;
			number4 = (rand() % 45) + 1;
			number5 = (rand() % 45) + 1;
			number6 = (rand() % 45) + 1;
			continue;
		}

		cout << number1 << " " << number2 << " " << number3 << " " << number4 << " " << number5 << " " << number6 << endl;
		


	}

}

int Exit()
{
	return 0;
}


int main()
{
	int select;
	int number;
	int selectAgain;


	cout << "------------------------------------------------" << endl;
	cout << "            로또 번호를 생성합니다              " << endl;
	cout << "  1. 번호 생성                         2. 종료  " << endl;
	cout << "------------------------------------------------" << endl;

	cin >> select;

		while(select == 1)
		{ 
			MakeNumber();
			cout << "  1. 다시하기                         2. 종료  " << endl;
			cin >> select;
		}

		return 0;






}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
