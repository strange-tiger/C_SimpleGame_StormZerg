#pragma once

#include <stdbool.h>
#include "Common.h"
#include "Text.h"

// �������� �ʱ�ȭ
// �ʱ�ȭ�� ���������� true, �ƴϸ� false
bool   Renderer_Init(void);

// �������� ����
void   Renderer_Cleanup(void);


// ȭ���� �ٲ۴�.
void   Renderer_Flip(void);

// ȭ�鿡 �ؽ�Ʈ�� ����Ѵ�.
void Renderer_DrawText(const Text* text, int32 numberOfChar, int32 x, int32 y);
// printf�� �� �̻� �� ���⿡, �ֿܼ� ����� �Լ��� ����
// ���ڻ� ���� �Ӽ��� �� ���ڿ��� ���, ��� ��ġ ���� ����