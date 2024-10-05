#include "extdll.h"
#include "util.h"
#include "cbase.h"

class CTestEntity : public CBaseEntity
{
	void Spawn() override;
	void Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value) override;
};

LINK_ENTITY_TO_CLASS(TestEntityClass, CTestEntity);

void CTestEntity::Spawn()
{
	//nothing
}

void CTestEntity::Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value)
{
	ALERT(at_console, "%s\n", STRING(pev->message));

	if (pCaller->IsPlayer()) {
		ALERT(at_console, "its a player");
	}
}