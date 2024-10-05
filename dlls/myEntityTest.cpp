#include "extdll.h"
#include "util.h"
#include "cbase.h"

class CTestEntity : public CBaseEntity
{
	void Spawn() override;
	void Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value) override;
};

LINK_ENTITY_TO_CLASS(trigger_test, CTestEntity);

void CTestEntity::Spawn()
{
	ALERT(at_console, "it spawned");
}

void CTestEntity::Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value)
{
	ALERT(at_console, "%s\n", STRING(pev->message));

	ALERT(at_console, "its a player");
}