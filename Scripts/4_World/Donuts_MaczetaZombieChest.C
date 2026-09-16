class Donuts_MaczetaZombieChest: Clothing
{
override bool CanDetachAttachment(EntityAI parent)
    {
        if (parent && parent.IsInherited(ZombieBase))
            return false;

        return super.CanDetachAttachment(parent);
    }
}  