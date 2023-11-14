#pragma once
#include "IScene.h"

class ClearScene : public IScene
{

public: 

	virtual void Init() override;
	virtual void Update() override;
	virtual void Draw() override;

};

