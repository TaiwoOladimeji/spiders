#include "stdafx.h"
#include "MyGame.h"

CMyGame game;
CGameApp app;

int main(int argc, char* argv[])
{
	//app.DebugMemoryLeaks();
	app.OpenWindow(1280, 768, "Spiders Attack!");
	//app.OpenFullScreen(800, 600, 24);
	//app.OpenConsole();
	app.SetClearColor(CColor::White());
	app.Run(&game);
	return(0);
}
