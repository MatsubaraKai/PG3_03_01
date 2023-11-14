#include "ClearScene.h"

void ClearScene::Init()
{
}

void ClearScene::Update()
{
	if (inputManager_->GetPreKeys()[DIK_SPACE] == 0 &&
		inputManager_->GetKeys()[DIK_SPACE] != 0) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw()
{
	int sample = Novice::LoadTexture("./NoviceResources/sample.png");
	Novice::ScreenPrintf(0, 20, "CLEAR SCENE : PUSH SPACE");
	Novice::DrawSprite(0, 300, sample, 1, 1, 0.0f, WHITE);
}
