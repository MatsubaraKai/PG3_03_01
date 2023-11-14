#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "LE2B_18_マツバラ_カイ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Novice::Initialize(kWindowTitle, 1280, 720);

	std::unique_ptr<GameManager> gameManager;
	gameManager = std::make_unique<GameManager>();
	gameManager->Run();

	Novice::Finalize();
	return 0;
}
