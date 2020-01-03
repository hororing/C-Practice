// Lotto.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <time.h>
using namespace std;



void MakeNumber()
{
	int number;
	srand(time(NULL));
	int lottoNumber[6];


	cout << "몇 개를 생성할까요?" << endl;
	cin >> number;

	for (int i = 0; i < number; i++) // number 만큼 생성
	{
		for (int j = 0; j < 6; j++) // 6개 생성
		{
			lottoNumber[j] = (rand() % 45) + 1;

			for(int k = 0; k < j; k++) //n번째를 뽑으면 앞의 0부터 n까지 비교
				if (lottoNumber[j] == lottoNumber[k])
				{
					break; //같으면 빠져나감. 아니면 ++
				}
				
			}

		cout << lottoNumber[0] << " " << lottoNumber[1] << " " << lottoNumber[2] << " " << lottoNumber[3] << " " << lottoNumber[4] << " " << lottoNumber[5] << endl;

		}

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

	while (select == 1)
	{
		MakeNumber();
		cout << "  1. 다시하기                         2. 종료  " << endl;
		cin >> select;
		continue;
	}
	if (select == 2)
	{
		return 0;
	}
	else
	{
		cout << "잘못된 값이 입력되었습니다" << endl;
		return 0; //main()을 다시 출력하고 싶은데 int가 아닌 값(문자열이나 소수)을 받으면 main이 계속 실행됨.

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
