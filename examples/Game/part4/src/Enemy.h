#pragma once
#include "Unit.h"

DECLARE_SMART(Enemy, spEnemy);
class Enemy: public Unit
{
public:
	OS_DECLARE_CLASSINFO(Enemy);

	void explode();

private:
	void _init();
	void _update(const UpdateState &us);
	int _hp;
};