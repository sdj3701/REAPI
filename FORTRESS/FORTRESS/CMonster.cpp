#include "pch.h"
#include "CMonster.h"

#include "CTimeMgr.h"

CMonster::CMonster()
	: m_vCenterPos(Vec2(0.f, 0.f))
	, m_fSpeed(100.f)
	, m_fMaxDistance(100.f)
	, m_iDir(1)
{
}

CMonster::~CMonster()
{
}

void CMonster::update()
{
	Vec2 vCurPos = GetPos();

	vCurPos.x += fDT * m_fSpeed * m_iDir;

	// 배회 거리 기준량을 넘어섰는지 확인
	if (m_fMaxDistance < abs(m_vCenterPos.x - vCurPos.x))
	{

	}

	SetPos(vCurPos);
}