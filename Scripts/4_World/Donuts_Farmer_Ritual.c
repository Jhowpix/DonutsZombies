modded class ZombieBase
{
	override bool HandleMindStateChange(int pCurrentCommandID, DayZInfectedInputController pInputController, float pDt)
	{
		bool result = super.HandleMindStateChange(pCurrentCommandID, pInputController, pDt);

		if (GetType() == "Donuts_Farmer_Ritual"|| GetType() == "Donuts_Fisherman_Ritual")
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