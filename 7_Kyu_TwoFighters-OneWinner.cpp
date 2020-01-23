std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
  auto attack1 = fighter1->getDamagePerAttack();
  auto attack2 = fighter2->getDamagePerAttack();
  
   if(fighter1->getName() == firstAttacker)
   {
     while(fighter1->getHealth() > 0 && fighter2->getHealth() > 0)
     {
         fighter2->setHealth((fighter2->getHealth())-attack1);
         if(fighter2->getHealth() > 0) fighter1->setHealth((fighter1->getHealth())-attack2);
     }
   }
   else if(fighter2->getName() == firstAttacker)
   {
     while(fighter1->getHealth() > 0 && fighter2->getHealth() > 0)
     {
         fighter1->setHealth((fighter1->getHealth())-attack2);
         if(fighter1->getHealth() > 0) fighter2->setHealth((fighter2->getHealth())-attack1);
     }
   }
   
   if(fighter1->getHealth() > 0) return fighter1->getName();
   else if(fighter2->getHealth() > 0) return fighter2->getName();
}
