#pragma once

#include "Type.h"

// �Էºθ� ������Ʈ�Ѵ�.
// ���� �������� Ű ���� ���� �� ���� �������� Ű ���¸� �����´�.
void Input_Update(void);

// ���� �����ӿ� Ű�� ���ȴٸ� true, �ƴϸ� false
// vkey : ���� Ű�ڵ�
bool Input_GetKeyPressed(uint8 vkey);

// ���� �����ӿ� Ű�� �����ٸ� true, �ƴϸ� false
// vkey : ���� Ű�ڵ�
bool Input_GetKeyNonPressed(uint8 vkey);

// ���� �����Ӱ� ���� �����ӿ� ��� Ű�� ���ȴٸ� true, �ƴϸ� false
// vkey : ���� Ű�ڵ�
bool Input_GetKey(uint8 vkey);