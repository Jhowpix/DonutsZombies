modded class ZombieBase
{
    override void EOnInit(IEntity other, int extra)
    {
        super.EOnInit(other, extra);

        if (GetGame().IsServer())
        {
            if (this.IsKindOf("Donuts_jacket_No_Legs")|| this.IsKindOf("Donuts_villager_Female_No_Legs")|| this.IsKindOf("Donuts_villager_Male_No_Legs"))
            {
                this.SetHealth("LeftLeg", "Health", 0);
                this.SetHealth("RightLeg", "Health", 0);
                this.m_IsCrawling = true;
                this.StartCommand_Crawl(0);
                this.SetSynchDirty();
            }
        }
    }
}
