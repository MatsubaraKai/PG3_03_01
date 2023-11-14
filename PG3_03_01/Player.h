#pragma once
#include "Vector2.h"
#include "Bullet.h"
#include <list>
#include <InputManager.h>

class Player
{

public: 

	~Player();
	void Initialize();
	void Update();
	void Draw();

public: 

	std::list<Bullet*> GetBullets() { return bullets_; }

private:

	void Move();
	void Fire();
	void BulletsUpdate();

private: 

	Vector2 position_;
	float radius_;
	float speed_;
	std::list<Bullet*> bullets_;

	InputManager* inputManager_;

};

