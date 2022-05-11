#pragma once

#include "Type.h"

// ���� �ʱ�ȭ
void Random_Init(void);

// ������ ������ �����´�.
// min : �ּڰ� // max : �ִ�
// [min, max) ������ ������ ����
int32 Random_GetIntegerNumFromRange(int32 min, int32 max);

// ������ �Ǽ��� �����´�.
// min : �ּڰ� // max : �ִ�
// [min, max] ������ ������ �Ǽ�
float Random_GetFloatNumFromRange(float min, float max);

