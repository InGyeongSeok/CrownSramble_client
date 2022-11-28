#pragma once
#include "Header.h"

class Hero
{
	const glm::mat4 Unit;

	glm::mat4 Change;

	glm::vec3 color;
	float scaleX;
	float scaleY;
	float scaleZ;
	float HP{ 100 };
	float PosX;
	float PosY;
	float PosZ;

public:
	Hero(float SX, float SY, float SZ, float X, float Y, float Z);
	~Hero();
	void damage();
	void Update();
	void Draw();
	void location();
};