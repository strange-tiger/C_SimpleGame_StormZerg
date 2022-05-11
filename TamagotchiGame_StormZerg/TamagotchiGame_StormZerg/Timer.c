#include "Common.h"
#include "Timer.h"

clock_t s_prevTick;
float s_deltaTime;

bool Timer_Init(void)				// Timer �ʱ�ȭ
{
	s_prevTick = clock();			// ���� ����
}

void Timer_Update(void)				// ��Ÿ Ÿ���� ���Ѵ�.
{
	clock_t currentTick = clock();	// ���� ����

	float deltaTime = (float)(s_prevTick - currentTick) / CLOCKS_PER_SEC;

	s_deltaTime = deltaTime;
	s_prevTick = currentTick;
}

float Timer_GetDeltaTime(void)		// ��Ÿ Ÿ�� ��ȯ
{
	return s_deltaTime;
}