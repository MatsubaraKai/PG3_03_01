#include "StageScene.h"
#include <cmath>

void StageScene::Init()
{

	player_ = std::make_unique<Player>();
	player_->Initialize();

	enemy_ = std::make_unique<Enemy>();
	enemy_->Initialize();
}

void StageScene::Update()
{

	player_->Update();
	enemy_->Update();

	Collision();

	// 敵が死んだらクリアシーンに行く
	if (enemy_->IsClear()) {
		sceneNo = CLEAR;
	}
}

void StageScene::Draw()
{
	player_->Draw();
	enemy_->Draw();
}

void StageScene::Collision()
{

	for (Bullet* bullet : player_->GetBullets()) {

		// 距離取得
		Vector2 distance = { bullet->GetPosition().x - enemy_->GetPosition().x, bullet->GetPosition().y - enemy_->GetPosition().y };
		float distanceLength = std::sqrtf(distance.x * distance.x + distance.y * distance.y);

		if (distanceLength < bullet->GetRadius() + enemy_->GetRadius()) {
			enemy_->SetIsClear(true);
		}
	}
}
