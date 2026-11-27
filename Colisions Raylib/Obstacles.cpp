#include "Obstacles.hpp"
#include <raylib.h>

Obstacle::Obstacle()
{
	m_pos.x = 800;
	m_pos.y = 540;
	m_skin = { 0 };
}

Obstacle::~Obstacle()
{
	UnloadTexture(m_skin);
}

void Obstacle::Draw()
{

}

void Obstacle::Update()
{

}