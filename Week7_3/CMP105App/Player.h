#pragma once

#include "Framework/GameObject.h"
#include "Bullet.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);
	Bullet* getBullet()
	{
		return bullet;
	}


	Bullet* bullet; // New pointer created, with type Bullet

};