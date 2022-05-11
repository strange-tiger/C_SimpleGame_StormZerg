#include "Common.h"
#include "Input.h"

#define IS_KEY_PRESSED(vkey) (0x8000 & GetAsyncKeyState(vkey))

// ���� �������� Ű ����
bool s_isKeyPressedOnPrevFrame[256];

// ���� �������� Ű ����
bool s_isKeyPressedOnCurrentFrame[256];

void Input_Update(void)
{
	// ���� �������� Ű ���¸� ���� -> memcpy �Լ��� s_isKeyPressedOnCurrentFrame�� �����͸� s_isKeyPressedOnPrevFrame�� ����
	memcpy(s_isKeyPressedOnPrevFrame, s_isKeyPressedOnCurrentFrame, sizeof(s_isKeyPressedOnCurrentFrame));

	for (int32 vkey = 0; vkey < 256; vkey++)
	{
		if (IS_KEY_PRESSED(vkey))
		{
			s_isKeyPressedOnCurrentFrame[vkey] = true;
		}
		else
		{
			s_isKeyPressedOnCurrentFrame[vkey] = false;
		}
	}
}

bool Input_GetKeyPressed(uint8 vkey)		// Ű�� ������ ����
{
	if (s_isKeyPressedOnPrevFrame[vkey] == false && s_isKeyPressedOnCurrentFrame[vkey] == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Input_GetKeyNonPressed(uint8 vkey)		// Ű�� ������ ����
{
	if (s_isKeyPressedOnPrevFrame[vkey] == true && s_isKeyPressedOnCurrentFrame[vkey] == false)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Input_GetKey(uint8 vkey)		// Ű�� �������� �ִ� ����
{
	if (s_isKeyPressedOnPrevFrame[vkey] == true && s_isKeyPressedOnCurrentFrame[vkey] == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}