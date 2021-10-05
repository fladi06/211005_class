#pragma once

class Player;
class Map;

class Engine
{
public:
	Engine();
	~Engine();

	Player* player; // has a °ü°è
	Map* map;
	
	void Run();

private:

	void Initialize();
	void Terminalize();

	void Input();
	void Process();
	void Render();
};

