#include "pch.h"
#include "CScene_Start.h"

#include "CObject.h"
#include "CPlayer.h"

CScene_Start::CScene_Start()
{

}

CScene_Start::~CScene_Start()
{

}

void CScene_Start::Enter()
{
	// Object 추가
	CObject* pObj = new CPlayer;
	pObj->SetPos(Vec2(640.f, 384.f));
	pObj->SetScale(Vec2(100.f, 100.f));
	AddObject(pObj, GROUP_TYPE::DEFAULT);

	// Monster Object 추가
}

void CScene_Start::Exit()
{
}
