#pragma once
#include <raylib.h>
#include <vector>

class Obstacle
{
private:
	Vector2 m_pos;
	Texture2D m_skin;

public:
	Obstacle();
	~Obstacle();
	void Draw();
	void Update();

};