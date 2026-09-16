modded class ZombieBase
{
	override bool HandleMindStateChange(int pCurrentCommandID, DayZInfectedInputController pInputController, float pDt)
	{
		bool result = super.HandleMindStateChange(pCurrentCommandID, pInputController, pDt);

		if (GetType() == "Donuts_ZmbM_Doctor_No_Arms"|| GetType() == "Donuts_ZmbM_Doctor_No_Arms2"||GetType() == "Donuts_Armyofficer_No_Arms")
		{
			int mindState = pInputController.GetMindState();

			// quando estiver perseguindo player
			if (mindState == DayZInfectedConstants.MINDSTATE_CHASE)
			{
				// força andar
				pInputController.OverrideMovementSpeed(true, 1.4);
			}
		}

		return result;																
	}
}