#pragma once

class CriticalSection
{
public:
	void Unlock();
	void Lock();
	CriticalSection();
	virtual ~CriticalSection();
private:
	CRITICAL_SECTION m_criticalSection;
};


class CriticalSection;

class CriticalSectionGuard
{
public:
	CriticalSectionGuard(CriticalSection &criticalSection);
	virtual ~CriticalSectionGuard();
private:
	CriticalSection &m_criticalSection;
};
