#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <fstream>
#include <iostream>
#include <sstream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <Matrix3.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

using namespace std;
using namespace sf;
using namespace customMatrix;
using namespace glm;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;
};

#endif