#pragma once

#include <stdbool.h>

// Ÿ�̸Ӹ� �ʱ�ȭ
bool Timer_Init(void);

// Ÿ�̸Ӹ� ������Ʈ
void Timer_Update(void);
float Timer_GetDeltaTime(void);