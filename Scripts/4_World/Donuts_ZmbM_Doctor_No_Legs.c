modded class ZombieBase
{
	override void EEInit()
	{
		super.EEInit();

		// Blindagem: Executa apenas no servidor e aguarda a inicialização completa do motor
		if (GetGame() && GetGame().IsServer())
		{
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(Donuts_CheckNoLegsStatus, 500, false);
		}
	}

	void Donuts_CheckNoLegsStatus()
	{
		// Blindagem contra instância nula ou morte prematura
		if (!this || !IsAlive()) return;

		// Lista unificada de todas as suas classes customizadas
		if (Donuts_IsNoLegsClass())
		{
			// 1. Inativa as pernas
			this.SetHealth("LeftLeg", "Health", 0);
			this.SetHealth("RightLeg", "Health", 0);
			
			// 2. Inicia o rastejo de forma protegida
			Donuts_SecureCrawlStart();
		}
	}

	// Função auxiliar para verificar se a classe pertence ao seu mod
	bool Donuts_IsNoLegsClass()
	{
		return (IsKindOf("Donuts_jacket_No_Legs") || IsKindOf("Donuts_villager_Female_No_Legs") || IsKindOf("Donuts_villager_Male_No_Legs") ||IsKindOf("Donuts_ZmbM_Doctor_No_Legs") || IsKindOf("Donuts_Firefighter_No_Legs") || IsKindOf("Donuts_Bluecollar_No_Legs"));
	}

	void Donuts_SecureCrawlStart()
	{
		if (!this || !IsAlive()) return;

		// Blindagem crucial: verifica se o controlador de movimento é válido
		DayZInfectedCommandMove moveCommand = GetCommand_Move();
		if (moveCommand)
		{
			this.m_IsCrawling = true;
			this.StartCommand_Crawl(0);
			this.SetSynchDirty();
		}
		else
		{
			// Se o motor ainda não estiver pronto, tenta novamente em 250ms
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(Donuts_SecureCrawlStart, 250, false);
		}
	}
}