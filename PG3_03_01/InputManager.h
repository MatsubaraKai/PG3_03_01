#pragma once
class InputManager
{

public:

	/// <summary>
	/// インスタンス取得
	/// </summary>
	/// <returns></returns>
	static InputManager* GetInstance();

    /// <summary>
    /// 更新処理
    /// </summary>
    void Update();

    /// <summary>
    /// キー取得
    /// </summary>
    /// <returns></returns>
    char* GetKeys() { return keys; }

    /// <summary>
    /// 前フレームキー取得
    /// </summary>
    /// <returns></returns>
    char* GetPreKeys() { return preKeys; }

private:

    // キー入力結果を受け取る箱
    char keys[256] = { 0 };
    char preKeys[256] = { 0 };

private:
    InputManager() = default;
    ~InputManager() = default;
    InputManager(const InputManager&) = delete;
    InputManager& operator=(const InputManager&) = delete;

};

