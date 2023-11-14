#include "IScene.h"

//タイトルシーンで初期化
int IScene::sceneNo = TITLE;

InputManager* IScene::inputManager_;

void IScene::StaticInit() {
	inputManager_ = InputManager::GetInstance();
}

IScene::~IScene(){}

int IScene::GetSceneNo() { return sceneNo; }
