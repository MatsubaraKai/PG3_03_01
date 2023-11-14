#include "GameManager.h"
#include <Novice.h>

GameManager::GameManager()
{
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	// 初期シーン
	currentSceneNo_ = TITLE;
	prevSceneNo_ = TITLE;

	sceneArr_[currentSceneNo_]->StaticInit();
	inputManager_ = InputManager::GetInstance();
}

GameManager::~GameManager(){}

int GameManager::Run()
{
	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();

		inputManager_->Update();

		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}

		sceneArr_[currentSceneNo_]->Update();
		sceneArr_[currentSceneNo_]->Draw();

		Novice::EndFrame();
		if (inputManager_->GetPreKeys()[DIK_ESCAPE] == 0 && inputManager_->GetKeys()[DIK_ESCAPE] != 0) {
			break;
		}
	}
	return 0;
}
