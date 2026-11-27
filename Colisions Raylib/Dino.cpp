#include "Dino.hpp"
#include <thread>
#include <chrono>

Dino::Dino()
{
	m_pos.x = 100;
	m_pos.y = 540;
	m_skin = { 0 };
}
Dino::~Dino()
{
	UnloadTexture(m_skin);
}

Texture2D Dino::Carrega(const char* path, Color color)
{
	Image img = LoadImage(path); //Carreguem la imatge.
	if (path == nullptr) //Si la direccio era buida retornem.
	{
		return Texture2D{ 0 };
	}

	ImageColorReplace(&img, color, BLANK); //Buidem el blanc de la imatge.
	m_skin = LoadTextureFromImage(img); //Pasem la imatge neta a texture 2D
	UnloadImage(img); //Descarreguem la imatge.
	SetTextureFilter(m_skin, TEXTURE_FILTER_POINT); //Filtre per deixa millor els pixels
	return m_skin;
}
void Dino::Draw(const char* path, Color color)
{
	Carrega(path, color); //Cridem
	DrawTextureV(m_skin, m_pos, WHITE); //Dibuixem
}

void Dino::Update()
{
	if (m_pos.y <= 540) //El posem a la altura del terra.
	{
		m_pos.y += 5;
	}

	if ((IsKeyPressed(KEY_SPACE) || IsKeyPressed(KEY_W)) && m_pos.y >= 50) //Movem el dino cap adalt.
	{
		m_pos.y -= 150;
	}
	else if (IsKeyDown(KEY_S)) //Acotem el dino.
	{
        
		
	}
}

