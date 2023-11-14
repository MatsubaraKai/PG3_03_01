#pragma once

#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"

#include "InputManager.h"

class GameManager
{

private: 

	std::unique_ptr<IScene> sceneArr_[3];
	int currentSceneNo_; // 現在のシーン
	int prevSceneNo_; // 前のシーン

	InputManager* inputManager_;

public:

	GameManager();
	~GameManager();
	int Run(); 

};

