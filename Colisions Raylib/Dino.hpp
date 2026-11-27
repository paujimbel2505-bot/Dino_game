#pragma once
#include <raylib.h>
#include <vector>

class Dino {
public:
	Dino();
	~Dino();
	void Draw(const char* path, Color color);
	void Update();
	Texture2D Carrega(const char* path, Color color);

private:
	Texture2D m_skin;
	Vector2 m_pos;
};

