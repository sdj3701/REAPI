#pragma once

// �̱��� ����
// ��ü�� ������ 1���� ����
// ��𼭵� ���� ���� ����

class CCore
{

	SINGLE(CCore);

private:
	HWND	m_hWnd;			// ���� ������ �ڵ�
	POINT	m_ptResolution;	// ���� ������ �ػ�
	HDC		m_hDC;			// ���� �����쿡 Draw �� DC

	HBITMAP	m_hBit;
	HDC		m_memDC;

public:
	int Init(HWND _hWnd, POINT _ptResolution);
	void progress();

private:
	void update();
	void render();

public:
	HWND GetMainHwnd() { return m_hWnd; }

};
