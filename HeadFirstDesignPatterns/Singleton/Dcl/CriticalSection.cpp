#include "StdAfx.h"
#include "CriticalSection.h"


CriticalSection::CriticalSection()
{
	InitializeCriticalSection(&m_criticalSection);
}

CriticalSection::~CriticalSection()
{
	DeleteCriticalSection(&m_criticalSection);	
}

void CriticalSection::Lock()
{
	EnterCriticalSection(&m_criticalSection);	
}

void CriticalSection::Unlock()
{
	LeaveCriticalSection(&m_criticalSection);
}


CriticalSectionGuard::CriticalSectionGuard(CriticalSection &criticalSection)
	:m_criticalSection(criticalSection)
{
	m_criticalSection.Lock();
}


CriticalSectionGuard::~CriticalSectionGuard()
{
	m_criticalSection.Unlock();
}
