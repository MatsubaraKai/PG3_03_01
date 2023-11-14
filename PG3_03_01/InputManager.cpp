#include <Novice.h>
#include "InputManager.h"


InputManager* InputManager::GetInstance()
{
	static InputManager instance;
	return &instance;
}
void InputManager::Update()
{
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

}
