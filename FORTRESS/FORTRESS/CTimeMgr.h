#pragma once


class CTimeMgr
{
	SINGLE(CTimeMgr);
private:
	LARGE_INTEGER	m_llCurCount;
	LARGE_INTEGER	m_llPrevCount;
	LARGE_INTEGER	m_llFrequency;
	// FPS
	// 1 �����Ӵ� �ð� Delta Time(�̼��� �ð�)

	double			m_dDT; // ������ ������ �ð� ��
	double			m_dAcc; // 1�� üũ�� ���� ���� �ð�
	UINT			m_iCallCount;
	UINT			m_iFPS; // �ʴ� ȣ�� Ƚ��

public:
	void Init();
	void update();

public:
	double GetDT() { return m_dDT; }
	float GetfDT() { return (float)m_dDT; }

};

