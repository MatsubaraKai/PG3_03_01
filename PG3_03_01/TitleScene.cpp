#include "TitleScene.h"

void TitleScene::Init()
{
}

void TitleScene::Update()
{
	if (inputManager_->GetPreKeys()[DIK_SPACE] == 0 &&
		inputManager_->GetKeys()[DIK_SPACE] != 0) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw()
{
	int uvChecker = Novice::LoadTexture("./NoviceResources/uvChecker.png");
	Novice::ScreenPrintf(0, 20, "TITLE SCENE : PUSH SPACE");
	Novice::DrawSprite(300, 0, uvChecker, 1, 1, 0.0f, WHITE);
}
