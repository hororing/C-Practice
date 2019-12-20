// Lotto.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void MakeNumber(int a)
{
	int i;
	int number1;
	int number2;
	int number3;
	int number4;
	int number5;
	int number6;

	for ( i = 0; i < a; i++) // a세트 출력
	{
		number1 = rand() % 46;
		number2 = rand() % 46;
		number3 = rand() % 46;
		number4 = rand() % 46;
		number5 = rand() % 46;
		number6 = rand() % 46;
		// 6자리 숫자 랜덤 생성


		// 하나라도 같은 애가 있다면 다시 생성

		while
			(number1 != number2
			&& number1 != number3
			&& number1 != number4
			&& number1 != number5
			&& number1 != number6)
		{
			number1 = rand() % 46;
			number2 = rand() % 46;
			number3 = rand() % 46;
			number4 = rand() % 46;
			number5 = rand() % 46;
			number6 = rand() % 46;
			
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

	switch (select)
	{
	case 1:
		cout << "몇 개를 생성할까요?" << endl;
		cin >> number;
		MakeNumber(number);

	case 2:
		Exit();


	case 3:
		cout << "  1. 다시하기                         2. 종료  " << endl;
		
		cin >> selectAgain;
		if (selectAgain == 1)
		{
			select = 1;
		}
		else
		{
			select = 2;
		}
		break;
	}



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
