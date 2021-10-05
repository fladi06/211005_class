#pragma once

// 플레이어가 이동할 수 있으며 크기는 10 X 10 이다. 

class Map
{
public:
	Map();
	~Map();

	int Data[10][10];

	void Draw();
};

