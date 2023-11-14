#pragma once
#include <Novice.h>
#include "InputManager.h"

//シーン名を列挙型(Enum)で定義
enum SCENE { TITLE, STAGE, CLEAR };

class IScene
{

protected:

	static int sceneNo;
	static InputManager* inputManager_;

public: 

	void StaticInit();
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	//デストラクタ
	virtual ~IScene();

	int GetSceneNo();

};

