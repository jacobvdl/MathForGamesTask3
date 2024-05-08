#pragma once
#include "raylib-cpp.hpp"
#include "Colour.h"
#include "GameObject.h"
class SpriteObject : public GameObject
{
public:
	raylib::Texture2D* Sprite;
	Vector3 Origin;

	Colour Tint;

	SpriteObject();
protected:
	void OnDraw() override;
};

