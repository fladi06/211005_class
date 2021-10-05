#include <iostream>

#include "Engine.h"
#include "Player.h"
#include "Map.h"

using namespace std;

Engine::Engine()
{
	cout << "������ �����Ǿ����ϴ�." << endl;
	Initialize();
}

Engine::~Engine()
{
	cout << "������ �ı��Ǿ����ϴ�." << endl;
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
	cout << "�ʱ�ȭ �Ǿ����ϴ�." << endl;
}

void Engine::Terminalize()
{
	cout << "����Ǿ����ϴ�." << endl;
}

void Engine::Input()
{
	cout << "�Է��� �޴´�." << endl;
}

void Engine::Process()
{
	cout << "�Է��� ó���Ѵ�." << endl;
}

void Engine::Render()
{
	cout << "������ �Ѵ�." << endl;
}
