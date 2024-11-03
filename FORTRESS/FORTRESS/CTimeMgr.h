#pragma once


class CTimeMgr
{
	SINGLE(CTimeMgr);
private:
	LARGE_INTEGER	m_llCurCount;
	LARGE_INTEGER	m_llPrevCount;
	LARGE_INTEGER	m_llFrequency;
	// FPS
	// 1 프레임당 시간 Delta Time(미세한 시간)

	double			m_dDT; // 프레임 사이의 시간 값
	double			m_dAcc; // 1초 체크를 위한 누적 시간
	UINT			m_iCallCount;
	UINT			m_iFPS; // 초당 호출 횟수

public:
	void Init();
	void update();

public:
	double GetDT() { return m_dDT; }
	float GetfDT() { return (float)m_dDT; }

};

