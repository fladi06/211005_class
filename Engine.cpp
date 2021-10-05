#include <iostream>

#include "Engine.h"
#include "Player.h"
#include "Map.h"

using namespace std;

Engine::Engine()
{
	cout << "엔진이 생성되었습니다." << endl;
	Initialize();
}

Engine::~Engine()
{
	cout << "엔진이 파괴되었습니다." << endl;
	Terminalize();
}

void Engine::Run()
{
	while (true)
	{
		Input();
		Process();
		Render();
	}
}

void Engine::Initialize()
{
	cout << "초기화 되었습니다." << endl;
}

void Engine::Terminalize()
{
	cout << "종료되었습니다." << endl;
}

void Engine::Input()
{
	cout << "입력을 받는다." << endl;
}

void Engine::Process()
{
	cout << "입력을 처리한다." << endl;
}

void Engine::Render()
{
	cout << "렌더링 한다." << endl;
}
