#include <raylib.h>
#include <iostream>
#include "Dino.hpp"

using namespace std;

int main()
{
	InitWindow(1200, 800, "Colisions");
	SetTargetFPS(60);
	Texture2D fons = LoadTexture("C:/Users/pauji/Desktop/Dino/Dino_fons.png");

	Dino dino;

	while (WindowShouldClose() == false)
	{
		BeginDrawing();
		ClearBackground(WHITE);
		DrawTexture(fons, 0, 0, WHITE);

		dino.Draw("C:/Users/pauji/Desktop/Dino/Dino1.png", WHITE);
		dino.Update();

		EndDrawing();
	}

	UnloadTexture(fons);
	CloseWindow();
	return 0;
}