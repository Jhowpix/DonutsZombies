class Donuts_ZmbM_ClownII: ZmbM_ConstrWorkerNormal_Base
{
	protected bool m_Donuts_Done;
	protected int m_Donuts_SoundSync;
	void Donuts_ZmbM_ClownII()
	{
		m_Donuts_Done = false;
		m_Donuts_SoundSync = 0;
		RegisterNetSyncVariableInt("m_Donuts_SoundSync");
	}

	override void EEInit()
	{
		super.EEInit();
		if (GetGame() && GetGame().IsServer())
		{
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(Donuts_Check, 3000, true);
		}
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		if (m_Donuts_SoundSync == 1)
		{
			SEffectManager.PlaySound("Donuts_Blind_SoundSet", GetPosition());
			m_Donuts_SoundSync = 0;
		}
	}

	void Donuts_Check()
	{
		if (m_Donuts_Done || !IsAlive()) return;

		array<Man> players = new array<Man>;
		GetGame().GetPlayers(players);

		foreach (Man p : players)
		{
			if (p && p.IsPlayer() && p.IsAlive())
			{
				if (vector.Distance(GetPosition(), p.GetPosition()) < 10.0)
				{
					Donuts_Trigger();
					break;
				}
			}
		}
	}

	void Donuts_Trigger()
	{
		m_Donuts_Done = true;
		m_Donuts_SoundSync = 1;
		SetSynchDirty();

		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(Donuts_Check);
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(Donuts_Spawn, 2400, false);
	}

	void Donuts_Spawn()
	{
		if (!this || !IsAlive()) return;

		string spawnClass = "Donuts_Devol";
		if (!GetGame().ConfigIsExisting("CfgVehicles " + spawnClass)) spawnClass = "ZmbM_JournalistNormal_White";

		int count = Math.RandomIntInclusive(2, 5);
		for (int i = 0; i < count; i++)
		{
			vector pos = GetPosition();
			pos[0] = pos[0] + Math.RandomFloatInclusive(-5, 5);
			pos[2] = pos[2] + Math.RandomFloatInclusive(-5, 5);
			pos[1] = GetGame().SurfaceY(pos[0], pos[2]);

			GetGame().CreateObject(spawnClass, pos, false, true);
		}
	}
}