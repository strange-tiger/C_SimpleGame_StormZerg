#pragma once

#include "Type.h"

// �������� �ʱ�ȭ
// �ʱ�ȭ�� ���������� true, �ƴϸ� false
bool   Renderer_Init(void);

// �������� ����
void   Renderer_Cleanup(void);


// ȭ���� �ٲ۴�.
void   Renderer_Flip(void);

// ȭ�鿡 �ؽ�Ʈ�� ����Ѵ�.
void   Renderer_DrawText(const char* text, int32 numberOfChar);