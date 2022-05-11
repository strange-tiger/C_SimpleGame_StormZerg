#include "Common.h"
#include "Game.h"
#include "Renderer.h"
#include "Timer.h"
#include "Input.h"

bool Game_Init() 						    // �ʱ�ȭ
{
	if (false == Renderer_Init())			// ���� ó��
	{
		return false;
	}
	return true;
}

void processInput()				        	// �Է� ó��
{
	Input_Update();
}

// char str[128];
void update()				        		// ���� ������Ʈ : ����
{
	//sprintf_s(str, sizeof(str), "Text");
	// Timer_GetDeltaTime();
}

void render()							    // ���� ���
{
	// Renderer_DrawText("Text", sizeof("Text"));

	// ���� ���۸�
	// 1. ȭ�� ��ȯ�ϰ�
	Renderer_Flip();

	// 2. �� ������ ����(���� ȭ��)�� �����ش�.
	Renderer_Clear();
}

int32 Game_Run()			    			// ���� ����
{
	Timer_Init();							// Timer �ʱ�ȭ
	Random_Init();							// Random �ʱ�ȭ

	// Game Loop
	while (true)
	{

		Timer_Update();						// Timer ������Ʈ
		processInput();						// �Է�ó��
		update();							// ���� ������Ʈ
		render();							// ���� ��� 

	}

	return 0;
}