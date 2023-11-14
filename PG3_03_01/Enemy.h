#pragma once
#include <Vector2.h>

class Enemy
{

public:

	void Initialize();
	void Update();
	void Draw();

public:

	bool IsClear() { return isClear_; }
	void SetIsClear(bool isClear) { isClear_ = isClear; }
	Vector2 GetPosition() { return position_; }
	float GetRadius() { return radius_; }

private:

	void Move();

private:

	Vector2 position_;
	float radius_;
	float speed_;
	bool isLeftMove_;
	bool isClear_;
};

