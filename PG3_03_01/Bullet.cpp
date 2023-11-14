#include "Bullet.h"
#include <Novice.h>

void Bullet::Initialize(const Vector2& position)
{
	position_ = position;
	radius_ = 7.0f;
	speed_ = 10.0f;
}

void Bullet::Update()
{
	Move();
	Clear();
}

void Bullet::Draw()
{
	Novice::DrawEllipse(static_cast<int>(position_.x), static_cast<int>(position_.y),
		static_cast<int>(radius_), static_cast<int>(radius_), 0.0f, 0x11FF11FF, kFillModeSolid);
}

void Bullet::Move()
{
	position_.y -= speed_;
}

void Bullet::Clear()
{
	if (position_.y < -radius_) {
		isClear_ = true;
	}
}
