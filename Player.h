#pragma once

// 플레이어는 2D 좌표를 가지고 있고 맵에서 이동한다. -> 이동 = 동사 / 맵 = class
class Player
{
public:
	Player();
	~Player();

	int X;
	int Y;

	void Move();
};

