#include "Enemy.h"
#include <Novice.h>

void Enemy::Initialize()
{
	position_ = {500.0f, 100.0f};
	radius_ = 50.0f;
	speed_ = 5.0f;
	isLeftMove_ = false;
	isClear_ = false;
}

void Enemy::Update()
{
	Move();
}

void Enemy::Draw()
{
	Novice::DrawEllipse(static_cast<int>(position_.x), static_cast<int>(position_.y),
		static_cast<int>(radius_), static_cast<int>(radius_), 0.0f, BLACK, kFillModeSolid);
}

void Enemy::Move()
{
	if (isLeftMove_) {
		position_.x -= speed_;
		if (position_.x <= radius_) {
			position_.x = radius_;
			isLeftMove_ = false;
		}
	}
	else {
		position_.x += speed_;
		if (position_.x >= 1280.0f - radius_) {
			position_.x = 1280.0f - radius_;
			isLeftMove_ = true;
		}
	}
}
