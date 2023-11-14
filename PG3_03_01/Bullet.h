#pragma once
#include "Vector2.h"

class Bullet
{

public:

	void Initialize(const Vector2& position);
	void Update();
	void Draw();

public:

	bool IsClear() { return isClear_; }
	Vector2 GetPosition() { return position_; }
	float GetRadius() { return radius_; }

private: 

	void Move();
	void Clear();

private:

	Vector2 position_;
	float radius_;
	float speed_;
	bool isClear_;

};

