class CfgManActions {};
class DBS_GR_Moves
{
	access=1;
	vehicleActions="CfgVehicleActions";
	class Actions
	{
		class NoActionsAll: CfgManActions
		{
			access=3;
		};
		class NoActions: NoActionsAll
		{
			ladderOnDown="LadderDownStart";
			ladderOnUp="LadderUpStart";
			turnSpeed=1;
			upDegree=-1;
			limitFast=5;
		};
		class DeadActions: NoActions
		{
			upDegree=0;
		};
		class CargoActions: NoActions
		{
			die="DeadState";
		};
		class WeaponActions: NoActions
		{
			
			
			
			
			handGunOn="HandGunCrouch";
			
			
			
			
			
			
			die="WeaponDead";
			civilLying="CivilLying";
			civil="Civil";
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			getInCar="CombatGetInCar";
			getOutCar="Combat";
			getInTank="CombatGetInTank";
			getOutTank="CombatGetOutTank";
			
		










stop="Weapon";
default="Weapon";
weaponOn="Weapon";
up="Weapon";
down="Weapon";
crouch="Weapon";
combat="Weapon";
stand="Weapon";
lying="Weapon";
upDegree=1;
weaponOff="Crouch";
reloadAT="WeaponReloadAT";
walkF="WeaponWalkF";
slowF="WeaponWalkF";
fastF="WeaponWalkF";
walkB="WeaponWalkB";
slowB="WeaponWalkB";
fastB="WeaponWalkB";
walkL="WeaponWalkL";
slowL="WeaponWalkL";
fastL="WeaponWalkL";
walkR="WeaponWalkR";
slowR="WeaponWalkR";
fastR="WeaponWalkR";
walkLF="WeaponWalkLF";
slowLF="WeaponWalkLF";
fastLF="WeaponWalkLF";
walkRF="WeaponWalkRF";
slowRF="WeaponWalkRF";
fastRF="WeaponWalkRF";
walkLB="WeaponWalkLB";
slowLB="WeaponWalkLB";
fastLB="WeaponWalkLB";
walkRB="WeaponWalkRB";
slowRB="WeaponWalkRB";
fastRB="WeaponWalkRB";
turnL="WeaponTurnL";
turnR="WeaponTurnR";};
		class StandActions: NoActions
		{
			stop="Stand";
			default="Stand";
			walkF="StandWalkF";
			walkLF="StandWalkLF";
			walkRF="StandWalkRF";
			walkL="StandWalkL";
			walkR="StandWalkR";
			walkLB="StandWalkLB";
			walkRB="StandWalkRB";
			walkB="StandWalkB";
			slowF="StandWalkF";
			slowLF="StandWalkLF";
			slowRF="StandWalkRF";
			slowL="StandWalkL";
			slowR="StandWalkR";
			slowLB="StandWalkLB";
			slowRB="StandWalkRB";
			slowB="StandWalkB";
			fastF="StandRunF";
			fastLF="StandWalkLF";
			fastRF="StandWalkRF";
			fastL="StandWalkL";
			fastR="StandWalkR";
			fastLB="StandWalkLB";
			fastRB="StandWalkRB";
			fastB="StandWalkB";
			
			
			weaponOn="Weapon";
			weaponOff="Stand";
			binocOn="BinocStand";
			binocOff="Stand";
			handGunOn="HandGunStand";
			strokeFist="StandStrokeFist";
			strokeGun="";
			
			combat="Combat";
			
			stand="Stand";
			civil="Civil";
			civilLying="CivilLying";
			fireNotPossible="Combat";
			throwGrenade="StandThrowGrenadeStart";
			turnL="StandTurnL";
			turnR="StandTurnR";
			getInCar="StandGetInCar";
			getOutCar="Stand";
			getInTank="StandGetInTank";
			getOutTank="StandGetOutTank";
			sitDown="StandToSitDown";
			salute="EffectStandSaluteStart";
			turnSpeed=4;
			limitFast=2.500000;
			die="StandDead";
			takeFlag="StandToStandTakeFlag";
			putDown="StandPutDown";
			upDegree=10;
		




up="CombatToCrouch";

crouch="CombatToCrouch";

down="CombatToLying";

lying="CombatToLying";
};
		class StandStillActions: StandActions
		{
			stop="EffectStandStill";
			default="EffectStandStill";
		};
		class StandStandActions: StandActions
		{
			stop="EffectStand";
			default="EffectStand";
		};
		class StandSaluteActions: StandActions
		{
			stop="EffectStandSalute";
			default="EffectStandSalute";
			salute="";
		};
		class StandTalkActions: StandActions
		{
			stop="EffectStandTalk";
			default="EffectStandTalk";
		};
		class SitActions: StandActions
		{
			turnL="";
			turnR="";
			stop="EffectStandSitDown";
			default="EffectStandSitDown";
			strokeFist="";
			sitDown="";
			die="SitDownDead";
		};
		class CivilActions: StandActions
		{
			stop="Civil";
			default="Civil";
			walkF="CivilWalkF";
			walkLF="CivilWalkLF";
			walkRF="CivilWalkRF";
			walkL="CivilWalkL";
			walkR="CivilWalkR";
			walkLB="CivilWalkLB";
			walkRB="CivilWalkRB";
			walkB="CivilWalkB";
			slowF="CivilWalkF";
			slowLF="CivilWalkLF";
			slowRF="CivilWalkRF";
			slowL="CivilWalkL";
			slowR="CivilWalkR";
			slowLB="CivilWalkLB";
			slowRB="CivilWalkRB";
			slowB="CivilWalkB";
			fastF="CivilRunF";
			fastLF="CivilRunLF";
			fastRF="CivilRunRF";
			fastL="CivilRunL";
			fastR="CivilRunR";
			fastLB="CivilRunLB";
			fastRB="CivilRunRB";
			fastB="CivilRunB";
			down="CivilLying";
			up="CivilLying";
			lying="Lying";
			combat="Combat";
			crouch="Crouch";
			stand="Stand";
			civil="Civil";
			civilLying="CivilLying";
			throwGrenade="CivilThrowGrenadeStart";
			turnL="CivilTurnL";
			turnR="CivilTurnR";
			handGunOn="HandGunStand";
			die="CivilDead";
			getInCar="CivilGetInCar";
			getOutCar="Civil";
			getInTank="CivilGetInTank";
			getOutTank="CivilGetOutTank";
			takeFlag="CivilToCivilTakeFlag";
			putDown="CivilPutDown";
			limitFast=4;
			upDegree=11;
		};
		class CombatActions: NoActions
		{
			stop="Combat";
			default="Combat";
			stopRelaxed="CombatRelaxed";
			reloadMagazine="CombatReloadMagazine";
			reloadMGun="CombatReloadMGun";
			reloadMortar="CombatReloadMortarStart";
			throwGrenade="CombatThrowGrenadeStart";
			walkF="CombatWalkF";
			walkLF="CombatWalkLF";
			walkRF="CombatWalkRF";
			walkL="CombatWalkL";
			walkR="CombatWalkR";
			walkLB="CombatWalkLB";
			walkRB="CombatWalkRB";
			walkB="CombatWalkB";
			slowF="CombatRunF";
			slowLF="CombatRunLF";
			slowRF="CombatRunRF";
			slowL="CombatRunL";
			slowR="CombatRunR";
			slowLB="CombatRunLB";
			slowRB="CombatRunRB";
			slowB="CombatRunB";
			fastF="CombatSprintF";
			fastLF="CombatSprintLF";
			fastRF="CombatSprintRF";
			fastL="CombatRunL";
			fastR="CombatRunR";
			fastLB="CombatRunLB";
			fastRB="CombatRunRB";
			fastB="CombatRunB";
			
			
			
			combat="Combat";
			
			stand="Stand";
			civil="Civil";
			civilLying="CivilLying";
			die="CombatDead";
			weaponOn="Weapon";
			binocOn="Binoc";
			binocOff="Combat";
			handGunOn="HandGunStand";
			takeFlag="CombatToTakeFlag";
			putDown="PutDown";
			medic="Medic";
			treated="Treated";
			strokeFist="";
			strokeGun="CombatStrokeGun";
			turnL="CombatTurnL";
			turnR="CombatTurnR";
			turnLRelaxed="CombatTurnLRelaxed";
			turnRRelaxed="CombatTurnRRelaxed";
			getInCar="CombatGetInCar";
			getOutCar="Combat";
			getInTank="CombatGetInTank";
			getOutTank="CombatGetOutTank";
			turnSpeed=8;
			limitFast=5.500000;
			upDegree=8;
		




up="CombatToCrouch";

crouch="CombatToCrouch";

down="CombatToLying";

lying="CombatToLying";
};
		class CrouchActions: CombatActions
		{
upDegree=6;stopRelaxed="Crouch";



















			stop="Crouch";
			default="Crouch";
			
			reloadMagazine="CrouchReloadMagazine";
			reloadMG="CrouchReloadMagazine";
			die="CrouchDead";
			
			walkF="CrouchWalkF";
			walkLF="CrouchWalkLF";
			walkRF="CrouchWalkRF";
			walkL="CrouchWalkL";
			walkR="CrouchWalkR";
			walkLB="CrouchWalkLB";
			walkRB="CrouchWalkRB";
			walkB="CrouchWalkB";
			slowF="CrouchRunF";
			slowLF="CrouchRunLF";
			slowRF="CrouchRunRF";
			slowL="CrouchRunL";
			slowR="CrouchRunR";
			slowLB="CrouchRunLB";
			slowRB="CrouchRunRB";
			slowB="CrouchRunB";
			fastF="CrouchSprintF";
			fastLF="CrouchSprintLF";
			fastRF="CrouchSprintRF";
			fastL="CrouchRunL";
			fastR="CrouchRunR";
			fastLB="CrouchRunLB";
			fastRB="CrouchRunRB";
			fastB="CrouchRunB";
			binocOn="BinocCrouch";
			binocOff="Crouch";
			handGunOn="HandGunCrouch";
			turnL="CrouchTurnL";
			turnR="CrouchTurnR";
		




up="CrouchToCombat";

combat="CrouchToCombat";

down="CrouchToLying";

lying="CrouchToLying";

throwGrenade="GR12_CrouchThrowStart";


weaponOn="Weapon";};
		class CombatStandingUpActions: CombatActions
		{
			die="LyingDead";
		};
		class CombatRunFActions: CombatActions
		{
			throwGrenade="CombatRunThrowGrenadeStart";
			die="CombatRunDead";
		};
		class CombatRunBActions: CombatActions
		{
			die="CombatRunBDead";
		};
		class CivilRunFActions: CivilActions
		{
			throwGrenade="CivilRunThrowGrenadeStart";
		};
		class CrouchRunFActions: CrouchActions
		{
			throwGrenade="CombatRunThrowGrenadeStart";
			die="CombatRunDead";
		};
		class CrouchRunBActions: CrouchActions
		{
			die="CombatRunBDead";
		};
		class CombatRelaxedActions: CombatActions
		{
			die="CombatRelaxedDead";
		};
		class LyingActions: NoActions
		{
			stop="Lying";
			default="Lying";
			reloadMagazine="LyingReloadMagazine";
			reloadMGun="LyingReloadMagazine";
			throwGrenade="LyingThrowGrenadeStart";
			walkF="LyingCrawlF";
			walkLF="LyingCrawlLF";
			walkRF="LyingCrawlRF";
			walkL="LyingCrawlL";
			walkR="LyingCrawlR";
			walkLB="LyingCrawlLB";
			walkRB="LyingCrawlRB";
			walkB="LyingCrawlB";
			slowF="LyingCrawlF";
			slowLF="LyingCrawlLF";
			slowRF="LyingCrawlRF";
			slowL="LyingCrawlL";
			slowR="LyingCrawlR";
			slowLB="LyingCrawlLB";
			slowRB="LyingCrawlRB";
			slowB="LyingCrawlB";
			fastF="LyingFastCrawlF";
			fastLF="LyingCrawlLF";
			fastRF="LyingCrawlRF";
			fastL="LyingCrawlL";
			fastR="LyingCrawlR";
			fastLB="LyingCrawlLB";
			fastRB="LyingCrawlRB";
			fastB="LyingCrawlB";
			down="Combat";
			
			lying="Lying";
			
			
			stand="Stand";
			civil="Civil";
			civilLying="CivilLying";
			die="LyingDead";
			weaponOn="Weapon";
			weaponOff="Lying";
			binocOn="BinocLying";
			binocOff="Lying";
			handGunOn="HandGunLying";
			turnL="LyingTurnL";
			turnR="LyingTurnR";
			getInCar="CombatGetInCar";
			getOutCar="Combat";
			getInTank="CombatGetInTank";
			getOutTank="CombatGetOutTank";
			takeFlag="CombatToTakeFlag";
			putDown="PutDownLying";
			medic="Medic";
			treated="TreatedLying";
			turnSpeed=3;
			upDegree=4;
		
up="LyingToCrouch";

crouch="LyingToCrouch";

combat="LyingToCombat";
};
		class CrawlingActions: LyingActions
		{
			up="CombatRunF";
			combat="CombatRunF";
		};
		class CivilLyingActions: LyingActions
		{
			stop="CivilLying";
			down="Civil";
			up="Civil";
			walkF="CivilLyingCrawlF";
			walkLF="CivilLyingCrawlLF";
			walkRF="CivilLyingCrawlRF";
			walkL="CivilLyingCrawlL";
			walkR="CivilLyingCrawlR";
			walkLB="CivilLyingCrawlLB";
			walkRB="CivilLyingCrawlRB";
			walkB="CivilLyingCrawlB";
			slowF="CivilLyingCrawlF";
			slowLF="CivilLyingCrawlLF";
			slowRF="CivilLyingCrawlRF";
			slowL="CivilLyingCrawlL";
			slowR="CivilLyingCrawlR";
			slowLB="CivilLyingCrawlLB";
			slowRB="CivilLyingCrawlRB";
			slowB="CivilLyingCrawlB";
			fastF="CivilLyingFastCrawlF";
			fastLF="CivilLyingCrawlLF";
			fastRF="CivilLyingCrawlRF";
			fastL="CivilLyingCrawlL";
			fastR="CivilLyingCrawlR";
			fastLB="CivilLyingCrawlLB";
			fastRB="CivilLyingCrawlRB";
			fastB="CivilLyingCrawlB";
			die="CivilLyingDead";
			takeFlag="CivilLyingToCivilLyingTakeFlag";
			putDown="CivilLyingPutDown";
			upDegree=3;
		};
		class CivilCrawlingActions: CivilLyingActions
		{
		};
		class LadderActions: NoActions
		{
			stop="LadderStatic";
			default="LadderStatic";
			upDegree=10;
			turnSpeed=0.100000;
			ladderOff="LadderDownEnd";
			ladderOffTop="LadderUpEnd";
			ladderOffBottom="LadderDownEnd";
			down="LadderDownLoop";
			up="LadderUpLoop";
			die="StandDead";
		};
		class LadderUpActions: LadderActions
		{
			ladderOff="LadderUpEnd";
		};
		class LadderDownActions: LadderActions
		{
			ladderOff="LadderDownEnd";
		};
		class CombatNoMoveActions: CombatActions
		{
			stopRelaxed="";
			walkF="";
			walkLF="";
			walkRF="";
			walkL="";
			walkR="";
			walkLB="";
			walkRB="";
			walkB="";
			slowF="";
			slowLF="";
			slowRF="";
			slowL="";
			slowR="";
			slowLB="";
			slowRB="";
			slowB="";
			fastF="";
			fastLF="";
			fastRF="";
			fastL="";
			fastR="";
			fastLB="";
			fastRB="";
			fastB="";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			turnSpeed=2;
		};
		class PutDownActions: CombatActions
		{
			
			
			down="Lying";
			up="Combat";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Combat";
			fireNotPossible="Combat";
		
stop="Combat";

default="Combat";
};
		class TakeFlagActions: CombatActions
		{
			stop="Combat";
			default="Combat";
			down="Lying";
			up="Combat";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Combat";
			fireNotPossible="Combat";
		};
		class MedicActions: CombatActions
		{
			stop="Medic";
			default="Medic";
			down="Lying";
			up="Combat";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Combat";
			fireNotPossible="Combat";
		};
		class TreatedActions: CombatActions
		{
			stop="Treated";
			default="Treated";
			down="Lying";
			up="Combat";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Combat";
			fireNotPossible="Combat";
		};
		class StandPutDownActions: StandActions
		{
			
			
			down="Stand";
			up="Stand";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Stand";
			fireNotPossible="Stand";
		
stop="Stand";

default="Stand";
};
		class StandTakeFlagActions: StandActions
		{
			stop="Stand";
			default="Stand";
			down="Stand";
			up="Stand";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Stand";
			fireNotPossible="Stand";
		};
		class CivilPutDownActions: CivilActions
		{
			
			
			down="CivilLying";
			up="Civil";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Civil";
			fireNotPossible="Civil";
		
stop="Civil";

default="Civil";
};
		class CivilTakeFlagActions: CivilActions
		{
			stop="Civil";
			default="Civil";
			down="CivilLying";
			up="Civil";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Civil";
			fireNotPossible="Civil";
		};
		class PutDownLyingActions: LyingActions
		{
			
			
			down="Lying";
			up="Lying";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Lying";
			fireNotPossible="Lying";
		
stop="Lying";

default="Lying";
};
		class TreatedLyingActions: LyingActions
		{
			stop="TreatedLying";
			default="TreatedLying";
			down="Lying";
			up="Lying";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Lying";
			fireNotPossible="Lying";
		};
		class CivilLyingPutDownActions: CivilLyingActions
		{
			
			
			down="CivilLying";
			up="CivilLying";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="CivilLying";
			fireNotPossible="CivilLying";
		
stop="CivilLying";

default="CivilLying";
};
		class CivilLyingTakeFlagActions: CivilLyingActions
		{
			stop="CivilLying";
			default="CivilLying";
			down="CivilLying";
			up="CivilLying";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="CivilLying";
			fireNotPossible="CivilLying";
		};
		class BinocActions: CombatNoMoveActions
		{
			stop="Binoc";
			default="Binoc";
			binocOff="Combat";
			upDegree=12;
		};
		class BinocLyingActions: LyingActions
		{
			stop="BinocLying";
			default="BinocLying";
			binocOff="Lying";
			walkF="";
			walkLF="";
			walkRF="";
			walkL="";
			walkR="";
			walkLB="";
			walkRB="";
			walkB="";
			slowF="";
			slowLF="";
			slowRF="";
			slowL="";
			slowR="";
			slowLB="";
			slowRB="";
			slowB="";
			fastF="";
			fastLF="";
			fastRF="";
			fastL="";
			fastR="";
			fastLB="";
			fastRB="";
			fastB="";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			upDegree=2;
			turnSpeed=1;
		};
		class BinocStandActions: StandActions
		{
			stop="BinocStand";
			default="BinocStand";
			binocOff="Stand";
			walkF="";
			walkLF="";
			walkRF="";
			walkL="";
			walkR="";
			walkLB="";
			walkRB="";
			walkB="";
			slowF="";
			slowLF="";
			slowRF="";
			slowL="";
			slowR="";
			slowLB="";
			slowRB="";
			slowB="";
			fastF="";
			fastLF="";
			fastRF="";
			fastL="";
			fastR="";
			fastLB="";
			fastRB="";
			fastB="";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			upDegree=13;
			turnSpeed=2;
		};
		class BinocCrouchActions: CrouchActions
		{
			stop="BinocCrouch";
			default="BinocCrouch";
			binocOff="Crouch";
			walkF="";
			walkLF="";
			walkRF="";
			walkL="";
			walkR="";
			walkLB="";
			walkRB="";
			walkB="";
			slowF="";
			slowLF="";
			slowRF="";
			slowL="";
			slowR="";
			slowLB="";
			slowRB="";
			slowB="";
			fastF="";
			fastLF="";
			fastRF="";
			fastL="";
			fastR="";
			fastLB="";
			fastRB="";
			fastB="";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			upDegree=12;
			turnSpeed=2;
		};
	class HandGunStandActions: CombatActions {upDegree=9;stop="HandGunStand";stopRelaxed="HandGunStand";default="HandGunStand";up="HandGunStand";down="HandGunLying";handGunOn="HandGunStand";walkF="HandGunStandWalkF";walkLF="HandGunStandWalkF";walkRF="HandGunStandWalkF";walkL="HandGunStandWalkL";walkR="HandGunStandWalkR";walkLB="HandGunStandWalkB";walkRB="HandGunStandWalkB";walkB="HandGunStandWalkB";slowF="HandGunStandWalkF";slowLF="HandGunStandWalkF";slowRF="HandGunStandWalkF";slowL="HandGunStandWalkL";slowR="HandGunStandWalkR";slowLB="HandGunStandWalkB";slowRB="HandGunStandWalkB";slowB="HandGunStandWalkB";fastF="HandGunStandRunF";fastLF="HandGunStandRunF";fastRF="HandGunStandRunF";fastL="HandGunStandWalkL";fastR="HandGunStandWalkR";fastLB="HandGunStandRunB";fastRB="HandGunStandRunB";fastB="HandGunStandRunB";};class HandGunCrouchActions: CrouchActions {upDegree=7;stop="HandGunCrouch";stopRelaxed="HandGunCrouch";default="HandGunCrouch";up="HandGunStand";down="HandGunLying";handGunOn="HandGunCrouch";walkF="HandGunCrouchWalkF";walkLF="HandGunCrouchWalkF";walkRF="HandGunCrouchWalkF";walkL="HandGunCrouchWalkF";walkR="HandGunCrouchWalkF";walkLB="HandGunCrouchWalkF";walkRB="HandGunCrouchWalkF";walkB="HandGunCrouchWalkF";slowF="HandGunCrouchWalkF";slowLF="HandGunCrouchWalkF";slowRF="HandGunCrouchWalkF";slowL="HandGunCrouchWalkF";slowR="HandGunCrouchWalkF";slowLB="HandGunCrouchWalkF";slowRB="HandGunCrouchWalkF";slowB="HandGunCrouchWalkF";fastF="HandGunCrouchRunF";fastLF="HandGunCrouchRunF";fastRF="HandGunCrouchRunF";fastL="HandGunCrouchRunF";fastR="HandGunCrouchRunF";fastLB="HandGunCrouchRunF";fastRB="HandGunCrouchRunF";fastB="HandGunCrouchRunF";};class HandGunLyingActions: LyingActions {upDegree=5;stop="HandGunLying";stopRelaxed="HandGunLying";default="HandGunLying";up="HandGunStand";down="HandGunLying";handGunOn="HandGunLying";walkF="HandGunLyingCrawlF";walkLF="HandGunLyingCrawlF";walkRF="HandGunLyingCrawlF";walkL="HandGunLyingCrawlF";walkR="HandGunLyingCrawlF";walkLB="HandGunLyingCrawlF";walkRB="HandGunLyingCrawlF";walkB="HandGunLyingCrawlF";slowF="HandGunLyingCrawlF";slowLF="HandGunLyingCrawlF";slowRF="HandGunLyingCrawlF";slowL="HandGunLyingCrawlF";slowR="HandGunLyingCrawlF";slowLB="HandGunLyingCrawlF";slowRB="HandGunLyingCrawlF";slowB="HandGunLyingCrawlF";fastF="HandGunLyingCrawlF";fastLF="HandGunLyingCrawlF";fastRF="HandGunLyingCrawlF";fastL="HandGunLyingCrawlF";fastR="HandGunLyingCrawlF";fastLB="HandGunLyingCrawlF";fastRB="HandGunLyingCrawlF";fastB="HandGunLyingCrawlF";};

class GR_PutDownEntryActions: PutDownActions {stop="PutDown";default="PutDown";};
class GR_StandPutDownEntryActions: StandPutDownActions {stop="StandPutDown";default="StandPutDown";};
class GR_CivilPutDownEntryActions: CivilPutDownActions {stop="CivilPutDown";default="CivilPutDown";};
class GR_PutDownLyingEntryActions: PutDownLyingActions {stop="PutDownLying";default="PutDownLying";};
class GR_CivilLyingPutDownEntryActions: CivilLyingPutDownActions {stop="CivilLyingPutDown";default="CivilLyingPutDown";};
class GR12_CombatEntry: CombatActions {stop="Combat";default="Combat";up="";down="";combat="Combat";crouch="Crouch";lying="Lying";stand="Stand";};
class GR12_CrouchEntry: CrouchActions {stop="Crouch";default="Crouch";up="";down="";combat="Combat";crouch="Crouch";lying="Lying";stand="Stand";};
class GR12_LyingEntry: LyingActions {stop="Lying";default="Lying";up="";down="";combat="Combat";crouch="Crouch";lying="Lying";stand="Stand";};
class GR12_CombatWalkFActions: CombatActions {down="GR12_CombatWalkFToProne";lying="GR12_CombatWalkFToProne";up="GR12_CombatWalkFToCrouch";crouch="GR12_CombatWalkFToCrouch";};
class GR12_CombatWalkLFActions: CombatActions {down="GR12_CombatWalkLFToProne";lying="GR12_CombatWalkLFToProne";up="GR12_CombatWalkLFToCrouch";crouch="GR12_CombatWalkLFToCrouch";};
class GR12_CombatWalkRFActions: CombatActions {down="GR12_CombatWalkRFToProne";lying="GR12_CombatWalkRFToProne";up="GR12_CombatWalkRFToCrouch";crouch="GR12_CombatWalkRFToCrouch";};
class GR12_CombatRunFActions: CombatActions {down="GR12_CombatRunFToProne";lying="GR12_CombatRunFToProne";up="GR12_CombatRunFToCrouch";crouch="GR12_CombatRunFToCrouch";};
class GR12_CombatRunLFActions: CombatActions {down="GR12_CombatRunLFToProne";lying="GR12_CombatRunLFToProne";up="GR12_CombatRunLFToCrouch";crouch="GR12_CombatRunLFToCrouch";};
class GR12_CombatRunRFActions: CombatActions {down="GR12_CombatRunRFToProne";lying="GR12_CombatRunRFToProne";up="GR12_CombatRunRFToCrouch";crouch="GR12_CombatRunRFToCrouch";};
class GR12_CombatSprintFActions: CombatActions {down="GR12_CombatSprintFToProne";lying="GR12_CombatSprintFToProne";up="GR12_CombatSprintFToCrouch";crouch="GR12_CombatSprintFToCrouch";};
class GR12_CombatSprintLFActions: CombatActions {down="GR12_CombatSprintLFToProne";lying="GR12_CombatSprintLFToProne";up="GR12_CombatSprintLFToCrouch";crouch="GR12_CombatSprintLFToCrouch";};
class GR12_CombatSprintRFActions: CombatActions {down="GR12_CombatSprintRFToProne";lying="GR12_CombatSprintRFToProne";up="GR12_CombatSprintRFToCrouch";crouch="GR12_CombatSprintRFToCrouch";};
class GR12_CrouchWalkFActions: CrouchActions {upDegree=8;down="GR12_CrouchWalkFToProne";lying="GR12_CrouchWalkFToProne";up="GR12_CrouchWalkFToCrouch";crouch="GR12_CrouchWalkFToCrouch";};
class GR12_CrouchWalkLFActions: CrouchActions {upDegree=8;down="GR12_CrouchWalkLFToProne";lying="GR12_CrouchWalkLFToProne";up="GR12_CrouchWalkLFToCrouch";crouch="GR12_CrouchWalkLFToCrouch";};
class GR12_CrouchWalkRFActions: CrouchActions {upDegree=8;down="GR12_CrouchWalkRFToProne";lying="GR12_CrouchWalkRFToProne";up="GR12_CrouchWalkRFToCrouch";crouch="GR12_CrouchWalkRFToCrouch";};
class GR12_CrouchRunFActions: CrouchActions {upDegree=8;down="GR12_CrouchRunFToProne";lying="GR12_CrouchRunFToProne";up="GR12_CrouchRunFToCrouch";crouch="GR12_CrouchRunFToCrouch";};
class GR12_CrouchRunLFActions: CrouchActions {upDegree=8;down="GR12_CrouchRunLFToProne";lying="GR12_CrouchRunLFToProne";up="GR12_CrouchRunLFToCrouch";crouch="GR12_CrouchRunLFToCrouch";};
class GR12_CrouchRunRFActions: CrouchActions {upDegree=8;down="GR12_CrouchRunRFToProne";lying="GR12_CrouchRunRFToProne";up="GR12_CrouchRunRFToCrouch";crouch="GR12_CrouchRunRFToCrouch";};
class GR12_CrouchSprintFActions: CrouchActions {upDegree=8;down="GR12_CrouchSprintFToProne";lying="GR12_CrouchSprintFToProne";up="GR12_CrouchSprintFToCrouch";crouch="GR12_CrouchSprintFToCrouch";};
class GR12_CrouchSprintLFActions: CrouchActions {upDegree=8;down="GR12_CrouchSprintLFToProne";lying="GR12_CrouchSprintLFToProne";up="GR12_CrouchSprintLFToCrouch";crouch="GR12_CrouchSprintLFToCrouch";};
class GR12_CrouchSprintRFActions: CrouchActions {upDegree=8;down="GR12_CrouchSprintRFToProne";lying="GR12_CrouchSprintRFToProne";up="GR12_CrouchSprintRFToCrouch";crouch="GR12_CrouchSprintRFToCrouch";};

class GR12_CombatRunFEntry: GR12_CombatEntry {stop="CombatRunF";default="CombatRunF";};

class GR18_LauncherCrouchActions: WeaponActions {



stop="Weapon";
default="Weapon";
weaponOn="Weapon";
up="Weapon";
down="Weapon";
crouch="Weapon";
combat="Weapon";
stand="Weapon";
lying="Weapon";
upDegree=1;
weaponOff="Crouch";
reloadAT="WeaponReloadAT";
walkF="WeaponWalkF";
slowF="WeaponWalkF";
fastF="WeaponWalkF";
walkB="WeaponWalkB";
slowB="WeaponWalkB";
fastB="WeaponWalkB";
walkL="WeaponWalkL";
slowL="WeaponWalkL";
fastL="WeaponWalkL";
walkR="WeaponWalkR";
slowR="WeaponWalkR";
fastR="WeaponWalkR";
walkLF="WeaponWalkLF";
slowLF="WeaponWalkLF";
fastLF="WeaponWalkLF";
walkRF="WeaponWalkRF";
slowRF="WeaponWalkRF";
fastRF="WeaponWalkRF";
walkLB="WeaponWalkLB";
slowLB="WeaponWalkLB";
fastLB="WeaponWalkLB";
walkRB="WeaponWalkRB";
slowRB="WeaponWalkRB";
fastRB="WeaponWalkRB";
turnL="WeaponTurnL";
turnR="WeaponTurnR";};class GR18_LauncherDownActions: GR18_LauncherCrouchActions {
stop="Weapon";
default="Weapon";
weaponOn="Weapon";
up="Weapon";
down="Weapon";
crouch="Weapon";
combat="Weapon";
stand="Weapon";
lying="Weapon";
upDegree=1;
weaponOff="Crouch";
reloadAT="WeaponReloadAT";
walkF="WeaponWalkF";
slowF="WeaponWalkF";
fastF="WeaponWalkF";
walkB="WeaponWalkB";
slowB="WeaponWalkB";
fastB="WeaponWalkB";
walkL="WeaponWalkL";
slowL="WeaponWalkL";
fastL="WeaponWalkL";
walkR="WeaponWalkR";
slowR="WeaponWalkR";
fastR="WeaponWalkR";
walkLF="WeaponWalkLF";
slowLF="WeaponWalkLF";
fastLF="WeaponWalkLF";
walkRF="WeaponWalkRF";
slowRF="WeaponWalkRF";
fastRF="WeaponWalkRF";
walkLB="WeaponWalkLB";
slowLB="WeaponWalkLB";
fastLB="WeaponWalkLB";
walkRB="WeaponWalkRB";
slowRB="WeaponWalkRB";
fastRB="WeaponWalkRB";
turnL="WeaponTurnL";
turnR="WeaponTurnR";};class GR18_LauncherUpActions: WeaponActions {
stop="Weapon";
default="Weapon";
weaponOn="Weapon";
up="Weapon";
down="Weapon";
crouch="Weapon";
combat="Weapon";
stand="Weapon";
lying="Weapon";
upDegree=1;
weaponOff="Crouch";
reloadAT="WeaponReloadAT";
walkF="WeaponWalkF";
slowF="WeaponWalkF";
fastF="WeaponWalkF";
walkB="WeaponWalkB";
slowB="WeaponWalkB";
fastB="WeaponWalkB";
walkL="WeaponWalkL";
slowL="WeaponWalkL";
fastL="WeaponWalkL";
walkR="WeaponWalkR";
slowR="WeaponWalkR";
fastR="WeaponWalkR";
walkLF="WeaponWalkLF";
slowLF="WeaponWalkLF";
fastLF="WeaponWalkLF";
walkRF="WeaponWalkRF";
slowRF="WeaponWalkRF";
fastRF="WeaponWalkRF";
walkLB="WeaponWalkLB";
slowLB="WeaponWalkLB";
fastLB="WeaponWalkLB";
walkRB="WeaponWalkRB";
slowRB="WeaponWalkRB";
fastRB="WeaponWalkRB";
turnL="WeaponTurnL";
turnR="WeaponTurnR";};

class GR19_PatrolActions: NoActions {stop="CombatRelaxed";stopRelaxed="CombatRelaxed";turnL="CombatTurnLRelaxed";turnR="CombatTurnRRelaxed";turnLRelaxed="CombatTurnLRelaxed";turnRRelaxed="CombatTurnRRelaxed";walkF="GR19_PatrolWalkF";walkB="GR19_PatrolWalkB";walkL="GR19_PatrolWalkL";walkR="GR19_PatrolWalkR";walkLF="GR19_PatrolWalkLF";walkRF="GR19_PatrolWalkRF";walkLB="GR19_PatrolWalkLB";walkRB="GR19_PatrolWalkRB";slowF="GR19_PatrolRunF";slowB="GR19_PatrolRunB";slowL="GR19_PatrolRunL";slowR="GR19_PatrolRunR";slowLF="GR19_PatrolRunLF";slowRF="GR19_PatrolRunRF";slowLB="GR19_PatrolRunLB";slowRB="GR19_PatrolRunRB";
fastF="CombatSprintF";
fastLF="CombatSprintLF";
fastRF="CombatSprintRF";
fastB="CombatRunB";
fastL="CombatRunL";
fastR="CombatRunR";
fastLB="CombatRunLB";
fastRB="CombatRunRB";};
class GR34_EastPatrolActions: NoActions {stop="GR34_EastReady";stopRelaxed="GR34_EastReady";turnL="GR34_EastTurnL";turnR="GR34_EastTurnR";turnLRelaxed="GR34_EastTurnL";turnRRelaxed="GR34_EastTurnR";walkF="GR34_EastWalkF";walkB="GR34_EastWalkB";walkL="GR34_EastWalkL";walkR="GR34_EastWalkR";walkLF="GR34_EastWalkLF";walkRF="GR34_EastWalkRF";walkLB="GR34_EastWalkLB";walkRB="GR34_EastWalkRB";slowF="GR34_EastRunF";slowB="GR34_EastRunB";slowL="GR34_EastRunL";slowR="GR34_EastRunR";slowLF="GR34_EastRunLF";slowRF="GR34_EastRunRF";slowLB="GR34_EastRunLB";slowRB="GR34_EastRunRB";
fastF="CombatSprintF";
fastLF="CombatSprintLF";
fastRF="CombatSprintRF";
fastB="CombatRunB";
fastL="CombatRunL";
fastR="CombatRunR";
fastLB="CombatRunLB";
fastRB="CombatRunRB";};};
	class BlendAnims
	{
		aimingDefault[]=
		{
			"hlava",
			1,"gr_head",1,
			"krk",
			1,"gr_neck2",1,"gr_neck",1,
			"zbran",
			1,
			"roura",
			1,
			"lrameno",
			1,
			"prameno",
			1,
			"lbiceps",
			1,"gr_lbicep",1,
			"lloket",
			1,"gr_lforearm",1,
			"lruka",
			1,"gr_lhand",1,
			"pbiceps",
			1,"gr_rbicep",1,
			"ploket",
			1,"gr_rforearm",1,
			"pruka",
			1,"gr_rhand",1,
			"hrudnik",
			0.900000,"gr_spinetop",0.900000,
			"zebra",
			0.500000,"gr_spinemid",0.500000,
			"bricho",
			0.200000,"gr_spinelow",0.200000
		};
		legsDefault[]=
		{
			"lprsty",
			1,
			"pprsty",
			1,
			"lchodidlo",
			1,
			"pchodidlo",
			1,
			"lholen",
			0.950000,
			"pholen",
			0.950000,
			"lstehno",
			0.900000,
			"pstehno",
			0.900000,
			"lzadek",
			0.500000,
			"pzadek",
			0.500000
		};
		headDefault[]=
		{
			"hlava",
			1,"gr_head",1,
			"krk",
			0.500000,"gr_neck2",0.500000,"gr_neck",0.500000
		};
		aimingLying[]=
		{
			"hlava",
			1,"gr_head",1,
			"krk",
			0.900000,"gr_neck2",0.900000,"gr_neck",0.900000,
			"lrameno",
			0.500000,
			"prameno",
			0.500000,
			"hrudnik",
			0.800000,"gr_spinetop",0.800000,
			"zebra",
			0.500000,"gr_spinemid",0.500000
		};
		aimingNo[]={};
		legsNo[]={};
		headNo[]={};
	};
	class Default
	{
		access=3;
		actions="StandActions";
		file="";
		looped=1;
		speed=0.500000;
		disableWeapons=0;
		enableOptics=1;
		disableWeaponsLong=0;
		showWeaponAim=1;
		enableMissile=0;
		enableBinocular=0;
		showItemInHand=0;
		showItemInRightHand=0;
		showHandGun=0;
		onLandBeg=0;
		onLandEnd=0;
		onLadder=0;
		duty=-0.500000;
		visibleSize=1;
		aimPrecision=1;
		recoilSuffix="";
		relSpeedMin=1;
		relSpeedMax=1;
		soundEnabled=1;
		soundOverride="";
		soundEdge1=0.500000;
		soundEdge2=1;
		terminal=0;
		limitGunMovement=1;
		variantsPlayer[]={};
		variantsAI[]=
		{
			""
		};
		equivalentTo="";
		connectAs="";
		variantAfter[]={5,10,20};
		connectFrom[]={};
		connectTo[]={};
		interpolateWith[]={};
		interpolateTo[]={};
		interpolateFrom[]={};
		aiming="aimingDefault";
		legs="legsDefault";
		head="headDefault";
		interpolationSpeed=6;
		interpolationRestart=0;
		preload=0;
	};
	class StandBase: Default
	{
		limitGunMovement=0;
		aiming="aimingNo";
		disableWeapons=1;
		disableWeaponsLong=1;
	};
	class LadderBase: StandBase
	{
		actions="LadderActions";
		aiming="aimingNo";
		legs="legsNo";
		onLadder=1;
		disableWeapons=1;
	};
	class LadderUpBase: LadderBase
	{
		actions="LadderUpActions";
	};
	class LadderDownBase: LadderBase
	{
		actions="LadderDownActions";
	};
	class DefaultDie: Default
	{
		limitGunMovement=0;
		aiming="aimingNo";
		legs="legsNo";
		head="headNo";
		disableWeapons=1;
		interpolationRestart=1;
		soundOverride="fallbody";
		soundEdge1=0.450000;
		soundEdge2=0.450000;
	};
	class States
	{
		class DeadState: Default
		{
file="\dbsgr\anim\a5ef69eaa.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class Stand: StandBase
		{
























			actions="StandActions";
			
			
			looped=1;
			soundEnabled=0;
			
			
			equivalentTo="Stand";
			interpolationSpeed=2;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		










connectTo[]={};






aiming="aimingNo";
variantsPlayer[]={};
variantsAI[]={"GR18_LowReadyIdle1",0.5,"GR18_LowReadyIdle2",0.5};
variantAfter[]={6,11,18};
file="\dbsgr\anim\gr20_patrol_ready.rtm";
speed=-2;};
		class StandVar2: Stand
		{
			
			
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;

variantsAI[]={};

variantsPlayer[]={};

variantAfter[]={0,0,0};
};
		class StandWalkF: StandBase
		{
file="\dbsgr\anim\a8a7d5614.rtm";speed=-1.2333333333333334;























			actions="StandActions";
			
			
			looped=1;
			duty=-0.700000;
			relSpeedMin=0.700000;
			relSpeedMax=1;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandWalkLF: StandWalkF
		{
			file="\dbsgr\anim\f0f5d4313.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkRF: StandWalkF
		{
			file="\dbsgr\anim\f6fb871ed.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkL: StandWalkF
		{
			file="\dbsgr\anim\f1053c5d8.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkR: StandWalkF
		{
			file="\dbsgr\anim\f70cfa607.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkLB: StandWalkF
		{
			file="\dbsgr\anim\fa46cde12.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkRB: StandWalkF
		{
			file="\dbsgr\anim\faace7cec.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkB: StandWalkF
		{
			file="\dbsgr\anim\f88dbea82.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandRunF: StandWalkF
		{
























			
			
			duty=-0.500000;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		
file="\dbsgr\anim\a3bf21e22.rtm";
speed=-0.6109590387877216;};
		class StandToCombat: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\fe5319a64.rtm";
			speed=-1.800000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToStand: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f43bd41c1.rtm";
			speed=-1.500000;
			looped=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class CombatToLying: Default
		{






















			
			
			
			
			onLandEnd=1;
			enableOptics=0;
			
			soundEnabled=1;
			soundOverride="laydown";
			soundEdge1=0.100000;
			soundEdge2=0.100000;
		






file="\dbsgr\anim\stance_stand_prone.rtm";



looped=0;

actions="GR12_LyingEntry";

connectFrom[]={"Combat",1.0};

connectTo[]={"Lying",1.0};

interpolateTo[]={"LyingDying",1};

interpolateWith[]={};

speed=-1.8;};
		class CombatRunFToLying: Default
		{






















			
			
			
			
			onLandEnd=1;
			disableWeapons=1;
			soundEnabled=1;
			
			soundOverride="laydown";
			soundEdge1=0.100000;
			soundEdge2=0.100000;
		
file="\dbsgr\anim\stance_stand_prone_run.rtm";



looped=0;

actions="GR12_LyingEntry";

connectFrom[]={"CombatRunF",1.0};

connectTo[]={"Lying",1.0};

interpolateTo[]={"LyingDying",1};

interpolateWith[]={};

speed=-1.8;};
		class LyingToCombat: Default
		{






















			
			
			
			
			onLandBeg=1;
			enableOptics=0;
			
			soundEnabled=1;
			soundOverride="standup";
			soundEdge1=0.010000;
			soundEdge2=0.010000;
		
file="\dbsgr\anim\stance_prone_stand.rtm";



looped=0;

actions="GR12_CombatEntry";

connectFrom[]={"Lying",1.0};

connectTo[]={"Combat",1.0};

interpolateTo[]={"CombatDying",1};

interpolateWith[]={};

speed=-1.95;};
		class LyingToCombatRun: Default
		{






















			
			
			
			
			onLandBeg=1;
			disableWeapons=1;
			soundEnabled=1;
			
			soundOverride="standup";
			soundEdge1=0;
			soundEdge2=0;
		
file="\dbsgr\anim\stance_prone_stand.rtm";



looped=0;

actions="GR12_CombatRunFEntry";

connectFrom[]={"Lying",1.0};

connectTo[]={"CombatRunF",1.0};

interpolateTo[]={"CombatRunFDying",1};

interpolateWith[]={};

speed=-1.95;};
		class Combat: Default
		{
























			actions="CombatActions";
			preload=1;
			
			
			looped=1;
			soundEnabled=0;
			duty=-1;
			
			
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;







connectTo[]={};

variantsPlayer[]={};
variantsAI[]={"GR16_CombatIdle1",0.333333,"GR16_CombatIdle2",0.333333,"GR16_CombatIdle3",0.333333};
variantAfter[]={6,11,18};};
		class CombatRelaxed: Combat
		{
			actions="CombatRelaxedActions";
			
			
			looped=1;
			disableWeapons=0;
			
			interpolateTo[]={"CombatRelaxedDying",0.100000,"CombatRelaxedDyingVer2",0.100000};
		










connectTo[]={};






aiming="aimingDefault";
variantsPlayer[]={};
variantsAI[]={"GR18_LowReadyIdle1",0.5,"GR18_LowReadyIdle2",0.5};
variantAfter[]={6,11,18};
file="\dbsgr\anim\gr20_patrol_ready.rtm";
speed=-2;};
		class CombatStillV1: Combat
		{
			
			
			looped=1;
			equivalentTo="Combat";
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;

variantsAI[]={};

variantsPlayer[]={};

variantAfter[]={0,0,0};

connectTo[]={};
};
		class CombatStillPlayer: Combat
		{
			
			
			looped=1;
			equivalentTo="Combat";
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;

variantsAI[]={};

variantsPlayer[]={};

variantAfter[]={0,0,0};

connectTo[]={};
};
		class CombatRelaxedStill: Combat
		{
			actions="CombatRelaxedActions";
			
			
			looped=1;
			disableWeapons=0;
			equivalentTo="CombatRelaxed";
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;

variantsAI[]={};

variantsPlayer[]={};

variantAfter[]={0,0,0};

connectTo[]={};
};
		class CombatReloadMagazine: Default
		{
file="\dbsgr\anim\abc269f19.rtm";speed=-2.5;























			preload=1;
			actions="CombatActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToBinoc: Default
		{
			actions="CombatActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_draw.rtm";
speed=-1.3333333333333335;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class Binoc: Default
		{
			actions="BinocActions";
			
			
			
			disableWeapons=0;
			showItemInHand=1;
			soundEnabled=0;
			enableBinocular=1;
			head="headNo";
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_ready.rtm";
speed=-2;
looped=1;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocToCombat: Default
		{
			actions="CombatActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_holster.rtm";
speed=-1.5;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class Crouch: Combat
		{
file="\dbsgr\anim\gr36_a4ed8acc9.rtm";speed=-0.3333333333333333;























			preload=1;
			actions="CrouchActions";
			
			
			
			
			visibleSize=0.600000;
			aimPrecision=0.500000;
			recoilSuffix="halffixed";
		




interpolateWith[]={"CrouchWalkL",0.1,"CrouchWalkR",0.1,"CrouchRunL",0.1,"CrouchRunR",0.1,"CrouchWalkB",0.1,"CrouchRunB",0.1,"CrouchWalkF",0.1,"CrouchRunF",0.1,"CrouchSprintF",0.1,"CrouchWalkLF",0.1,"CrouchWalkRF",0.1,"CrouchWalkLB",0.1,"CrouchWalkRB",0.1,"CrouchRunLF",0.1,"CrouchRunRF",0.1,"CrouchRunLB",0.1,"CrouchRunRB",0.1,"CrouchSprintLF",0.1,"CrouchSprintRF",0.1};

connectTo[]={};

variantsPlayer[]={};
variantsAI[]={"GR16_CrouchIdle1",0.333333,"GR16_CrouchIdle2",0.333333,"GR16_CrouchIdle3",0.333333};
variantAfter[]={6,11,18};};
		class CrouchIM: Combat
		{
			actions="CrouchActions";
			speed=10000000000.000000;
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class CrouchToCombat: Default
		{






















			preload=1;
			
			
			
			
			soundEnabled=0;
			enableOptics=0;
			
			
			
		
file="\dbsgr\anim\gr36_stance_crouch_stand.rtm";



looped=0;

actions="GR12_CombatEntry";

connectFrom[]={"Crouch",1.0};

connectTo[]={"Combat",1.0};

interpolateTo[]={"CombatDying",1};

interpolateWith[]={};

speed=-0.7;};
		class CrouchToCrouchSprintF: Default
		{
file="\dbsgr\anim\a6f126362.rtm";speed=-0.18;











			preload=1;
			actions="CrouchRunFActions";
			
			
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Crouch",0.400000};
			enableOptics=0;
			connectTo[]={"CrouchSprintF",0.400000};
			interpolateTo[]={"Crouch",1};
		};
		class CombatToCrouch: Default
		{






















			preload=1;
			
			
			
			
			soundEnabled=0;
			enableOptics=0;
			
			
			
		
file="\dbsgr\anim\gr36_stance_stand_crouch.rtm";



looped=0;

actions="GR12_CrouchEntry";

connectFrom[]={"Combat",1.0};

connectTo[]={"Crouch",1.0};

interpolateTo[]={"CrouchDying",1};

interpolateWith[]={};

speed=-0.65;};
		class CrouchToLying: Default
		{






















			preload=1;
			
			
			
			
			
			
			soundEnabled=1;
			enableOptics=0;
			soundOverride="laydown";
			soundEdge1=0.100000;
			soundEdge2=0.100000;
			onLandEnd=1;
			
		






file="\dbsgr\anim\gr36_stance_crouch_prone.rtm";



looped=0;

actions="GR12_LyingEntry";

connectFrom[]={"Crouch",1.0};

connectTo[]={"Lying",1.0};

interpolateTo[]={"LyingDying",1};

interpolateWith[]={};

speed=-1.15;};
		class LyingToCrouch: Default
		{






















			preload=1;
			
			
			
			
			
			
			soundEnabled=1;
			enableOptics=0;
			soundOverride="standup";
			soundEdge1=0.010000;
			soundEdge2=0.010000;
			onLandBeg=1;
			
		
file="\dbsgr\anim\gr36_stance_prone_crouch.rtm";



looped=0;

actions="GR12_CrouchEntry";

connectFrom[]={"Lying",1.0};

connectTo[]={"Crouch",1.0};

interpolateTo[]={"CrouchDying",1};

interpolateWith[]={};

speed=-1.2;};
		class CrouchReloadMagazine: Default
		{
file="\dbsgr\anim\a96b2a6e5.rtm";speed=-1.8166666666666667;























			preload=1;
			actions="CrouchActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			visibleSize=0.600000;
			aimPrecision=0.500000;
			recoilSuffix="halffixed";
			connectFrom[]={"Crouch",1};
			connectTo[]={"Crouch",1};
			interpolateTo[]={"CrouchDying",0.100000};
		};
		class CrouchDying: DefaultDie
		{
file="\dbsgr\anim\aa7c6a2ab.rtm";speed=-1.65;











			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			connectFrom[]={"Crouch",1};
			connectTo[]={"CrouchDead",1};
		};
		class CrouchDead: CrouchDying
		{
file="\dbsgr\anim\a6a5e86f2.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CrouchToWeapon: Default
		{
			
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			
			
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		




variantsAI[]={};

variantsPlayer[]={};

looped=0;




speed=-1.0166666666666666;

connectFrom[]={"Crouch",1};

file="\dbsgr\anim\gr42_gr18_launcher_crouch_draw.rtm";
actions="WeaponActions";
connectTo[]={"Weapon",1};};
		class WeaponToCrouch: Default
		{
			actions="CrouchActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Weapon",1.200000};
			
			interpolateTo[]={"CrouchDying",0.100000};
		
file="\dbsgr\anim\gr42_launcher_holster.rtm";

speed=-1.0;

variantsAI[]={};

variantsPlayer[]={};

looped=0;

connectTo[]={"Crouch",0.02};
};
		class LyingToBinocLying: Default
		{
			actions="LyingActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			showItemInHand=1;
			onLandBeg=1;
			onLandEnd=1;
			interpolateTo[]={"LyingDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_prone_draw.rtm";
speed=-1.35;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocLying: Default
		{
			actions="BinocLyingActions";
			
			
			
			disableWeapons=0;
			showItemInHand=1;
			soundEnabled=0;
			enableBinocular=1;
			onLandBeg=1;
			onLandEnd=1;
			duty=-1;
			interpolateTo[]={"LyingDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_prone_ready.rtm";
speed=-2;
looped=1;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocLyingToLying: Default
		{
			actions="LyingActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			onLandBeg=1;
			onLandEnd=1;
			interpolateTo[]={"LyingDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_prone_holster.rtm";
speed=-1.6833333333333331;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class StandToBinocStand: Default
		{
			actions="StandActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			connectFrom[]={"Stand",2};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_draw.rtm";
speed=-1.3333333333333335;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocStand: Default
		{
			actions="BinocStandActions";
			
			
			
			disableWeapons=0;
			showItemInHand=1;
			soundEnabled=0;
			enableBinocular=1;
			connectFrom[]={"StandToBinocStand",1};
			connectTo[]={"BinocStandToStand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_ready.rtm";
speed=-2;
looped=1;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocStandToStand: Default
		{
			actions="StandActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			connectTo[]={"Stand",2};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_holster.rtm";
speed=-1.5;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class StandThrowGrenadeStart: Default
		{
			actions="StandActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class StandThrowGrenadeEnd: Default
		{
			actions="StandActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CombatToTakeFlag: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f45e82281.rtm";
			speed=-0.700000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class TakeFlag: Default
		{
			actions="TakeFlagActions";
			file="\dbsgr\anim\f78fefd42.rtm";
			speed=-2.500000;
			looped=1;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CombatToTakeFlag",2};
			connectTo[]={"TakeFlagToCombat",2};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class TakeFlagToCombat: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\fa5f790c0.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToPutDown: Default
		{
file="\dbsgr\anim\a92025e45.rtm";speed=-0.6666666666666666;















			
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
actions="GR_PutDownEntryActions";
};
		class PutDown: Default
		{
file="\dbsgr\anim\a451be3a4.rtm";speed=-2.0;















			actions="PutDownActions";
			
			
			
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CombatToPutDown",2};
			connectTo[]={"PutDownToCombat",2};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class PutDownToCombat: Default
		{
file="\dbsgr\anim\a6f126362.rtm";speed=-1.0;















			actions="CombatActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToMedic: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\fd84295fb.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class Medic: Default
		{
			actions="MedicActions";
			file="\dbsgr\anim\f0abdd0b7.rtm";
			speed=-3;
			looped=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CombatToMedic",2};
			connectTo[]={"MedicToCombat",2};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class MedicToCombat: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f06cd9c5f.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToTreated: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f2273d3a4.rtm";
			speed=-5;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class Treated: Default
		{
			actions="TreatedActions";
			file="\dbsgr\anim\fbecc4932.rtm";
			speed=-3;
			looped=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CombatToTreated",2};
			connectTo[]={"TreatedToCombat",2};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class TreatedToCombat: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f5f8646ab.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class StandToStandTakeFlag: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f4a4dd9f8.rtm";
			speed=-0.700000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Stand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandTakeFlag: Default
		{
			actions="StandTakeFlagActions";
			file="\dbsgr\anim\fe022ccfd.rtm";
			speed=-2.500000;
			looped=1;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"StandToStandTakeFlag",2};
			connectTo[]={"StandTakeFlagToStand",2};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandTakeFlagToStand: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f15071344.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Stand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandToStandPutDown: Default
		{
file="\dbsgr\anim\a92025e45.rtm";speed=-0.6666666666666666;















			
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Stand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
actions="GR_StandPutDownEntryActions";
};
		class StandPutDown: Default
		{
file="\dbsgr\anim\a451be3a4.rtm";speed=-2.0;















			actions="StandPutDownActions";
			
			
			
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"StandToStandPutDown",2};
			connectTo[]={"StandPutDownToStand",2};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class StandPutDownToStand: Default
		{
file="\dbsgr\anim\a6f126362.rtm";speed=-1.0;















			actions="StandActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Stand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class CivilToCivilTakeFlag: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\f88659298.rtm";
			speed=-0.700000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Civil",1};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilTakeFlag: Default
		{
			actions="CivilTakeFlagActions";
			file="\dbsgr\anim\fc3a6fdab.rtm";
			speed=-2.500000;
			looped=1;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CivilToCivilTakeFlag",2};
			connectTo[]={"CivilTakeFlagToCivil",2};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilTakeFlagToCivil: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\fdf1a80b2.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Civil",1};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilToCivilPutDown: Default
		{
file="\dbsgr\anim\a92025e45.rtm";speed=-0.6666666666666666;















			
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Civil",1};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		
actions="GR_CivilPutDownEntryActions";
};
		class CivilPutDown: Default
		{
file="\dbsgr\anim\a451be3a4.rtm";speed=-2.0;















			actions="CivilPutDownActions";
			
			
			
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CivilToCivilPutDown",2};
			connectTo[]={"CivilPutDownToCivil",2};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class CivilPutDownToCivil: Default
		{
file="\dbsgr\anim\a6f126362.rtm";speed=-1.0;















			actions="CivilActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Civil",1};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class LyingToPutDownLying: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;















			
			
			
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Lying",1};
			interpolateTo[]={"LyingDying",0.100000};
		
actions="GR_PutDownLyingEntryActions";
};
		class PutDownLying: Default
		{
file="\dbsgr\anim\ad175c236.rtm";speed=-1.6666666666666667;















			actions="PutDownLyingActions";
			
			
			
			visibleSize=0.280000;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"LyingToPutDownLying",2};
			connectTo[]={"PutDownLyingToLying",2};
			interpolateTo[]={"LyingDying",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class PutDownLyingToLying: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;















			actions="LyingActions";
			
			
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Lying",1};
			interpolateTo[]={"LyingDying",0.100000};
		};
		class LyingToTreatedLying: Default
		{
			actions="LyingActions";
			file="\dbsgr\anim\ffd264806.rtm";
			speed=-5;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Lying",1};
			interpolateTo[]={"LyingDying",0.100000};
		};
		class TreatedLying: Default
		{
			actions="TreatedLyingActions";
			file="\dbsgr\anim\fe366f0ce.rtm";
			speed=-3;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"LyingToTreatedLying",2};
			connectTo[]={"TreatedLyingToLying",2};
			interpolateTo[]={"LyingDying",0.100000};
		};
		class TreatedLyingToLying: Default
		{
			actions="LyingActions";
			file="\dbsgr\anim\fe18a55e5.rtm";
			speed=-1;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Lying",1};
			interpolateTo[]={"LyingDying",0.100000};
		};
		class CivilLyingToCivilLyingTakeFlag: Default
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\fb982d27b.rtm";
			speed=-1;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"CivilLying",1};
			interpolateTo[]={"CivilLyingDying",0.100000};
		};
		class CivilLyingTakeFlag: Default
		{
			actions="CivilLyingTakeFlagActions";
			file="\dbsgr\anim\ffddf1ce0.rtm";
			speed=-2.500000;
			looped=1;
			visibleSize=0.280000;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CivilLyingToCivilLyingTakeFlag",2};
			connectTo[]={"CivilLyingTakeFlagToCivilLying",2};
			interpolateTo[]={"CivilLyingDying",0.100000};
		};
		class CivilLyingTakeFlagToCivilLying: Default
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\fa284939d.rtm";
			speed=-1;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"CivilLying",1};
			interpolateTo[]={"CivilLyingDying",0.100000};
		};
		class CivilLyingToCivilLyingPutDown: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;















			
			
			
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"CivilLying",1};
			interpolateTo[]={"CivilLyingDying",0.100000};
		
actions="GR_CivilLyingPutDownEntryActions";
};
		class CivilLyingPutDown: Default
		{
file="\dbsgr\anim\ad175c236.rtm";speed=-1.6666666666666667;















			actions="CivilLyingPutDownActions";
			
			
			
			visibleSize=0.280000;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CivilLyingToCivilLyingPutDown",2};
			connectTo[]={"CivilLyingPutDownToCivilLying",2};
			interpolateTo[]={"CivilLyingDying",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class CivilLyingPutDownToCivilLying: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;















			actions="CivilLyingActions";
			
			
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"CivilLying",1};
			interpolateTo[]={"CivilLyingDying",0.100000};
		};
		class CombatReloadMGun: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f2a6ed11b.rtm";
			speed=-2.930000;
			looped=0;
			disableWeapons=1;
		};
		class CombatReloadMortarStart: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f5f3b9db8.rtm";
			speed=-2.415000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
		};
		class CombatReloadMortarEnd: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f71772ab6.rtm";
			speed=-0.700000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
		};
		class CombatThrowGrenadeStart: Default
		{
			actions="CombatActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class CombatThrowGrenadeEnd: Default
		{
			actions="CombatActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CombatRunThrowGrenadeStart: Default
		{
			actions="CombatRunFActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatRunDying",0.100000,"CombatRunDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class CombatRunThrowGrenadeEnd: Default
		{
			actions="CombatRunFActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CombatStrokeGun: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f3923711f.rtm";
			speed=-2.200000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
			connectFrom[]={"Combat",1};
			connectTo[]={"CombatStrokeGunEnd",1};
		};
		class CombatStrokeGunEnd: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f01ebfb76.rtm";
			speed=10000000000.000000;
			looped=1;
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
			connectTo[]={"Combat",1};
		};
		class CombatRunF: Default
		{
























			preload=1;
			
			
			
			looped=1;
			duty=-0.500000;
			showWeaponAim=0;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		
actions="GR12_CombatRunFActions";

file="\dbsgr\anim\a3bf21e22.rtm";
speed=-0.6109590387877216;};
		class CombatRunLF: CombatRunF
		{






















			preload=0;
			
			
		
actions="GR12_CombatRunLFActions";

file="\dbsgr\anim\aff4ce2ce.rtm";
speed=-0.6109590284637683;};
		class CombatRunRF: CombatRunF
		{






















			preload=0;
			
			
		
actions="GR12_CombatRunRFActions";

file="\dbsgr\anim\ac16b53d6.rtm";
speed=-0.6109590284637683;};
		class CombatRunNF: CombatRunF
		{
			preload=0;
			actions="CombatActions";
		};
		class CombatRunL: CombatRunNF
		{
file="\dbsgr\anim\a6dfbc493.rtm";speed=-0.8166666666666667;























			
			
		};
		class CombatRunR: CombatRunNF
		{
file="\dbsgr\anim\acb034503.rtm";speed=-0.8166666666666667;























			
			
		};
		class CombatRunLB: CombatRunNF
		{
file="\dbsgr\anim\a950a1245.rtm";speed=-0.7333333333333333;





















			actions="CombatRunBActions";
			
			
		};
		class CombatRunRB: CombatRunNF
		{
file="\dbsgr\anim\a7447afb7.rtm";speed=-0.7333333333333333;





















			actions="CombatRunBActions";
			
			
		};
		class CombatRunB: CombatRunNF
		{
file="\dbsgr\anim\a6797ad5a.rtm";speed=-0.7333333333333333;























			actions="CombatRunBActions";
			
			
			soundEdge1=1;
			soundEdge2=0.500000;
		};
		class CombatSprintF: Default
		{
























			preload=1;
			
			looped=1;
			
			
			duty=0.600000;
			showWeaponAim=0;
			enableOptics=0;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		
actions="GR12_CombatSprintFActions";

file="\dbsgr\anim\gr37_west_sprintf.rtm";
speed=-0.4127062408938865;};
		class CombatSprintLF: CombatSprintF
		{






















			preload=0;
			
			
			duty=0.600000;
		
actions="GR12_CombatSprintLFActions";

file="\dbsgr\anim\gr37_west_sprintlf.rtm";
speed=-0.49881036186138555;};
		class CombatSprintRF: CombatSprintF
		{






















			preload=0;
			
			
			duty=0.600000;
		
actions="GR12_CombatSprintRFActions";

file="\dbsgr\anim\gr37_west_sprintrf.rtm";
speed=-0.4904596227440086;};
		class CombatTurnR: Default
		{
			actions="CombatActions";
			
			
			
			soundEnabled=0;
			relSpeedMin=0.900000;
			relSpeedMax=1;
		
file="\dbsgr\anim\gr19_combatturnr.rtm";
speed=-0.6;
looped=1;};
		class CombatTurnL: Default
		{
			actions="CombatActions";
			
			
			
			soundEnabled=0;
			relSpeedMin=0.900000;
			relSpeedMax=1;
		
file="\dbsgr\anim\gr19_combatturnl.rtm";
speed=-0.6;
looped=1;};
		class CombatTurnRRelaxed: CombatTurnR
		{
			
			
		
file="\dbsgr\anim\gr20_combatturnrrelaxed.rtm";
speed=-0.6;
looped=1;};
		class CombatTurnLRelaxed: CombatTurnL
		{
			
			
		
file="\dbsgr\anim\gr20_combatturnlrelaxed.rtm";
speed=-0.6;
looped=1;};
		class CombatWalkF: Default
		{
file="\dbsgr\anim\a8a7d5614.rtm";speed=-1.2333333333333334;























			
			
			
			looped=1;
			duty=-0.700000;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		
actions="GR12_CombatWalkFActions";
};
		class CombatWalkLF: CombatWalkF
		{
file="\dbsgr\anim\a03a7503d.rtm";speed=-1.2333333333333334;





















			
		
actions="GR12_CombatWalkLFActions";
};
		class CombatWalkRF: CombatWalkF
		{
file="\dbsgr\anim\a241b81c9.rtm";speed=-1.2333333333333334;





















			
		
actions="GR12_CombatWalkRFActions";
};
		class CombatWalkL: CombatWalkF
		{
file="\dbsgr\anim\a34b2cbbb.rtm";speed=-1.0666666666666667;























			
		};
		class CombatWalkR: CombatWalkF
		{
file="\dbsgr\anim\a3f8e6847.rtm";speed=-1.0666666666666667;























			
		};
		class CombatWalkLB: CombatWalkF
		{
file="\dbsgr\anim\a8c61a280.rtm";speed=-1.3166666666666667;





















			
		};
		class CombatWalkRB: CombatWalkF
		{
file="\dbsgr\anim\a325f4bf0.rtm";speed=-1.3166666666666667;





















			
		};
		class CombatWalkB: CombatWalkF
		{
file="\dbsgr\anim\ab09d445f.rtm";speed=-1.3166666666666667;























			
		};
		class CrouchRunF: CombatRunF
		{
file="\dbsgr\anim\a8e9756dc.rtm";speed=-0.8166666666666667;























			
			connectAs="CombatRunF";
			interpolateTo[]={"Crouch",1};
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchRunFActions";
};
		class CrouchRunLF: CombatRunLF
		{
file="\dbsgr\anim\ab8b3d534.rtm";speed=-0.8166666666666667;





















			
			connectAs="CombatRunLF";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchRunLFActions";
};
		class CrouchRunRF: CombatRunRF
		{
file="\dbsgr\anim\a539ea455.rtm";speed=-0.8166666666666667;





















			
			connectAs="CombatRunRF";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchRunRFActions";
};
		class CrouchRunL: CombatRunL
		{
file="\dbsgr\anim\a6dfbc493.rtm";speed=-0.8166666666666667;























			actions="CrouchRunFActions";
			connectAs="CombatRunL";
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchRunR: CombatRunR
		{
file="\dbsgr\anim\acb034503.rtm";speed=-0.8166666666666667;























			actions="CrouchRunFActions";
			connectAs="CombatRunR";
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchRunLB: CombatRunLB
		{
file="\dbsgr\anim\a950a1245.rtm";speed=-0.7333333333333333;





















			actions="CrouchRunBActions";
			connectAs="CombatRunLB";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchRunRB: CombatRunRB
		{
file="\dbsgr\anim\a7447afb7.rtm";speed=-0.7333333333333333;





















			actions="CrouchRunBActions";
			connectAs="CombatRunRB";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchRunB: CombatRunB
		{
file="\dbsgr\anim\a6797ad5a.rtm";speed=-0.7333333333333333;























			actions="CrouchRunBActions";
			connectAs="CombatRunB";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkF: CombatWalkF
		{
file="\dbsgr\anim\a8a7d5614.rtm";speed=-1.2333333333333334;























			
			connectAs="CombatWalkF";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchWalkFActions";
};
		class CrouchWalkLF: CombatWalkLF
		{
file="\dbsgr\anim\a03a7503d.rtm";speed=-1.2333333333333334;





















			
			connectAs="CombatWalkLF";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchWalkLFActions";
};
		class CrouchWalkRF: CombatWalkRF
		{
file="\dbsgr\anim\a241b81c9.rtm";speed=-1.2333333333333334;





















			
			connectAs="CombatWalkRF";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchWalkRFActions";
};
		class CrouchWalkL: CombatWalkL
		{
file="\dbsgr\anim\a34b2cbbb.rtm";speed=-1.0666666666666667;























			actions="CrouchActions";
			connectAs="CombatWalkL";
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkR: CombatWalkR
		{
file="\dbsgr\anim\a3f8e6847.rtm";speed=-1.0666666666666667;























			actions="CrouchActions";
			connectAs="CombatWalkR";
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkLB: CombatWalkLB
		{
file="\dbsgr\anim\a8c61a280.rtm";speed=-1.3166666666666667;





















			actions="CrouchActions";
			connectAs="CombatWalkLB";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkRB: CombatWalkRB
		{
file="\dbsgr\anim\a325f4bf0.rtm";speed=-1.3166666666666667;





















			actions="CrouchActions";
			connectAs="CombatWalkRB";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkB: CombatWalkB
		{
file="\dbsgr\anim\ab09d445f.rtm";speed=-1.3166666666666667;























			actions="CrouchActions";
			connectAs="CombatWalkB";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchSprintF: CombatSprintF
		{
file="\dbsgr\anim\a3bf21e22.rtm";speed=-0.5666666666666667;























			
			connectAs="CombatSprintF";
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchSprintFActions";
};
		class CrouchSprintLF: CombatSprintLF
		{
file="\dbsgr\anim\aff4ce2ce.rtm";speed=-0.5666666666666667;





















			
			connectAs="CombatSprintLF";
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchSprintLFActions";
};
		class CrouchSprintRF: CombatSprintRF
		{
file="\dbsgr\anim\ac16b53d6.rtm";speed=-0.5666666666666667;





















			
			connectAs="CombatSprintRF";
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchSprintRFActions";
};
		class CrouchTurnR: CombatTurnR
		{
			actions="CrouchActions";
			connectAs="CombatTurnR";
		
file="\dbsgr\anim\gr36_gr19_crouchturnr.rtm";
speed=-0.6;
looped=1;};
		class CrouchTurnL: CombatTurnL
		{
			actions="CrouchActions";
			connectAs="CombatTurnL";
		
file="\dbsgr\anim\gr36_gr19_crouchturnl.rtm";
speed=-0.6;
looped=1;};
		class CrouchToBinocCrouch: Default
		{
			actions="CrouchActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			connectFrom[]={"Crouch",2};
			interpolateTo[]={"CrouchDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_crouch_draw.rtm";
speed=-1.3333333333333335;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocCrouch: Default
		{
			actions="BinocCrouchActions";
			
			
			
			disableWeapons=0;
			showItemInHand=1;
			soundEnabled=0;
			enableBinocular=1;
			connectFrom[]={"CrouchToBinocCrouch",1};
			connectTo[]={"BinocCrouchToCrouch",1};
			interpolateTo[]={"CrouchDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_crouch_ready.rtm";
speed=-2;
looped=1;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocCrouchToCrouch: Default
		{
			actions="CrouchActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			connectTo[]={"Crouch",2};
			interpolateTo[]={"CrouchDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_crouch_holster.rtm";
speed=-1.5;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class CivilBase: Default
		{
			aiming="aimingNo";
			actions="CivilActions";
			duty=-1;
			disableWapons=1;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
			interpolationSpeed=3;
		};
		class Civil: CivilBase
		{
file="\dbsgr\anim\a9a6723ce.rtm";speed=-0.3333333333333333;























			
			
			looped=1;
			soundEnabled=0;
			variantAfter[]={1,3,6};
			variantsAI[]=
			{
				"Civil",
				0.200000,
				"CivilStillV1",
				0.800000
			};
			equivalentTo="Civil";
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
			interpolateFrom[]={"CombatThrowGrenadeEnd",1};
		};
		class CivilStillV1: Civil
		{
			actions="CivilActions";
			file="\dbsgr\anim\fb3600e4e.rtm";
			speed=-10;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CivilWalkF: CivilBase
		{
file="\dbsgr\anim\a9afde0a6.rtm";speed=-0.9833333333333333;























			
			
			looped=1;
			duty=-0.700000;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		};
		class CivilWalkLF: CivilWalkF
		{
			file="\dbsgr\anim\f56d25c78.rtm";
		};
		class CivilWalkRF: CivilWalkF
		{
			file="\dbsgr\anim\f0a9273fa.rtm";
		};
		class CivilWalkL: CivilWalkF
		{
			file="\dbsgr\anim\f268650bb.rtm";
		};
		class CivilWalkR: CivilWalkF
		{
			file="\dbsgr\anim\f59327696.rtm";
		};
		class CivilWalkLB: CivilWalkF
		{
			file="\dbsgr\anim\fa2233c8b.rtm";
		};
		class CivilWalkRB: CivilWalkF
		{
			file="\dbsgr\anim\f1b4575c9.rtm";
		};
		class CivilWalkB: CivilWalkF
		{
			file="\dbsgr\anim\f5dda350a.rtm";
		};
		class CivilRunF: CivilWalkF
		{
file="\dbsgr\anim\af1596dd2.rtm";speed=-0.5666666666666667;























			actions="CivilRunFActions";
			
			
			looped=1;
			duty=-0.500000;
		};
		class CivilRunLF: CivilRunF
		{
			file="\dbsgr\anim\f28306126.rtm";
		};
		class CivilRunRF: CivilRunF
		{
			file="\dbsgr\anim\f466d9f22.rtm";
		};
		class CivilRunL: CivilRunF
		{
			file="\dbsgr\anim\f555e4e0d.rtm";
		};
		class CivilRunR: CivilRunF
		{
			file="\dbsgr\anim\f42344601.rtm";
		};
		class CivilRunB: CivilRunF
		{
			actions="CivilActions";
			file="\dbsgr\anim\f712dad6c.rtm";
		};
		class CivilRunLB: CivilRunB
		{
			file="\dbsgr\anim\f70b8c023.rtm";
		};
		class CivilRunRB: CivilRunB
		{
			file="\dbsgr\anim\fa659133a.rtm";
		};
		class CivilTurnR: CivilBase
		{
			actions="CivilActions";
			file="\dbsgr\anim\faae1a6b5.rtm";
			speed=-1.600000;
			looped=1;
			soundEnabled=0;
			relSpeedMin=0.900000;
			relSpeedMax=1;
			duty=-1;
			interpolationSpeed=5;
		};
		class CivilTurnL: CivilBase
		{
			actions="CivilActions";
			file="\dbsgr\anim\f58175adc.rtm";
			speed=-1.600000;
			looped=1;
			soundEnabled=0;
			relSpeedMin=0.900000;
			relSpeedMax=1;
			duty=-1;
			interpolationSpeed=5;
		};
		class CivilThrowGrenadeStart: Default
		{
			actions="CivilActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class CivilThrowGrenadeEnd: Default
		{
			actions="CivilActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CivilRunThrowGrenadeStart: Default
		{
			actions="CivilRunFActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class CivilRunThrowGrenadeEnd: Default
		{
			actions="CivilRunFActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CivilToCivilLying: Default
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\fa64d0090.rtm";
			speed=-1.500000;
			looped=0;
			onLandEnd=1;
			enableOptics=0;
			soundEnabled=1;
			soundOverride="laydown";
			soundEdge1=0.100000;
			soundEdge2=0.100000;
			interpolateTo[]={"CivilLyingDying",1};
		};
		class CivilLyingToCivil: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\f31aa957a.rtm";
			speed=-2;
			looped=0;
			onLandBeg=1;
			enableOptics=0;
			soundEnabled=1;
			soundOverride="standup";
			soundEdge1=0.010000;
			soundEdge2=0.010000;
			interpolateTo[]={"CivilDying",1,"CivilDyingVer2",1};
		};
		class Lying: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;























			preload=1;
			actions="LyingActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			duty=-1;
			visibleSize=0.250000;
			aimPrecision=0.300000;
			recoilSuffix="fixed";
		


connectFrom[]={};
};
		class LyingNoAim: Lying
		{
			preload=0;
			limitGunMovement=0;
			aiming="aimingLying";
			legs="legsNo";
		};
		class LyingStillV1: Lying
		{
			file="\dbsgr\anim\f2a918e37.rtm";
			speed=-6.200000;
		};
		class LyingTurnL: Lying
		{
			preload=0;
			file="\dbsgr\anim\f1c4c4ac1.rtm";
			speed=-4;
			duty=0;
		};
		class LyingTurnR: Lying
		{
			preload=0;
			file="\dbsgr\anim\f5e50347f.rtm";
			speed=-4;
			duty=0;
		};
		class LyingReloadMagazine: LyingNoAim
		{
file="\dbsgr\anim\a44a30631.rtm";speed=-1.3333333333333333;























			preload=1;
			actions="LyingActions";
			
			
			disableWeapons=1;
			looped=0;
			interpolateTo[]={"LyingDying",1};
		};
		class LyingThrowGrenadeStart: LyingNoAim
		{
			
			limitGunMovement=1;
			
			
			disableWeapons=1;
			duty=0;
			interpolateTo[]={"LyingDying",0.100000};
		






file="\dbsgr\anim\gr18_grenade_prone_start.rtm";
speed=-0.6514286041259766;
looped=0;};
		class LyingThrowGrenadeEnd: LyingNoAim
		{
			
			limitGunMovement=1;
			
			
			disableWeapons=1;
			duty=0;
			interpolateTo[]={"LyingDying",0.100000};
		






file="\dbsgr\anim\gr18_grenade_prone_end.rtm";
speed=-0.5485713958740234;
looped=0;};
		class LyingCrawlF: LyingNoAim
		{
file="\dbsgr\anim\a0eafe661.rtm";speed=-1.3166666666666667;























			preload=1;
			actions="CrawlingActions";
			
			
			duty=0;
			disableWeapons=1;
			enableOptics=0;
			soundEnabled=1;
			soundOverride="crawl";
		};
		class LyingFastCrawlF: LyingCrawlF
		{
			actions="CrawlingActions";
			
			
			disableWeapons=1;
			duty=0.600000;
		
file="\dbsgr\anim\a0eafe661.rtm";

speed=-0.9753086419753085;

looped=1;
};
		class LyingCrawlLF: LyingCrawlF
		{
			preload=0;
			file="\dbsgr\anim\fc96e2050.rtm";
			speed=-1;
		};
		class LyingCrawlRF: LyingCrawlF
		{
			preload=0;
			file="\dbsgr\anim\f8738f863.rtm";
			speed=-1;
		};
		class LyingCrawlL: LyingCrawlF
		{
file="\dbsgr\anim\a0d0cebf9.rtm";speed=-0.9833333333333333;























			preload=0;
			actions="LyingActions";
			
			
		};
		class LyingCrawlR: LyingCrawlL
		{
file="\dbsgr\anim\a6e7acc1e.rtm";speed=-0.9833333333333333;























			preload=0;
			
			
		};
		class LyingCrawlLB: LyingCrawlL
		{
			preload=0;
			file="\dbsgr\anim\ffa4848ab.rtm";
			speed=-1.100000;
		};
		class LyingCrawlRB: LyingCrawlL
		{
			preload=0;
			file="\dbsgr\anim\f11027d5a.rtm";
			speed=-1.100000;
		};
		class LyingCrawlB: LyingCrawlL
		{
file="\dbsgr\anim\aa93150c9.rtm";speed=-1.65;























			preload=0;
			
			
		};
		class LyingDying: DefaultDie
		{
file="\dbsgr\anim\ad2358b99.rtm";speed=-1.65;











			preload=1;
			actions="NoActions";
			
			
			onLandEnd=1;
			looped=0;
			soundEnabled=0;
		};
		class CivilLying: Default
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\faaff0960.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			duty=-1;
			disableWapons=1;
			disableWeaponsLong=1;
			visibleSize=0.250000;
			aimPrecision=0.300000;
			recoilSuffix="fixed";
		};
		class CivilLyingNoAim: CivilLying
		{
			limitGunMovement=0;
			aiming="aimingNo";
			legs="legsNo";
		};
		class CivilLyingStillV1: CivilLying
		{
			file="\dbsgr\anim\f09150bc6.rtm";
			speed=-6.200000;
		};
		class CivilLyingCrawlF: CivilLyingNoAim
		{
			actions="CivilCrawlingActions";
			file="\dbsgr\anim\fbae5921d.rtm";
			speed=-1;
			duty=0;
		};
		class CivilLyingFastCrawlF: CivilLyingCrawlF
		{
			actions="CivilCrawlingActions";
			file="\dbsgr\anim\f1b0ea1a5.rtm";
			speed=-0.800000;
			duty=0.600000;
		};
		class CivilLyingCrawlLF: CivilLyingCrawlF
		{
			file="\dbsgr\anim\fc96e2050.rtm";
			speed=-1;
		};
		class CivilLyingCrawlRF: CivilLyingCrawlF
		{
			file="\dbsgr\anim\f8738f863.rtm";
			speed=-1;
		};
		class CivilLyingCrawlL: CivilLyingCrawlF
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\f70efc73b.rtm";
			speed=-1;
		};
		class CivilLyingCrawlR: CivilLyingCrawlL
		{
			file="\dbsgr\anim\f9474f747.rtm";
			speed=-1;
		};
		class CivilLyingCrawlLB: CivilLyingCrawlL
		{
			file="\dbsgr\anim\ffa4848ab.rtm";
			speed=-1.100000;
		};
		class CivilLyingCrawlRB: CivilLyingCrawlL
		{
			file="\dbsgr\anim\f11027d5a.rtm";
			speed=-1.100000;
		};
		class CivilLyingCrawlB: CivilLyingCrawlL
		{
			file="\dbsgr\anim\f66e16a35.rtm";
			speed=-1.100000;
		};
		class CivilLyingDying: DefaultDie
		{
file="\dbsgr\anim\ad2358b99.rtm";speed=-1.65;











			actions="NoActions";
			
			
			onLandEnd=1;
			looped=0;
			soundEnabled=0;
		};
		class CivilLyingDead: CivilLyingDying
		{
file="\dbsgr\anim\af3ad1616.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class WeaponDying: DefaultDie
		{
file="\dbsgr\anim\ae49eebc4.rtm";speed=-3.316666666666667;











			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			soundEnabled=0;
		};
		class WeaponDyingVer2: WeaponDying
		{
			file="\dbsgr\anim\fa80b7ad2.rtm";
		};
		class WeaponDead: WeaponDying
		{
file="\dbsgr\anim\a864bbfa5.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			
			equivalentTo="WeaponDead";
			
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class WeaponDeadVer2: WeaponDead
		{
			file="\dbsgr\anim\f41da433d.rtm";
		};
		class SitDownDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb95cebea.rtm";
			speed=-0.600000;
			looped=0;
			onLandEnd=1;
			soundEnabled=0;
		};
		class SitDownDead: SitDownDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fff953605.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
		};
		class StandDying: DefaultDie
		{
file="\dbsgr\anim\ab7a24485.rtm";speed=-2.4833333333333334;











			preload=1;
			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			interpolationSpeed=5;
		};
		class StandDead: StandDying
		{
file="\dbsgr\anim\a5ef69eaa.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			
			equivalentTo="StandDead";
			
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class StandDyingVer2: DefaultDie
		{
			preload=1;
			actions="NoActions";
			file="\dbsgr\anim\fc56c9744.rtm";
			speed=-2;
			looped=0;
			onLandEnd=1;
			interpolationSpeed=5;
		};
		class StandDeadVer2: StandDead
		{
			actions="DeadActions";
			file="\dbsgr\anim\f0db5485e.rtm";
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
		};
		class CivilDying: DefaultDie
		{
file="\dbsgr\anim\ab7a24485.rtm";speed=-2.4833333333333334;











			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			interpolateFrom[]={};
			connectTo[]={"CivilDead",1};
		};
		class CivilDead: CivilDying
		{
file="\dbsgr\anim\a5ef69eaa.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			
			
			
			equivalentTo="CivilDead";
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CivilDyingVer2: CivilDying
		{
file="\dbsgr\anim\ae49eebc4.rtm";speed=-3.316666666666667;











			
			connectTo[]={"CivilDeadVer2",1};
		};
		class CivilDeadVer2: CivilDead
		{
file="\dbsgr\anim\a864bbfa5.rtm";speed=10000000000;











			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatDying: DefaultDie
		{
file="\dbsgr\anim\ab7a24485.rtm";speed=-2.4833333333333334;











			preload=1;
			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			connectFrom[]={"Combat",1};
			connectTo[]={"CombatDead",1};
		};
		class CombatDead: CombatDying
		{
file="\dbsgr\anim\a5ef69eaa.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			
			
			equivalentTo="CombatDead";
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatDyingVer2: DefaultDie
		{
file="\dbsgr\anim\ae49eebc4.rtm";speed=-3.316666666666667;











			preload=1;
			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			connectFrom[]={"Combat",1};
			connectTo[]={"CombatDeadVer2",1};
		};
		class CombatDeadVer2: CombatDead
		{
file="\dbsgr\anim\a864bbfa5.rtm";speed=10000000000;











			actions="DeadActions";
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			connectFrom[]={};
			interpolateFrom[]={};
			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatDyingVer3: DefaultDie
		{
file="\dbsgr\anim\afa4127fd.rtm";speed=-2.816666666666667;











			preload=1;
			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			connectFrom[]={"Combat",1};
			connectTo[]={"CombatDeadVer3",1};
		};
		class CombatDeadVer3: CombatDead
		{
file="\dbsgr\anim\af12f64b1.rtm";speed=10000000000;











			actions="DeadActions";
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			connectFrom[]={};
			interpolateFrom[]={};
			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatRunDying: DefaultDie
		{
file="\dbsgr\anim\a73d44aa1.rtm";speed=-2.066666666666667;











			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			interpolateFrom[]={"CombatRunF",1};
			connectTo[]={"CombatRunDead",1};
		};
		class CombatRunDead: CombatRunDying
		{
file="\dbsgr\anim\a0a49257b.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			
			
			
			equivalentTo="CombatRunDead";
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatRunDyingVer2: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\ff44f8c74.rtm";
			speed=-1.600000;
			looped=0;
			onLandEnd=1;
			interpolateFrom[]={"CombatRunF",1};
			connectTo[]={"CombatRunDeadVer2",1};
		};
		class CombatRunDeadVer2: CombatRunDyingVer2
		{
			actions="DeadActions";
			file="\dbsgr\anim\f743f37ea.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			connectTo[]={"DeadState",10};
			equivalentTo="CombatRunDead";
			variantAfter[]={0,0,0};
		};
		class CombatRunBDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\ff61ef0f3.rtm";
			speed=-1.600000;
			looped=0;
			onLandEnd=1;
			interpolateFrom[]={"CombatRunB",1};
			connectTo[]={"CombatRunBDead",1};
		};
		class CombatRunBDead: CombatRunBDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f4a82ee21.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			connectTo[]={"DeadState",10};
			variantsPlayer[]={};
			variantAfter[]={0,0,0};
			equivalentTo="CombatRunBDead";
		};
		class CombatRunBDyingVer2: CombatRunBDying
		{
			file="\dbsgr\anim\f2f0e8e17.rtm";
			connectTo[]={"CombatRunBDeadVer2",1};
		};
		class CombatRunBDeadVer2: CombatRunBDead
		{
			file="\dbsgr\anim\f93e48f14.rtm";
		};
		class CombatRelaxedDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f8cf3f888.rtm";
			speed=-1.600000;
			looped=0;
			onLandEnd=1;
			connectFrom[]={"CombatRelaxed",1};
			connectTo[]={"CombatRelaxedDead",1};
		};
		class CombatRelaxedDead: DefaultDie
		{
			actions="DeadActions";
			file="\dbsgr\anim\f09679ac0.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			connectFrom[]={};
			interpolateFrom[]={};
			connectTo[]={"DeadState",10};
			variantsPlayer[]={};
			variantAfter[]={0,0,0};
		};
		class CombatRelaxedDyingVer2: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f01b41ff1.rtm";
			speed=-1.600000;
			looped=0;
			onLandEnd=1;
			connectFrom[]={"CombatRelaxed",1};
			connectTo[]={"CombatRelaxedDeadVer2",1};
		};
		class CombatRelaxedDeadVer2: DefaultDie
		{
			actions="DeadActions";
			file="\dbsgr\anim\fd927eef7.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			connectFrom[]={};
			interpolateFrom[]={};
			connectTo[]={"DeadState",10};
			equivalentTo="CombatRelaxedDead";
			variantsPlayer[]={};
			variantAfter[]={0,0,0};
		};
		class LyingDead: LyingDying
		{
file="\dbsgr\anim\af3ad1616.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CargoDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f1e8c7b36.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
		};
		class CargoDead: CargoDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fbc467f0c.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"CargoDying",1};
			connectTo[]={"DeadState",1};
		};
		class CombatToWeapon: Default
		{
			
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		




variantsAI[]={};

variantsPlayer[]={};

looped=0;




speed=-0.9833333333333333;

connectFrom[]={"Combat",1};

file="\dbsgr\anim\gr42_gr18_launcher_crouch_draw.rtm";
actions="WeaponActions";
connectTo[]={"Weapon",1};};
		class LyingToWeapon: Default
		{
			actions="WeaponActions";
			
			
			visibleSize=0.700000;
			
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		
file="\dbsgr\anim\gr42_launcher_draw.rtm";

speed=-1.0166666666666666;

variantsAI[]={};

variantsPlayer[]={};

looped=0;

connectTo[]={"Weapon",0.02};
};
		class WeaponToLying: Default
		{
			actions="WeaponActions";
			
			
			
			visibleSize=0.700000;
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		
file="\dbsgr\anim\gr42_launcher_holster.rtm";

speed=-1.0;

variantsAI[]={};

variantsPlayer[]={};

looped=0;

connectTo[]={"Lying",0.02};
};
		class Weapon: Default
		{
			
			
			
			
			soundEnabled=0;
			enableMissile=1;
			duty=-1;
			visibleSize=0.600000;
			aimPrecision=0.500000;
			recoilSuffix="halffixed";
		




variantsAI[]={};

variantsPlayer[]={};


speed=-0.31666666666666665;


file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;};
		class WeaponWalkF: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_F.rtm";
speed=-0.7599999904632568;
actions="WeaponActions";};
		class WeaponWalkL: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_L.rtm";
speed=-1.0555555820465088;
actions="WeaponActions";};
		class WeaponWalkR: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_R.rtm";
speed=-1.0555555820465088;
actions="WeaponActions";};
		class WeaponWalkB: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_B.rtm";
speed=-0.9288888772328695;
actions="WeaponActions";};
		class WeaponWalkLF: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_LF.rtm";
speed=-0.7600000083475572;
actions="WeaponActions";};
		class WeaponWalkRF: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_RF.rtm";
speed=-0.7600000083475572;
actions="WeaponActions";};
		class WeaponWalkLB: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_LB.rtm";
speed=-0.9288888928474813;
actions="WeaponActions";};
		class WeaponWalkRB: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_RB.rtm";
speed=-0.9288888928474813;
actions="WeaponActions";};
		class WeaponTurnL: Weapon
		{
			
			
			
			duty=-0.500000;
			soundEnabled=0;
		


speed=-0.31666666666666665;

variantsAI[]={};

variantsPlayer[]={};

file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};
		class WeaponTurnR: Weapon
		{
			
			
			
			duty=-0.500000;
			soundEnabled=0;
		


speed=-0.31666666666666665;

variantsAI[]={};

variantsPlayer[]={};

file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};
		class WeaponReloadAT: Weapon
		{
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		








file="\dbsgr\anim\gr42_gr34_launcher_reload.rtm";
speed=-2.1;
looped=0;
actions="WeaponActions";
connectTo[]={"Weapon",1};
variantsAI[]={};
variantsPlayer[]={};};
		class WeaponToCombat: Default
		{
			
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Weapon",2};
			
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		


speed=-1.0;

variantsAI[]={};

variantsPlayer[]={};

looped=0;



file="\dbsgr\anim\gr42_gr18_launcher_crouch_holster.rtm";
actions="CrouchActions";
connectTo[]={"Crouch",1};};
		class HandGunStand: Combat
		{
speed=-0.31666666666666665;























			access=0;
		
actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStand";showHandGun=1;showPrimaryWeapon=0;
interpolateWith[]={"Combat",0.1,"HandGunStand",0.1,"HandGunCrouch",0.1,"HandGunLying",0.1};

file="\dbsgr\anim\gr46_pistol_a945b00e3.rtm";};
		class HandGunCrouch: Crouch
		{
speed=-0.31666666666666665;























			access=0;
		
actions="HandGunCrouchActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunCrouch";showHandGun=1;showPrimaryWeapon=0;
interpolateWith[]={"Crouch",0.1,"HandGunStand",0.1,"HandGunCrouch",0.1,"HandGunLying",0.1};

file="\dbsgr\anim\gr46_pistol_ae352452e.rtm";};
		class HandGunLying: Lying
		{
speed=-0.3333333333333333;























			access=0;
		
actions="HandGunLyingActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunLying";showHandGun=1;showPrimaryWeapon=0;
interpolateWith[]={"Lying",0.1,"HandGunStand",0.1,"HandGunCrouch",0.1,"HandGunLying",0.1};

file="\dbsgr\anim\gr46_pistol_a2ad352e4.rtm";};
		class Driver: Default
		{
			actions="CargoActions";
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-25;
			looped=1;
			soundEnabled=0;
		};
		class Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-1;
			looped=1;
		};
		class Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-10;
			looped=1;
		};
		class Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-10;
			looped=1;
		};
		class Cargo: Driver
		{
			actions="CargoActions";
			file="\dbsgr\anim\gr43_vehicle_f51ec9873.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"CargoVer1",
				0.600000,
				"CargoVer2",
				0.100000,
				"CargoVer3",
				0.100000,
				"CargoVer4",
				0.100000,
				"CargoVer5",
				0.100000,
				"Cargo"
			};
			equivalentTo="Cargo";
			interpolationSpeed=1;
		};
		class CargoVer1: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_fb7873233.rtm";
			speed=-3.800000;
			looped=1;
		};
		class CargoVer2: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_f5c877ae6.rtm";
			speed=-3.800000;
			looped=1;
		};
		class CargoVer3: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_fd1e5f29d.rtm";
			speed=-4.200000;
			looped=1;
		};
		class CargoVer4: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_fdb546a66.rtm";
			speed=-3.200000;
			looped=1;
		};
		class CargoVer5: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-9.600000;
			looped=1;
		};
		class M113Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ff2d789c5.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M113GunnerV1",
				0.700000,
				"M113Gunner"
			};
			interpolateWith[]={"M113GunnerV1",0.500000};
			equivalentTo="M113Gunner";
			interpolationSpeed=1;
			connectTo[]={"M113GunnerDying",1};
		};
		class M113GunnerV1: M113Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_fbe4558cc.rtm";
			speed=-4;
			looped=1;
		};
		class M113GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fd510b077.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M113Gunner",1};
		};
		class M113GunnerDead: M113GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa15ba504.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M113GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class M113Driver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ffc95b718.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M113DriverV1",
				0.700000,
				"M113Driver"
			};
			interpolateWith[]={"M113DriverV1",0.500000};
			equivalentTo="M113Driver";
			interpolationSpeed=1;
		};
		class M113DriverV1: M113Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fffcb9c7e.rtm";
			speed=-4;
			looped=1;
		};
		class M113DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f9cdc2bb5.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M113DriverOutV1",
				0.700000,
				"M113DriverOut"
			};
			interpolateWith[]={"M113DriverOutV1",0.500000};
			equivalentTo="M113DriverOut";
			interpolationSpeed=1;
			connectTo[]={"M113DriverOutDying",1};
		};
		class M113DriverOutV1: M113DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_f08773731.rtm";
			speed=-4;
			looped=1;
		};
		class M113DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f32ca9d28.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M113DriverOut",1};
		};
		class M113DriverOutDead: M113DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fd920a580.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M113DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class M113Medic: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f4d38942a.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M113MedicV1",
				0.700000,
				"M113Medic"
			};
			interpolateWith[]={"M113MedicV1",0.500000};
			equivalentTo="M113Medic";
			interpolationSpeed=1;
		};
		class M113MedicV1: M113Medic
		{
			file="\dbsgr\anim\gr43_vehicle_f76af0910.rtm";
			speed=-4;
			looped=1;
		};
		class Nemocnej: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ff4fa0d4d.rtm";
			speed=10000000000.000000;
			looped=1;
		};
		class M60Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f12e92b55.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60GunnerV1",
				0.700000,
				"M60Gunner"
			};
			interpolateWith[]={"M60GunnerV1",0.500000};
			equivalentTo="M60Gunner";
			interpolationSpeed=1;
		};
		class M60GunnerV1: M60Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f15a86824.rtm";
			speed=-4;
			looped=1;
		};
		class M60Driver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_faf965a61.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60DriverV1",
				0.700000,
				"M60Driver"
			};
			interpolateWith[]={"M60DriverV1",0.500000};
			equivalentTo="M60Driver";
			interpolationSpeed=1;
		};
		class M60DriverV1: M60Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f298f857b.rtm";
			speed=-4;
			looped=1;
		};
		class M60Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f5b0953bb.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60CommanderV1",
				0.700000,
				"M60Commander"
			};
			interpolateWith[]={"M60CommanderV1",0.500000};
			equivalentTo="M60Commander";
			interpolationSpeed=1;
		};
		class M60CommanderV1: M60Commander
		{
			file="\dbsgr\anim\gr43_vehicle_fdcd520bf.rtm";
			speed=-4;
			looped=1;
		};
		class M60DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_feead0e2c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60DriverOutV1",
				0.700000,
				"M60DriverOut"
			};
			interpolateWith[]={"M60DriverOutV1",0.500000};
			equivalentTo="M60DriverOut";
			interpolationSpeed=1;
			connectTo[]={"M60DriverOutDying",1};
		};
		class M60DriverOutV1: M60DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_feb2d24e0.rtm";
			speed=-4;
			looped=1;
		};
		class M60DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f884b53b2.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M60DriverOut",1};
		};
		class M60DriverOutDead: M60DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fbb31b8e8.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M60DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class M60CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f462a2b4b.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60CommanderOutV1",
				0.700000,
				"M60CommanderOut"
			};
			interpolateWith[]={"M60CommanderOutV1",0.500000};
			equivalentTo="M60CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"M60CommanderOutDying",1};
		};
		class M60CommanderOutV1: M60CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_fd5465134.rtm";
			speed=-4;
			looped=1;
		};
		class M60CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f3bdbd8b8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M60CommanderOut",1};
		};
		class M60CommanderOutDead: M60CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f16385486.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M60CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class M1A1Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f7b720e4e.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M1A1CommanderV1",
				0.700000,
				"M1A1Commander"
			};
			interpolateWith[]={"M1A1CommanderV1",0.500000};
			equivalentTo="M1A1Commander";
			interpolationSpeed=1;
		};
		class M1A1CommanderV1: M1A1Commander
		{
			file="\dbsgr\anim\gr43_vehicle_f83f48c88.rtm";
			speed=-4;
			looped=1;
		};
		class M1A1Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fe588ede3.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M1A1GunnerV1",
				0.700000,
				"M1A1Gunner"
			};
			interpolateWith[]={"M1A1GunnerV1",0.500000};
			equivalentTo="M1A1Gunner";
			interpolationSpeed=1;
		};
		class M1A1GunnerV1: M1A1Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f37a0f7ea.rtm";
			speed=-4;
			looped=1;
		};
		class M1A1Driver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f015f10af.rtm";
			speed=10000000000.000000;
			looped=1;
		};
		class M1A1DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_feccbf92d.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M1A1DriverOutV1",
				0.700000,
				"M1A1DriverOut"
			};
			interpolateWith[]={"M1A1DriverOutV1",0.500000};
			equivalentTo="M1A1DriverOut";
			interpolationSpeed=1;
			connectTo[]={"M1A1DriverOutDying",1};
		};
		class M1A1DriverOutV1: M1A1DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_f9b524cb7.rtm";
			speed=-4;
			looped=1;
		};
		class M1A1DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fbee55cce.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M1A1DriverOut",1};
		};
		class M1A1DriverOutDead: M1A1DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f6ab99118.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M1A1DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class M1A1CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f893cf090.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M1A1CommanderOutV1",
				0.700000,
				"M1A1CommanderOut"
			};
			interpolateWith[]={"M1A1CommanderOutV1",0.500000};
			equivalentTo="M1A1CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"M1A1CommanderOutDying",1};
		};
		class M1A1CommanderOutV1: M1A1CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_f42034934.rtm";
			speed=-4;
			looped=1;
		};
		class M1A1CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f059090e8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M1A1CommanderOut",1};
		};
		class M1A1CommanderOutDead: M1A1CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa200804f.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M1A1CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class BMPGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f6978b010.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPGunnerV1",
				0.700000,
				"BMPGunner"
			};
			interpolateWith[]={"BMPGunnerV1",0.500000};
			equivalentTo="BMPGunner";
			interpolationSpeed=1;
		};
		class BMPGunnerV1: BMPGunner
		{
			file="\dbsgr\anim\gr43_vehicle_f52ff2637.rtm";
			speed=-4;
			looped=1;
		};
		class BMPDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f6b4c2003.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPDriverV1",
				0.700000,
				"BMPDriver"
			};
			interpolateWith[]={"BMPDriverV1",0.500000};
			equivalentTo="BMPDriver";
			interpolationSpeed=1;
		};
		class BMPDriverV1: BMPDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fc1af4158.rtm";
			speed=-4;
			looped=1;
		};
		class BMPCommander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fa7ee341c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPCommanderV1",
				0.700000,
				"BMPCommander"
			};
			interpolateWith[]={"BMPCommanderV1",0.500000};
			equivalentTo="BMPCommander";
			interpolationSpeed=1;
		};
		class BMPCommanderV1: BMPCommander
		{
			file="\dbsgr\anim\gr43_vehicle_f1805d72c.rtm";
			speed=-4;
			looped=1;
		};
		class BMPGunnerOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd3864512.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPGunnerOutV1",
				0.700000,
				"BMPGunnerOut"
			};
			interpolateWith[]={"BMPGunnerOutV1",0.500000};
			equivalentTo="BMPGunnerOut";
			interpolationSpeed=1;
			connectTo[]={"BMPGunnerOutDying",1};
		};
		class BMPGunnerOutV1: BMPGunnerOut
		{
			file="\dbsgr\anim\gr43_vehicle_f478714ae.rtm";
			speed=-4;
			looped=1;
		};
		class BMPGunnerOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fda7bdd9f.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BMPGunnerOut",1};
		};
		class BMPGunnerOutDead: BMPGunnerOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ffb8aaa63.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BMPGunnerOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class BMPDriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f4ea49e03.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPDriverOutV1",
				0.700000,
				"BMPDriverOut"
			};
			interpolateWith[]={"BMPDriverOutV1",0.500000};
			equivalentTo="BMPDriverOut";
			interpolationSpeed=1;
			connectTo[]={"BMPDriverOutDying",1};
		};
		class BMPDriverOutV1: BMPDriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_fbb840560.rtm";
			speed=-4;
			looped=1;
		};
		class BMPDriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fe2a87261.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BMPDriverOut",1};
		};
		class BMPDriverOutDead: BMPDriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff12cd598.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BMPDriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class BMPCommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f803cf5c6.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPCommanderOutV1",
				0.700000,
				"BMPCommanderOut"
			};
			interpolateWith[]={"BMPCommanderOutV1",0.500000};
			equivalentTo="BMPCommanderOut";
			interpolationSpeed=1;
			connectTo[]={"BMPCommanderOutDying",1};
		};
		class BMPCommanderOutV1: BMPCommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_fb13774c0.rtm";
			speed=-4;
			looped=1;
		};
		class BMPCommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fcd49b123.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BMPCommanderOut",1};
		};
		class BMPCommanderOutDead: BMPCommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f2d9deee3.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BMPCommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T72Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f38c93cec.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72GunnerV1",
				0.700000,
				"T72Gunner"
			};
			interpolateWith[]={"T72GunnerV1",0.500000};
			equivalentTo="T72Gunner";
			interpolationSpeed=1;
		};
		class T72GunnerV1: T72Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f4b0b8ea1.rtm";
			speed=-4;
			looped=1;
		};
		class T72Driver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd2ca710a.rtm";
			speed=10000000000.000000;
			looped=1;
		};
		class T72Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ff44f1525.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72CommanderV1",
				0.700000,
				"T72Commander"
			};
			interpolateWith[]={"T72CommanderV1",0.500000};
			equivalentTo="T72Commander";
			interpolationSpeed=1;
		};
		class T72CommanderV1: T72Commander
		{
			file="\dbsgr\anim\gr43_vehicle_f7660e489.rtm";
			speed=-4;
			looped=1;
		};
		class T72DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb9447431.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72DriverOutV1",
				0.700000,
				"T72DriverOut"
			};
			interpolateWith[]={"T72DriverOutV1",0.500000};
			equivalentTo="T72DriverOut";
			interpolationSpeed=1;
			connectTo[]={"T72DriverOutDying",1};
		};
		class T72DriverOutV1: T72DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_fde9afc4e.rtm";
			speed=-4;
			looped=1;
		};
		class T72DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f7c8fd13e.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T72DriverOut",1};
		};
		class T72DriverOutDead: T72DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ffd3f1e7c.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T72DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T72GunnerOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f056bb078.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72GunnerOutV1",
				0.700000,
				"T72GunnerOut"
			};
			interpolateWith[]={"T72GunnerOutV1",0.500000};
			equivalentTo="T72GunnerOut";
			interpolationSpeed=1;
			connectTo[]={"T72GunnerOutDying",1};
		};
		class T72GunnerOutV1: T72GunnerOut
		{
			file="\dbsgr\anim\gr43_vehicle_fbe2cb127.rtm";
			speed=-4;
			looped=1;
		};
		class T72GunnerOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fabbf6fac.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T72GunnerOut",1};
		};
		class T72GunnerOutDead: T72GunnerOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fc7afc29a.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T72GunnerOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T72CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f8a3024de.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72CommanderOutV1",
				0.700000,
				"T72CommanderOut"
			};
			interpolateWith[]={"T72CommanderOutV1",0.500000};
			equivalentTo="T72CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"T72CommanderOutDying",1};
		};
		class T72CommanderOutV1: T72CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_f8ca8b487.rtm";
			speed=-4;
			looped=1;
		};
		class T72CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fa84ed7f5.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T72CommanderOut",1};
		};
		class T72CommanderOutDead: T72CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff41a6229.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T72CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T80GunnerOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f45a7b8c1.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T80GunnerOutV1",
				0.700000,
				"T80GunnerOut"
			};
			interpolateWith[]={"T80GunnerOutV1",0.500000};
			equivalentTo="T80GunnerOut";
			interpolationSpeed=1;
			connectTo[]={"T80GunnerOutDying",1};
		};
		class T80GunnerOutV1: T80GunnerOut
		{
			file="\dbsgr\anim\gr43_vehicle_fe5532790.rtm";
			speed=-4;
			looped=1;
		};
		class T80GunnerOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f9d5ebbf5.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T80GunnerOut",1};
		};
		class T80GunnerOutDead: T80GunnerOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f2cb3f296.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T80GunnerOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T80CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f95142182.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T80CommanderOutV1",
				0.700000,
				"T80CommanderOut"
			};
			interpolateWith[]={"T80CommanderOutV1",0.500000};
			equivalentTo="T80CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"T80CommanderOutDying",1};
		};
		class T80CommanderOutV1: T80CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_f60198f4b.rtm";
			speed=-4;
			looped=1;
		};
		class T80CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f178226db.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T80CommanderOut",1};
		};
		class T80CommanderOutDead: T80CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f76b92dbb.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T80CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T55Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fe9d32f24.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T55GunnerV1",
				0.700000,
				"T55Gunner"
			};
			interpolateWith[]={"T55GunnerV1",0.500000};
			equivalentTo="T55Gunner";
			interpolationSpeed=1;
		};
		class T55GunnerV1: T55Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_fd8007aef.rtm";
			speed=-4;
			looped=1;
		};
		class T55Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb700617a.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T55CommanderV1",
				0.700000,
				"T55Commander"
			};
			interpolateWith[]={"T55CommanderV1",0.500000};
			equivalentTo="T55Commander";
			interpolationSpeed=1;
		};
		class T55CommanderV1: T55Commander
		{
			file="\dbsgr\anim\gr43_vehicle_fdcd4d93b.rtm";
			speed=-4;
			looped=1;
		};
		class T55DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f8bde1dde.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T55DriverOutV1",
				0.700000,
				"T55DriverOut"
			};
			interpolateWith[]={"T55DriverOutV1",0.500000};
			equivalentTo="T55DriverOut";
			interpolationSpeed=1;
			connectTo[]={"T55DriverOutDying",1};
		};
		class T55DriverOutV1: T55DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_f9e1045b6.rtm";
			speed=-4;
			looped=1;
		};
		class T55DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f455ad595.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T55DriverOut",1};
		};
		class T55DriverOutDead: T55DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb1f7411e.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T55DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T55CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3c554e9f.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T55CommanderOutV1",
				0.700000,
				"T55CommanderOut"
			};
			interpolateWith[]={"T55CommanderOutV1",0.500000};
			equivalentTo="T55CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"T55CommanderOutDying",1};
		};
		class T55CommanderOutV1: T55CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_f0967fcaa.rtm";
			speed=-4;
			looped=1;
		};
		class T55CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f9536ed49.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T55CommanderOut",1};
		};
		class T55CommanderOutDead: T55CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f3df03b62.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T55CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class ZSUGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3cfaa1fc.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUGunnerV1",
				0.700000,
				"ZSUGunner"
			};
			interpolateWith[]={"ZSUGunnerV1",0.500000};
			equivalentTo="ZSUGunner";
			interpolationSpeed=1;
		};
		class ZSUGunnerV1: ZSUGunner
		{
			file="\dbsgr\anim\gr43_vehicle_f9283eed0.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f1be52619.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUDriverV1",
				0.700000,
				"ZSUDriver"
			};
			interpolateWith[]={"ZSUDriverV1",0.500000};
			equivalentTo="ZSUDriver";
			interpolationSpeed=1;
			connectTo[]={"ZSUDriverDying",1};
		};
		class ZSUDriverV1: ZSUDriver
		{
			file="\dbsgr\anim\gr43_vehicle_ff402cbd0.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fe6ffd519.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ZSUDriver",1};
		};
		class ZSUDriverDead: ZSUDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff42d9b2b.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ZSUDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class ZSUCommander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd43ea6b9.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUCommanderV1",
				0.700000,
				"ZSUCommander"
			};
			interpolateWith[]={"ZSUCommanderV1",0.500000};
			equivalentTo="ZSUCommander";
			interpolationSpeed=1;
		};
		class ZSUCommanderV1: ZSUCommander
		{
			file="\dbsgr\anim\gr43_vehicle_f1c86b311.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUGunnerOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3463fb8a.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUGunnerOutV1",
				0.700000,
				"ZSUGunnerOut"
			};
			interpolateWith[]={"ZSUGunnerOutV1",0.500000};
			equivalentTo="ZSUGunnerOut";
			interpolationSpeed=1;
			connectTo[]={"ZSUGunnerOutDying",1};
		};
		class ZSUGunnerOutV1: ZSUGunnerOut
		{
			file="\dbsgr\anim\gr43_vehicle_f2cac448b.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUGunnerOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f17909fd8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ZSUGunnerOut",1};
		};
		class ZSUGunnerOutDead: ZSUGunnerOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f2a7c871f.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ZSUGunnerOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class ZSUCommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_faf867499.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUCommanderOutV1",
				0.700000,
				"ZSUCommanderOut"
			};
			interpolateWith[]={"ZSUCommanderOutV1",0.500000};
			equivalentTo="ZSUCommanderOut";
			interpolationSpeed=1;
			connectTo[]={"ZSUCommanderOutDying",1};
		};
		class ZSUCommanderOutV1: ZSUCommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_fc7f50904.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUCommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fc994a1ce.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ZSUCommanderOut",1};
		};
		class ZSUCommanderOutDead: ZSUCommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ffa5c3dff.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ZSUCommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class UH60Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f39e2d6d8.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UH60PilotV1",
				0.700000,
				"UH60Pilot"
			};
			interpolateWith[]={"UH60PilotV1",0.500000};
			equivalentTo="UH60Pilot";
			interpolationSpeed=1;
			connectTo[]={"UH60PilotDying",1};
		};
		class UH60PilotV1: UH60Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_fa3423c4a.rtm";
			speed=-4;
			looped=1;
		};
		class UH60PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f16cf540a.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UH60Pilot",1};
		};
		class UH60PilotDead: UH60PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb70feb2c.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UH60PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class UH60Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fff40c84a.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UH60GunnerV1",
				0.700000,
				"UH60Gunner"
			};
			interpolateWith[]={"UH60GunnerV1",0.500000};
			equivalentTo="UH60Gunner";
			interpolationSpeed=1;
			connectTo[]={"UH60GunnerDying",1};
		};
		class UH60GunnerV1: UH60Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f717255ce.rtm";
			speed=-4;
			looped=1;
		};
		class UH60GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fa2c3d3e7.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UH60Gunner",1};
		};
		class UH60GunnerDead: UH60GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f09b1297e.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UH60GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class AH1Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ffc88f930.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"AH1PilotV1",
				0.700000,
				"AH1Pilot"
			};
			interpolateWith[]={"AH1PilotV1",0.500000};
			equivalentTo="AH1Pilot";
			interpolationSpeed=1;
			connectTo[]={"AH1PilotDying",1};
		};
		class AH1PilotV1: AH1Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_f88222f24.rtm";
			speed=-4;
			looped=1;
		};
		class AH1PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f9b3ec9f5.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"AH1Pilot",1};
		};
		class AH1PilotDead: AH1PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f0108b5ee.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"AH1PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class AH1Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f2916bf07.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"AH1GunnerV1",
				0.700000,
				"AH1Gunner"
			};
			interpolateWith[]={"AH1GunnerV1",0.500000};
			equivalentTo="AH1Gunner";
			interpolationSpeed=1;
			connectTo[]={"AH1GunnerDying",1};
		};
		class AH1GunnerV1: AH1Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f5e9346bc.rtm";
			speed=-4;
			looped=1;
		};
		class AH1GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\ff8e66e10.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"AH1Gunner",1};
		};
		class AH1GunnerDead: AH1GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f18e8ff18.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"AH1GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class A10Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fcb9df3e9.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"A10PilotV1",
				0.700000,
				"A10Pilot"
			};
			interpolateWith[]={"A10PilotV1",0.500000};
			equivalentTo="A10Pilot";
			interpolationSpeed=1;
			connectTo[]={"A10PilotDying",1};
		};
		class A10PilotV1: A10Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_f7eb5e01f.rtm";
			speed=-4;
			looped=1;
		};
		class A10PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb0d26c86.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"A10Pilot",1};
		};
		class A10PilotDead: A10PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f687055db.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"A10PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class CesnaPilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fca0d2586.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"CesnaPilotV1",
				0.700000,
				"CesnaPilot"
			};
			interpolateWith[]={"CesnaPilotV1",0.500000};
			equivalentTo="CesnaPilot";
			interpolationSpeed=1;
			connectTo[]={"CesnaPilotDying",1};
		};
		class CesnaPilotV1: CesnaPilot
		{
			file="\dbsgr\anim\gr43_vehicle_f7497f0c8.rtm";
			speed=-4;
			looped=1;
		};
		class CesnaPilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f08cd6e05.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"CesnaPilot",1};
		};
		class CesnaPilotDead: CesnaPilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f287caf4b.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"CesnaPilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class CesnaCargo: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f81171f4c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"CesnaCargoV1",
				0.700000,
				"CesnaCargo"
			};
			interpolateWith[]={"CesnaCargoV1",0.500000};
			equivalentTo="CesnaCargo";
			interpolationSpeed=1;
			connectTo[]={"CesnaCargoDying",1};
		};
		class CesnaCargoV1: CesnaCargo
		{
			file="\dbsgr\anim\gr43_vehicle_f0f5d8275.rtm";
			speed=-4;
			looped=1;
		};
		class CesnaCargoDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f45b2d0f0.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"CesnaCargo",1};
		};
		class CesnaCargoDead: CesnaCargoDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f0162a436.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"CesnaCargoDying",1};
			connectTo[]={"DeadState",1};
		};
		class Mi17Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f713d74cc.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"Mi17PilotV1",
				0.700000,
				"Mi17Pilot"
			};
			interpolateWith[]={"Mi17PilotV1",0.500000};
			equivalentTo="Mi17Pilot";
			interpolationSpeed=1;
			connectTo[]={"Mi17PilotDying",1};
		};
		class Mi17PilotV1: Mi17Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_f268fb8c4.rtm";
			speed=-4;
			looped=1;
		};
		class Mi17PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fc0ceba46.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Mi17Pilot",1};
		};
		class Mi17PilotDead: Mi17PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff8e27749.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"Mi17PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class Mi24Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f440101a1.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"Mi24PilotV1",
				0.700000,
				"Mi24Pilot"
			};
			interpolateWith[]={"Mi24PilotV1",0.500000};
			equivalentTo="Mi24Pilot";
			interpolationSpeed=1;
			connectTo[]={"Mi24PilotDying",1};
		};
		class Mi24PilotV1: Mi24Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_fb1e15003.rtm";
			speed=-4;
			looped=1;
		};
		class Mi24PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fcfb5c5b9.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Mi24Pilot",1};
		};
		class Mi24PilotDead: Mi24PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f6580679d.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"Mi24PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class Mi24Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f9e2bbecb.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"Mi24GunnerV1",
				0.700000,
				"Mi24Gunner"
			};
			interpolateWith[]={"Mi24GunnerV1",0.500000};
			equivalentTo="Mi24Gunner";
			interpolationSpeed=1;
			connectTo[]={"Mi24GunnerDying",1};
		};
		class Mi24GunnerV1: Mi24Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f8860c1bf.rtm";
			speed=-4;
			looped=1;
		};
		class Mi24GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb0d45be5.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Mi24Gunner",1};
		};
		class Mi24GunnerDead: Mi24GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fd7ec4458.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"Mi24GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class 5TDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f20c4eab7.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"5TDriverV1",
				0.700000,
				"5TDriver"
			};
			interpolateWith[]={"5TDriverV1",0.500000};
			equivalentTo="5TDriver";
			interpolationSpeed=1;
			connectTo[]={"5TDriverDying",1};
		};
		class 5TDriverV1: 5TDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fedd7db2a.rtm";
			speed=-4;
			looped=1;
		};
		class 5TDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f8c976d6d.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"5TDriver",1};
		};
		class 5TDriverDead: 5TDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fdbf4bcd6.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"5TDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class 5TCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fc65bc904.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"5TCoDriverV1",
				0.700000,
				"5TCoDriver"
			};
			interpolateWith[]={"5TCoDriverV1",0.500000};
			equivalentTo="5TCoDriver";
			interpolationSpeed=1;
			connectTo[]={"5TCoDriverDying",1};
		};
		class 5TCoDriverV1: 5TCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f45825838.rtm";
			speed=-4;
			looped=1;
		};
		class 5TCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fa4065a39.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"5TCoDriver",1};
		};
		class 5TCoDriverDead: 5TCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb3199c9a.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"5TCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class UralDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f1b610cf9.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UralDriverV1",
				0.700000,
				"UralDriver"
			};
			interpolateWith[]={"UralDriverV1",0.500000};
			equivalentTo="UralDriver";
			interpolationSpeed=1;
			connectTo[]={"UralDriverDying",1};
		};
		class UralDriverV1: UralDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f5fca9cf6.rtm";
			speed=-4;
			looped=1;
		};
		class UralDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fd563e602.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UralDriver",1};
		};
		class UralDriverDead: UralDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f1219832f.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UralDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class UralCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f64e1c64d.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UralCoDriverV1",
				0.700000,
				"UralCoDriver"
			};
			interpolateWith[]={"UralCoDriverV1",0.500000};
			equivalentTo="UralCoDriver";
			interpolationSpeed=1;
			connectTo[]={"UralCoDriverDying",1};
		};
		class UralCoDriverV1: UralCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fe446597d.rtm";
			speed=-4;
			looped=1;
		};
		class UralCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fbc1703ab.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UralCoDriver",1};
		};
		class UralCoDriverDead: UralCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f93639190.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UralCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class V3SDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ffef01901.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"V3SDriverV1",
				0.700000,
				"V3SDriver"
			};
			interpolateWith[]={"V3SDriverV1",0.500000};
			equivalentTo="V3SDriver";
			interpolationSpeed=1;
			connectTo[]={"V3SDriverDying",1};
		};
		class V3SDriverV1: V3SDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f1686aae4.rtm";
			speed=-4;
			looped=1;
		};
		class V3SDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f0981d971.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"V3SDriver",1};
		};
		class V3SDriverDead: V3SDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa73d1f66.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"V3SDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class V3SCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fa4896b19.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"V3SCoDriverV1",
				0.700000,
				"V3SCoDriver"
			};
			interpolateWith[]={"V3SCoDriverV1",0.500000};
			equivalentTo="V3SCoDriver";
			interpolationSpeed=1;
			connectTo[]={"V3SCoDriverDying",1};
		};
		class V3SCoDriverV1: V3SCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f3c5e3569.rtm";
			speed=-4;
			looped=1;
		};
		class V3SCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f5e2ac878.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"V3SCoDriver",1};
		};
		class V3SCoDriverDead: V3SCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff19f922f.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"V3SCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class JeepDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f4b956153.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"JeepDriverV1",
				0.700000,
				"JeepDriver"
			};
			interpolateWith[]={"JeepDriverV1",0.500000};
			equivalentTo="JeepDriver";
			interpolationSpeed=1;
			connectTo[]={"JeepDriverDying",1};
		};
		class JeepDriverV1: JeepDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f5221273f.rtm";
			speed=-4;
			looped=1;
		};
		class JeepDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f48bea7c1.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"JeepDriver",1};
		};
		class JeepDriverDead: JeepDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f67a9b5d4.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"JeepDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class JeepGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f244f5bbf.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"JeepGunnerV1",
				0.700000,
				"JeepGunner"
			};
			interpolateWith[]={"JeepGunnerV1",0.500000};
			equivalentTo="JeepGunner";
			interpolationSpeed=1;
			connectTo[]={"JeepGunnerDying",1};
		};
		class JeepGunnerV1: JeepGunner
		{
			file="\dbsgr\anim\gr43_vehicle_ffb7f8c76.rtm";
			speed=-4;
			looped=1;
		};
		class JeepGunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fc3b00df8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"JeepGunner",1};
		};
		class JeepGunnerDead: JeepGunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f6bac2fb5.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"JeepGunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class JeepCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb3854b54.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"JeepCoDriverV1",
				0.700000,
				"JeepCoDriver"
			};
			interpolateWith[]={"JeepCoDriverV1",0.500000};
			equivalentTo="JeepCoDriver";
			interpolationSpeed=1;
			connectTo[]={"JeepCoDriverDying",1};
		};
		class JeepCoDriverV1: JeepCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fcd499165.rtm";
			speed=-4;
			looped=1;
		};
		class JeepCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f68eef018.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"JeepCoDriver",1};
		};
		class JeepCoDriverDead: JeepCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fee309c27.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"JeepCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class JeepCoDriverBack: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb5604d6c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"JeepCoDriverBackV1",
				0.700000,
				"JeepCoDriverBack"
			};
			interpolateWith[]={"JeepCoDriverBackV1",0.500000};
			equivalentTo="JeepCoDriverBack";
			interpolationSpeed=1;
			connectTo[]={"JeepCoDriverBackDying",1};
		};
		class JeepCoDriverBackV1: JeepCoDriverBack
		{
			file="\dbsgr\anim\gr43_vehicle_fe031caf4.rtm";
			speed=-4;
			looped=1;
		};
		class JeepCoDriverBackDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f5115376e.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"JeepCoDriverBack",1};
		};
		class JeepCoDriverBackDead: JeepCoDriverBackDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f8379c2b0.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"JeepCoDriverBackDying",1};
			connectTo[]={"DeadState",1};
		};
		class UazDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fc2a1c3e8.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UazDriverV1",
				0.700000,
				"UazDriver"
			};
			interpolateWith[]={"UazDriverV1",0.500000};
			equivalentTo="UazDriver";
			interpolationSpeed=1;
			connectTo[]={"UazDriverDying",1};
		};
		class UazDriverV1: UazDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f220f7f0d.rtm";
			speed=-4;
			looped=1;
		};
		class UazDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f6c5189e8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UazDriver",1};
		};
		class UazDriverDead: UazDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f7cb84aa1.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UazDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class UazCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ffebcae30.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UazCoDriverV1",
				0.700000,
				"UazCoDriver"
			};
			interpolateWith[]={"UazCoDriverV1",0.500000};
			equivalentTo="UazCoDriver";
			interpolationSpeed=1;
			connectTo[]={"UazCoDriverDying",1};
		};
		class UazCoDriverV1: UazCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f0d95088e.rtm";
			speed=-4;
			looped=1;
		};
		class UazCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fd28f8e81.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UazCoDriver",1};
		};
		class UazCoDriverDead: UazCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f6333dd43.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UazCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class SkodaDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fc4ff25c8.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"SkodaDriverV1",
				0.700000,
				"SkodaDriver"
			};
			interpolateWith[]={"SkodaDriverV1",0.500000};
			equivalentTo="SkodaDriver";
			interpolationSpeed=1;
			connectTo[]={"SkodaDriverDying",1};
		};
		class SkodaDriverV1: SkodaDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fbdd3830a.rtm";
			speed=-4;
			looped=1;
		};
		class SkodaDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f4723330c.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"SkodaDriver",1};
		};
		class SkodaDriverDead: SkodaDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f98b6ba00.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"SkodaDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class SkodaCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f198ac4cb.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"SkodaCoDriverV1",
				0.700000,
				"SkodaCoDriver"
			};
			interpolateWith[]={"SkodaCoDriverV1",0.500000};
			equivalentTo="SkodaCoDriver";
			interpolationSpeed=1;
			connectTo[]={"SkodaCoDriverDying",1};
		};
		class SkodaCoDriverV1: SkodaCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f9e3f2c01.rtm";
			speed=-4;
			looped=1;
		};
		class SkodaCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f0f4f78b2.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"SkodaCoDriver",1};
		};
		class SkodaCoDriverDead: SkodaCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f5a490f13.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"SkodaCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class SkodaCoDriverBack: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f1cd341c7.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"SkodaCoDriverBackV1",
				0.700000,
				"SkodaCoDriverBack"
			};
			interpolateWith[]={"SkodaCoDriverBackV1",0.500000};
			equivalentTo="SkodaCoDriverBack";
			interpolationSpeed=1;
			connectTo[]={"SkodaCoDriverBackDying",1};
		};
		class SkodaCoDriverBackV1: SkodaCoDriverBack
		{
			file="\dbsgr\anim\gr43_vehicle_f1e5be0a5.rtm";
			speed=-4;
			looped=1;
		};
		class SkodaCoDriverBackDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f50383518.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"SkodaCoDriverBack",1};
		};
		class SkodaCoDriverBackDead: SkodaCoDriverBackDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f7647548a.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"SkodaCoDriverBackDying",1};
			connectTo[]={"DeadState",1};
		};
		class PBRDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f27d07ad1.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"PBRDriverV1",
				0.700000,
				"PBRDriver"
			};
			interpolateWith[]={"PBRDriverV1",0.500000};
			equivalentTo="PBRDriver";
			interpolationSpeed=1;
			connectTo[]={"PBRDriverDying",1};
		};
		class PBRDriverV1: PBRDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f97cf46f1.rtm";
			speed=-4;
			looped=1;
		};
		class PBRDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb7080cbe.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"PBRDriver",1};
		};
		class PBRDriverDead: PBRDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f1d3af6b4.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"PBRDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class PBRGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f104e6778.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"PBRGunnerV1",
				0.700000,
				"PBRGunner"
			};
			interpolateWith[]={"PBRGunnerV1",0.500000};
			equivalentTo="PBRGunner";
			interpolationSpeed=1;
			connectTo[]={"PBRGunnerDying",1};
		};
		class PBRGunnerV1: PBRGunner
		{
			file="\dbsgr\anim\gr43_vehicle_f2ea66a1e.rtm";
			speed=-4;
			looped=1;
		};
		class PBRGunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb8da7d2a.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"PBRGunner",1};
		};
		class PBRGunnerDead: PBRGunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb3941b6c.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"PBRGunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class M2Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd11e159d.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M2GunnerV1",
				0.700000,
				"M2Gunner"
			};
			interpolateWith[]={"M2GunnerV1",0.500000};
			equivalentTo="M2Gunner";
			interpolationSpeed=1;
			connectTo[]={"M2GunnerDying",1};
		};
		class M2GunnerV1: M2Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f289e1e7c.rtm";
			speed=-4;
			looped=1;
		};
		class M2GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fc9f736e1.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M2Gunner",1};
		};
		class M2GunnerDead: M2GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f5547d478.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M2GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class HRLGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd380da38.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"HRLGunnerV1",
				0.700000,
				"HRLGunner"
			};
			interpolateWith[]={"HRLGunnerV1",0.500000};
			equivalentTo="HRLGunner";
			interpolationSpeed=1;
			connectTo[]={"HRLGunnerDying",1};
		};
		class HRLGunnerV1: HRLGunner
		{
			file="\dbsgr\anim\gr43_vehicle_fedc12f22.rtm";
			speed=-4;
			looped=1;
		};
		class HRLGunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb9172ef4.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"HRLGunner",1};
		};
		class HRLGunnerDead: HRLGunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa175e560.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"HRLGunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class ScudDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f8916766d.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ScudDriverV1",
				0.700000,
				"ScudDriver"
			};
			interpolateWith[]={"ScudDriverV1",0.500000};
			equivalentTo="ScudDriver";
			interpolationSpeed=1;
			connectTo[]={"ScudDriverDying",1};
		};
		class ScudDriverV1: ScudDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f5dac717f.rtm";
			speed=-4;
			looped=1;
		};
		class ScudDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f463c5c0f.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ScudDriver",1};
		};
		class ScudDriverDead: ScudDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa6c147be.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ScudDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class ScudCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fe07c601c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ScudCoDriverV1",
				0.700000,
				"ScudCoDriver"
			};
			interpolateWith[]={"ScudCoDriverV1",0.500000};
			equivalentTo="ScudCoDriver";
			interpolationSpeed=1;
			connectTo[]={"ScudCoDriverDying",1};
		};
		class ScudCoDriverV1: ScudCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f3968a645.rtm";
			speed=-4;
			looped=1;
		};
		class ScudCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f4f015cf0.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ScudCoDriver",1};
		};
		class ScudCoDriverDead: ScudCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fcaeedc1b.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ScudCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class TractorDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3b3a0134.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"TractorDriverV1",
				0.700000,
				"TractorDriver"
			};
			interpolateWith[]={"TractorDriverV1",0.500000};
			equivalentTo="TractorDriver";
			interpolationSpeed=1;
			connectTo[]={"TractorDriverDying",1};
		};
		class TractorDriverV1: TractorDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f543e969c.rtm";
			speed=-4;
			looped=1;
		};
		class TractorDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f01ef4205.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"TractorDriver",1};
		};
		class TractorDriverDead: TractorDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb88ab1b1.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"TractorDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class Para: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb5a88666.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ParaV1",
				0.700000,
				"Para"
			};
			interpolateWith[]={"ParaV1",0.500000};
			equivalentTo="Para";
			interpolationSpeed=1;
			connectTo[]={"ParaDying",1};
		};
		class ParaV1: Para
		{
			file="\dbsgr\anim\gr43_vehicle_f174eb3ea.rtm";
			speed=-4;
			looped=1;
		};
		class ParaDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\ff8865052.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Para",1};
		};
		class ParaDead: ParaDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f62b49abd.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ParaDying",1};
			connectTo[]={"DeadState",1};
		};
		class StandTurnR: StandBase
		{
			actions="StandActions";
			
			
			
			soundEnabled=0;
			relSpeedMin=0.500000;
			relSpeedMax=1;
			duty=-1;
			interpolationSpeed=5;
		
file="\dbsgr\anim\gr20_standturnr.rtm";
speed=-0.6;
looped=1;};
		class StandTurnL: StandBase
		{
			actions="StandActions";
			
			
			
			soundEnabled=0;
			relSpeedMin=0.500000;
			relSpeedMax=1;
			duty=-1;
			interpolationSpeed=5;
		
file="\dbsgr\anim\gr20_standturnl.rtm";
speed=-0.6;
looped=1;};
		class StandStrokeFist: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f9e0d7631.rtm";
			speed=-0.970000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
			connectFrom[]={"Stand",1};
			connectTo[]={"StandStrokeFistEnd",1};
		};
		class StandStrokeFistEnd: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f774d3fdd.rtm";
			speed=10000000000.000000;
			looped=1;
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
			connectTo[]={"Stand",1};
		};
		class OnChair: StandBase
		{
			actions="NoActions";
			file="\dbsgr\anim\fd078f194.rtm";
			speed=10000000000.000000;
			looped=1;
			soundEnabled=0;
			duty=-1;
			interpolationSpeed=2;
		};
		class EffectStand: StandBase
		{
			actions="StandStandActions";
			file="\dbsgr\anim\f817972db.rtm";
			speed=-8.800000;
			looped=1;
			soundEnabled=0;
			duty=-1;
			interpolationSpeed=2;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class EffectStandStill: StandBase
		{
			actions="StandStillActions";
			file="\dbsgr\anim\f774d3fdd.rtm";
			speed=10000000000.000000;
			looped=1;
			soundEnabled=0;
			equivalentTo="EffectStandStill";
			interpolationSpeed=1;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class EffectStandTalk: StandBase
		{
			actions="StandTalkActions";
			file="\dbsgr\anim\f6b099828.rtm";
			speed=-14;
			looped=1;
			soundEnabled=0;
			duty=-1;
			interpolationSpeed=2;
		};
		class EffectStandSaluteStart: StandBase
		{
			actions="StandSaluteActions";
			file="\dbsgr\anim\fda95b484.rtm";
			speed=-0.500000;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Stand",2};
		};
		class EffectStandSalute: StandBase
		{
			actions="StandSaluteActions";
			file="\dbsgr\anim\f4479307e.rtm";
			speed=10000000000.000000;
			looped=1;
			soundEnabled=0;
			connectFrom[]={"EffectStandSaluteStart",1};
			connectTo[]={"EffectStandSaluteEnd",1};
		};
		class EffectStandSaluteEnd: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\fa9a659da.rtm";
			speed=-0.500000;
			looped=0;
			soundEnabled=0;
			connectTo[]={"Stand",2};
		};
		class EffectStandmove: StandBase
		{
			actions="StandStillActions";
			file="\dbsgr\anim\f9ae1d96d.rtm";
			speed=-8.800000;
			looped=1;
			soundEnabled=0;
			equivalentTo="EffectStandStill";
			interpolationSpeed=1;
		};
		class EffectStandSitDown: StandBase
		{
			actions="SitActions";
			file="\dbsgr\anim\f16025e25.rtm";
			speed=-4;
			looped=1;
			soundEnabled=0;
			duty=-1;
			variantsPlayer[]={};
			equivalentTo="EffectStandSitDown";
			interpolateTo[]={"SitDownDying",0.100000};
		};
		class EffectStandSitDownVer1: EffectStandSitDown
		{
			file="\dbsgr\anim\f16025e25.rtm";
			speed=10000000000.000000;
			looped=1;
			interpolateTo[]={"SitDownDying",0.100000};
		};
		class EffectStandSitDownVer2: EffectStandSitDown
		{
			file="\dbsgr\anim\f77691ee5.rtm";
			speed=-4.600000;
			looped=1;
			interpolateTo[]={"SitDownDying",0.100000};
		};
		class EffectStandSitDownStill: EffectStandSitDown
		{
			file="\dbsgr\anim\f77691ee5.rtm";
			speed=10000000000.000000;
			interpolateTo[]={"SitDownDying",0.100000};
		};
		class StandToSitDown: StandBase
		{
			actions="SitActions";
			file="\dbsgr\anim\fe12da02d.rtm";
			speed=-3.200000;
			looped=0;
			soundEnabled=0;
			duty=-1;
		};
		class SitDownToStand: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\f93ccca93.rtm";
			speed=-2.500000;
			looped=0;
			soundEnabled=0;
			duty=-1;
		};
		class FXBase: StandBase
		{
			actions="StandActions";
			looped=0;
			soundEnabled=0;
			duty=-1;
			interpolationSpeed=1;
		};
		class FXStandToTel: FXBase
		{
			file="\dbsgr\anim\fb57e2879.rtm";
			speed=-0.500000;
			connectTo[]={"FXStandToTelHand",1};
		};
		class FXStandToTelHand: FXBase
		{
			file="\dbsgr\anim\fca900e3e.rtm";
			speed=-4.500000;
			showItemInRightHand=1;
		};
		class FXStandTelLoop: FXBase
		{
			file="\dbsgr\anim\f748fb634.rtm";
			speed=-10;
			looped=1;
			showItemInRightHand=1;
		};
		class FXStandDropTel: FXBase
		{
			file="\dbsgr\anim\f71f7be8a.rtm";
			speed=-4;
			interpolateWith[]={"FXStandToTel",1};
		};
		class FXStandFromTable: FXBase
		{
			file="\dbsgr\anim\f80d4b193.rtm";
			speed=-3;
		};
		class FXStandUnivTable: FXBase
		{
			file="\dbsgr\anim\f71ee5b01.rtm";
			speed=-8;
			looped=1;
		};
		class FXStandToTable: FXBase
		{
			file="\dbsgr\anim\fd0edf5e3.rtm";
			speed=-2.500000;
		};
		class FXStandDangle: FXBase
		{
			file="\dbsgr\anim\f57143844.rtm";
			speed=-4;
		};
		class FXStandToDip: FXBase
		{
			file="\dbsgr\anim\f9f157d76.rtm";
			speed=-2;
			connectFrom[]={"Stand",1};
			connectTo[]={"FXStandDip",1};
		};
		class FXStandDip: FXBase
		{
			file="\dbsgr\anim\f7ff445ca.rtm";
			speed=-1.500000;
			looped=1;
		};
		class FXStandFromDip: FXBase
		{
			file="\dbsgr\anim\fb0f76460.rtm";
			speed=-2;
			connectFrom[]={"FXStandDip",1};
			connectTo[]={"Stand",1};
		};
		class FXStandSur: FXBase
		{
			file="\dbsgr\anim\f65bde2c9.rtm";
			speed=-2;
		};
		class FXStandSurDead: FXBase
		{
			file="\dbsgr\anim\fddae41d6.rtm";
			speed=-2;
		};
		class FXStandSurUniv: FXBase
		{
			file="\dbsgr\anim\f69ce0a42.rtm";
			speed=10000000000.000000;
		};
		class FXStandSurDown: FXBase
		{
			file="\dbsgr\anim\f71eb6244.rtm";
			speed=-3.500000;
		};
		class FXStandRotateTable: FXBase
		{
			file="\dbsgr\anim\fe3e2206b.rtm";
			speed=-2;
		};
		class FXStandShowTable: FXBase
		{
			file="\dbsgr\anim\fae9b4434.rtm";
			speed=-3;
		};
		class FXStandEndTable: FXBase
		{
			file="\dbsgr\anim\f14714a26.rtm";
			speed=-5;
		};
		class FXStandStraight: FXBase
		{
			file="\dbsgr\anim\fcd077a62.rtm";
			speed=-2;
		};
		class FXStandBug: FXBase
		{
			file="\dbsgr\anim\fd9a593b6.rtm";
			speed=-10;
		};
		class FXStandhip: FXBase
		{
			file="\dbsgr\anim\fc6f4d5a0.rtm";
			speed=-5;
		};
		class FXStandAtt: FXBase
		{
			file="\dbsgr\anim\fadddbd62.rtm";
			speed=10000000000.000000;
		};
		class FXStandAttVar1: FXBase
		{
			file="\dbsgr\anim\fc6f4d5a0.rtm";
			speed=-3;
		};
		class FXangel: FXBase
		{
			file="\dbsgr\anim\f2b06340b.rtm";
			speed=10000000000.000000;
		};
		class FXangel2: FXBase
		{
			file="\dbsgr\anim\f3228f6cb.rtm";
			speed=10000000000.000000;
		};
		class LadderStatic: LadderBase
		{
			file="\dbsgr\anim\f60bda10e.rtm";
			looped=1;
			soundEnabled=0;
			speed=10000000000.000000;
			duty=-1;
		};
		class LadderUpStart: LadderUpBase
		{
			file="\dbsgr\anim\fcb0f6f00.rtm";
			looped=0;
			soundEnabled=0;
			speed=-0.750000;
			duty=-0.500000;
			connectFrom[]={"Stand",1};
			connectTo[]={"LadderStatic",1};
		};
		class LadderUpLoop: LadderUpBase
		{
			file="\dbsgr\anim\fe6e86584.rtm";
			looped=1;
			soundEnabled=0;
			speed=-0.600000;
			duty=-0.500000;
			interpolateWith[]={"LadderStatic",1};
		};
		class LadderUpEnd: LadderBase
		{
			actions="StandActions";
			file="\dbsgr\anim\f57b9fd2d.rtm";
			looped=0;
			soundEnabled=0;
			speed=-1;
			duty=-0.500000;
			onLadder=0;
			connectFrom[]={"LadderStatic",1};
			connectTo[]={"Stand",1};
		};
		class LadderDownStart: LadderDownBase
		{
			file="\dbsgr\anim\f0302f865.rtm";
			looped=0;
			soundEnabled=0;
			speed=-1;
			duty=-0.500000;
			connectFrom[]={"Stand",1};
			connectTo[]={"LadderStatic",1};
		};
		class LadderDownLoop: LadderDownBase
		{
			file="\dbsgr\anim\fa4908c6c.rtm";
			looped=1;
			soundEnabled=0;
			speed=-0.600000;
			duty=-0.500000;
			interpolateWith[]={"LadderStatic",1};
		};
		class LadderDownEnd: LadderDownBase
		{
			actions="StandActions";
			file="\dbsgr\anim\f2daba760.rtm";
			looped=0;
			soundEnabled=0;
			speed=-1;
			duty=-0.500000;
			onLadder=0;
			connectFrom[]={"LadderStatic",1};
			connectTo[]={"Stand",0.900000};
		};
		class EffectWeaponPanic: Default
		{
			file="\dbsgr\anim\f6e073b2c.rtm";
			speed=-9;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandEngageAtWill: Default
		{
			file="\dbsgr\anim\ffd30c589.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandFireAtWill: Default
		{
			file="\dbsgr\anim\ffd30c589.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandFormation: Default
		{
			file="\dbsgr\anim\f4129fffa.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandHoldFire: Default
		{
			file="\dbsgr\anim\f4899da18.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandStop: Default
		{
			file="\dbsgr\anim\fb15bf4b7.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandForward: Default
		{
			file="\dbsgr\anim\f4cd4e5ac.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class EffectCombatStand: Default
		{
			file="\dbsgr\anim\fcce39d1d.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class StandGetInCar: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\gr43_vehicle_ff0ffd6af.rtm";
			speed=-2.250000;
			looped=0;
			soundEnabled=0;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandGetInTank: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\gr43_vehicle_f24428ac5.rtm";
			speed=-1.300000;
			looped=0;
			soundEnabled=0;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandGetOutTank: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\gr43_vehicle_fcb1c3f46.rtm";
			speed=-3.065000;
			looped=0;
			soundEnabled=0;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class CombatGetInCar: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\gr43_vehicle_f0d4e7381.rtm";
			speed=-1.230000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatGetInTank: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\gr43_vehicle_fd440c2bf.rtm";
			speed=-2.380000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatGetOutTank: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\gr43_vehicle_f8904b82e.rtm";
			speed=-0.915000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CivilGetInCar: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\gr43_vehicle_fbbbec1a3.rtm";
			speed=-1.230000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilGetInTank: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\gr43_vehicle_f339d1637.rtm";
			speed=-2.380000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilGetOutTank: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\gr43_vehicle_f343a144e.rtm";
			speed=-0.915000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
	class HandGunStandWalkF: CombatWalkF {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandWalkF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a8834a349.rtm";};class HandGunStandRunF: CombatRunF {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandRunF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a7ce4c187.rtm";};class HandGunStandWalkB: CombatWalkB {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandWalkB";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a51acca4d.rtm";};class HandGunStandRunB: CombatRunB {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandRunB";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a0671e4ad.rtm";};class HandGunStandWalkL: CombatWalkL {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandWalkL";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a97147680.rtm";};class HandGunStandWalkR: CombatWalkR {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandWalkR";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a38655b13.rtm";};class HandGunCrouchWalkF: CrouchWalkF {
speed=-0.31666666666666665;























actions="HandGunCrouchActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunCrouchWalkF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a8834a349.rtm";};class HandGunCrouchRunF: CrouchRunF {
speed=-0.31666666666666665;























actions="HandGunCrouchActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunCrouchRunF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a7ce4c187.rtm";};class HandGunLyingCrawlF: LyingCrawlF {
speed=-1.3166666666666667;























actions="HandGunLyingActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunLyingCrawlF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a0eafe661.rtm";};
class GR12_CombatWalkFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatWalkF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatWalkFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatWalkF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatWalkLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatWalkLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatWalkLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatWalkLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatWalkRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatWalkRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatWalkRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatWalkRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatRunFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatRunF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatRunFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatRunF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatRunLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatRunLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatRunLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatRunLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatRunRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatRunRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatRunRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatRunRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatSprintFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatSprintF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatSprintFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatSprintF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatSprintLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatSprintLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatSprintLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatSprintLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatSprintRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatSprintRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatSprintRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatSprintRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchWalkFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchWalkF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchWalkFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchWalkF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchWalkLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchWalkLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchWalkLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchWalkLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchWalkRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchWalkRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchWalkRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchWalkRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchRunFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchRunF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchRunFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchRunF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchRunLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchRunLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchRunLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchRunLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchRunRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchRunRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchRunRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchRunRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchSprintFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchSprintF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchSprintFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchSprintF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchSprintLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchSprintLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchSprintLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchSprintLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchSprintRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchSprintRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchSprintRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchSprintRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchThrowStart: CombatThrowGrenadeStart {actions="CrouchActions";connectFrom[]={"Crouch",0.001};connectTo[]={"GR12_CrouchThrowEnd",0.001};
file="\dbsgr\anim\gr18_grenade_crouch_start.rtm";
speed=-0.5971428871154786;
looped=0;};
class GR12_CrouchThrowEnd: CombatThrowGrenadeEnd {actions="CrouchActions";connectTo[]={"Crouch",0.001};
file="\dbsgr\anim\gr18_grenade_crouch_end.rtm";
speed=-0.5028571128845215;
looped=0;};

class GR16_CombatIdle1: Combat {file="\dbsgr\anim\idle_r016_combat_1.rtm";speed=-2;looped=0;equivalentTo="Combat";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Combat",0.15};connectTo[]={"Combat",0.15};};
class GR16_CombatIdle2: Combat {file="\dbsgr\anim\idle_r016_combat_2.rtm";speed=-2;looped=0;equivalentTo="Combat";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Combat",0.15};connectTo[]={"Combat",0.15};};
class GR16_CombatIdle3: Combat {file="\dbsgr\anim\idle_r016_combat_3.rtm";speed=-2;looped=0;equivalentTo="Combat";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Combat",0.15};connectTo[]={"Combat",0.15};};
class GR16_CrouchIdle1: Crouch {file="\dbsgr\anim\gr36_idle_r016_crouch_1.rtm";speed=-2;looped=0;equivalentTo="Crouch";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Crouch",0.15};connectTo[]={"Crouch",0.15};};
class GR16_CrouchIdle2: Crouch {file="\dbsgr\anim\gr36_idle_r016_crouch_2.rtm";speed=-2;looped=0;equivalentTo="Crouch";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Crouch",0.15};connectTo[]={"Crouch",0.15};};
class GR16_CrouchIdle3: Crouch {file="\dbsgr\anim\gr36_idle_r016_crouch_3.rtm";speed=-2;looped=0;equivalentTo="Crouch";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Crouch",0.15};connectTo[]={"Crouch",0.15};};

class GR18_LowReadyIdle1: CombatRelaxed {looped=0;equivalentTo="CombatRelaxed";variantsPlayer[]={};variantsAI[]={};connectFrom[]={"CombatRelaxed",0.15};connectTo[]={"CombatRelaxed",0.15};
file="\dbsgr\anim\gr20_patrol_idle1.rtm";
speed=-2;};
class GR18_LowReadyIdle2: CombatRelaxed {looped=0;equivalentTo="CombatRelaxed";variantsPlayer[]={};variantsAI[]={};connectFrom[]={"CombatRelaxed",0.15};connectTo[]={"CombatRelaxed",0.15};
file="\dbsgr\anim\gr20_patrol_idle2.rtm";
speed=-2;};


class GR18_LauncherCrouch: Weapon {speed=-0.31666666666666665;variantsAI[]={};variantsPlayer[]={};interpolateWith[]={"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};
class GR18_LauncherCrouchWalkF: WeaponWalkF {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_F.rtm";
speed=-0.7599999904632568;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkB: WeaponWalkB {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_B.rtm";
speed=-0.9288888772328695;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkL: WeaponWalkL {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_L.rtm";
speed=-1.0555555820465088;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkR: WeaponWalkR {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_R.rtm";
speed=-1.0555555820465088;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkLF: WeaponWalkLF {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_LF.rtm";
speed=-0.7600000083475572;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkRF: WeaponWalkRF {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_RF.rtm";
speed=-0.7600000083475572;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkLB: WeaponWalkLB {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_LB.rtm";
speed=-0.9288888928474813;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkRB: WeaponWalkRB {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_RB.rtm";
speed=-0.9288888928474813;
actions="WeaponActions";};
class GR18_LauncherDown: Weapon {speed=-0.75;connectFrom[]={"Weapon",1};interpolateWith[]={};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};
class GR18_LauncherUp: Weapon {speed=-0.75;connectFrom[]={"GR18_LauncherCrouch",1};interpolateWith[]={};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};


class GR19_PatrolReady: CombatRelaxed {actions="GR19_PatrolActions";};class GR19_PatrolWalkF: CombatWalkF {file="\dbsgr\anim\gr20_patrol_walkf.rtm";speed=-1.2333333333333334;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkF";interpolateWith[]={"CombatWalkF",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkB: CombatWalkB {file="\dbsgr\anim\gr20_patrol_walkb.rtm";speed=-1.3166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkB";interpolateWith[]={"CombatWalkB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkL: CombatWalkL {file="\dbsgr\anim\gr20_patrol_walkl.rtm";speed=-1.0666666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkL";interpolateWith[]={"CombatWalkL",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkR: CombatWalkR {file="\dbsgr\anim\gr20_patrol_walkr.rtm";speed=-1.0666666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkR";interpolateWith[]={"CombatWalkR",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkLF: CombatWalkLF {file="\dbsgr\anim\gr20_patrol_walklf.rtm";speed=-1.2333333333333334;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkLF";interpolateWith[]={"CombatWalkLF",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkRF: CombatWalkRF {file="\dbsgr\anim\gr20_patrol_walkrf.rtm";speed=-1.2333333333333334;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkRF";interpolateWith[]={"CombatWalkRF",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkLB: CombatWalkLB {file="\dbsgr\anim\gr20_patrol_walklb.rtm";speed=-1.3166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkLB";interpolateWith[]={"CombatWalkLB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkRB: CombatWalkRB {file="\dbsgr\anim\gr20_patrol_walkrb.rtm";speed=-1.3166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkRB";interpolateWith[]={"CombatWalkRB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunF: CombatRunF {actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunF";interpolateWith[]={"CombatRunF",0.15,"Combat",0.15,"CombatRelaxed",0.15};
file="\dbsgr\anim\gr34_patrol_runf.rtm";
speed=-0.6109590387877216;};class GR19_PatrolRunB: CombatRunB {file="\dbsgr\anim\gr20_patrol_runb.rtm";speed=-0.7333333333333333;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunB";interpolateWith[]={"CombatRunB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunL: CombatRunL {file="\dbsgr\anim\gr20_patrol_runl.rtm";speed=-0.8166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunL";interpolateWith[]={"CombatRunL",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunR: CombatRunR {file="\dbsgr\anim\gr20_patrol_runr.rtm";speed=-0.8166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunR";interpolateWith[]={"CombatRunR",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunLF: CombatRunLF {actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunLF";interpolateWith[]={"CombatRunLF",0.15,"Combat",0.15,"CombatRelaxed",0.15};
file="\dbsgr\anim\gr34_patrol_runlf.rtm";
speed=-0.6109590284637683;};class GR19_PatrolRunRF: CombatRunRF {actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunRF";interpolateWith[]={"CombatRunRF",0.15,"Combat",0.15,"CombatRelaxed",0.15};
file="\dbsgr\anim\gr34_patrol_runrf.rtm";
speed=-0.6109590284637683;};class GR19_PatrolRunLB: CombatRunLB {file="\dbsgr\anim\gr20_patrol_runlb.rtm";speed=-0.7333333333333333;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunLB";interpolateWith[]={"CombatRunLB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunRB: CombatRunRB {file="\dbsgr\anim\gr20_patrol_runrb.rtm";speed=-0.7333333333333333;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunRB";interpolateWith[]={"CombatRunRB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};

class GR24_LauncherCrouchReload: WeaponReloadAT {
file="\dbsgr\anim\gr42_gr34_launcher_reload.rtm";
speed=-2.1;
looped=0;
actions="WeaponActions";
connectTo[]={"Weapon",1};
variantsAI[]={};
variantsPlayer[]={};};

class GR34_EastReady: GR19_PatrolReady {file="\dbsgr\anim\gr34_gr34_eastready.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};equivalentTo="GR34_EastReady";
variantsAI[]={"GR34_EastIdle1",.5,"GR34_EastIdle2",.5};};
class GR34_EastIdle1: GR18_LowReadyIdle1 {file="\dbsgr\anim\gr34_gr34_eastidle1.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};equivalentTo="GR34_EastReady";connectFrom[]={"GR34_EastReady",.15};connectTo[]={"GR34_EastReady",.15};};
class GR34_EastIdle2: GR18_LowReadyIdle2 {file="\dbsgr\anim\gr34_gr34_eastidle2.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};equivalentTo="GR34_EastReady";connectFrom[]={"GR34_EastReady",.15};connectTo[]={"GR34_EastReady",.15};};
class GR34_EastTurnL: CombatTurnLRelaxed {file="\dbsgr\anim\gr34_gr34_eastturnl.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastTurnR: CombatTurnRRelaxed {file="\dbsgr\anim\gr34_gr34_eastturnr.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkF: GR19_PatrolWalkF {file="\dbsgr\anim\gr34_gr34_eastwalkf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkB: GR19_PatrolWalkB {file="\dbsgr\anim\gr34_gr34_eastwalkb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkL: GR19_PatrolWalkL {file="\dbsgr\anim\gr34_gr34_eastwalkl.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkR: GR19_PatrolWalkR {file="\dbsgr\anim\gr34_gr34_eastwalkr.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkLF: GR19_PatrolWalkLF {file="\dbsgr\anim\gr34_gr34_eastwalklf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkRF: GR19_PatrolWalkRF {file="\dbsgr\anim\gr34_gr34_eastwalkrf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkLB: GR19_PatrolWalkLB {file="\dbsgr\anim\gr34_gr34_eastwalklb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkRB: GR19_PatrolWalkRB {file="\dbsgr\anim\gr34_gr34_eastwalkrb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunF: GR19_PatrolRunF {file="\dbsgr\anim\gr34_gr34_eastrunf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunB: GR19_PatrolRunB {file="\dbsgr\anim\gr34_gr34_eastrunb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunL: GR19_PatrolRunL {file="\dbsgr\anim\gr34_gr34_eastrunl.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunR: GR19_PatrolRunR {file="\dbsgr\anim\gr34_gr34_eastrunr.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunLF: GR19_PatrolRunLF {file="\dbsgr\anim\gr34_gr34_eastrunlf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunRF: GR19_PatrolRunRF {file="\dbsgr\anim\gr34_gr34_eastrunrf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunLB: GR19_PatrolRunLB {file="\dbsgr\anim\gr34_gr34_eastrunlb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunRB: GR19_PatrolRunRB {file="\dbsgr\anim\gr34_gr34_eastrunrb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
		class VulcanGunner: Driver
		{
			file="\dbsgr\anim\gr44_vulcangunnerstat.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"VulcanGunnerV1",
				0.700000,
				"VulcanGunner"
			};
			interpolateWith[]=
			{
				"VulcanGunnerV1",
				0.500000
			};
			equivalentTo="VulcanGunner";
			interpolationSpeed=1;
			connectTo[]=
			{
				"VulcanGunnerDying",
				1
			};
		};
		class VulcanGunnerV1: VulcanGunner
		{
			file="\dbsgr\anim\gr44_vulcangunner.rtm";
			speed="- 4";
			looped=1;
		};
		class VulcanGunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\gr44_vulcangunnersmrt.rtm";
			speed="- 1";
			looped=0;
			soundEnabled=0;
			connectFrom[]=
			{
				"VulcanGunner",
				1
			};
		};
		class VulcanGunnerDead: VulcanGunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\gr44_vulcangunnersmrt2.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]=
			{
				"VulcanGunnerDying",
				1
			};
			connectTo[]=
			{
				"DeadState",
				1
			};
		};
	};
	class Interpolations
	{
		standF[]=
		{
			1,
			"Stand",
			"StandWalkF",
			"StandWalkLF",
			"StandWalkRF",
			"StandWalkL",
			"StandWalkR",
			"StandRunF"
		};
		standB[]=
		{
			1,
			"Stand",
			"StandWalkLB",
			"StandWalkRB",
			"StandWalkB"
		};
		combatF[]=
		{
			0.900000,
			"Combat",
			"CombatStillPlayer",
			"CombatRelaxed",
			"CombatRunF",
			"CombatRunLF",
			"CombatRunRF",
			"CombatRunL",
			"CombatRunR",
			"CombatSprintF",
			"CombatSprintLF",
			"CombatSprintRF",
			"CombatWalkF",
			"CombatWalkLF",
			"CombatWalkRF",
			"CombatWalkL",
			"CombatWalkR"
		};
		combatB[]=
		{
			1,
			"Combat",
			"CombatStillPlayer",
			"CombatRelaxed",
			"CombatRunLB",
			"CombatRunRB",
			"CombatRunB",
			"CombatWalkLB",
			"CombatWalkRB",
			"CombatWalkB"
		};
		crouchF[]=
		{
			0.500000,
			"CrouchIM",
			"CrouchRunF",
			"CrouchRunLF",
			"CrouchRunRF",
			"CrouchRunL",
			"CrouchRunR",
			"CrouchSprintF",
			"CrouchSprintLF",
			"CrouchSprintRF"
		};
		crouchFW[]=
		{
			0.500000,
			"CrouchIM",
			"CrouchWalkF",
			"CrouchWalkLF",
			"CrouchWalkRF",
			"CrouchWalkL",
			"CrouchWalkR"
		};
		crouchB[]=
		{
			0.500000,
			"CrouchIM",
			"CrouchRunLB",
			"CrouchRunRB",
			"CrouchRunB",
			"CrouchWalkLB",
			"CrouchWalkRB",
			"CrouchWalkB"
		};
		civilF[]=
		{
			1,
			"Civil",
			"CivilRunF",
			"CivilRunLF",
			"CivilRunRF",
			"CivilRunL",
			"CivilRunR",
			"CivilWalkF",
			"CivilWalkLF",
			"CivilWalkRF",
			"CivilWalkL",
			"CivilWalkR"
		};
		civilB[]=
		{
			1,
			"Civil",
			"CivilWalkLB",
			"CivilWalkRB",
			"CivilWalkB",
			"CivilRunLB",
			"CivilRunRB",
			"CivilRunB"
		};
		lyingF[]=
		{
			1,
			"Lying",
			"LyingCrawlF",
			"LyingFastCrawlF",
			"LyingCrawlLF",
			"LyingCrawlRF",
			"LyingCrawlL",
			"LyingCrawlR"
		};
		lyingB[]=
		{
			1,
			"Lying",
			"LyingCrawlLB",
			"LyingCrawlRB",
			"LyingCrawlB"
		};
		civilLyingF[]=
		{
			1,
			"CivilLying",
			"CivilLyingCrawlF",
			"CivilLyingFastCrawlF",
			"CivilLyingCrawlLF",
			"CivilLyingCrawlRF",
			"CivilLyingCrawlL",
			"CivilLyingCrawlR"
		};
		civilLyingB[]=
		{
			1,
			"CivilLying",
			"CivilLyingCrawlLB",
			"CivilLyingCrawlRB",
			"CivilLyingCrawlB"
		};
		lyingVars[]=
		{
			0.100000,
			"Lying",
			"LyingStillV1",
			"LyingTurnL",
			"LyingTurnR"
		};
		civilLyingVars[]=
		{
			0.100000,
			"CivilLying",
			"CivilLyingStillV1"
		};
		combatVars[]=
		{
			0.100000,
			"Combat",
			"CombatStillPlayer",
			"CombatStillV1"
		};
		combatReleaxedVars[]=
		{
			0.100000,
			"Combat",
			"CombatRelaxed",
			"CombatRelaxedStill"
		};
		combatTurnRelaxed[]=
		{
			0.100000,
			"CombatRelaxed",
			"CombatTurnLRelaxed",
			"CombatTurnRRelaxed"
		};
		combatTurn[]=
		{
			0.100000,
			"Combat",
			"CombatStillPlayer",
			"CombatTurnL",
			"CombatTurnR"
		};
		standTurn[]=
		{
			0.100000,
			"Stand",
			"StandTurnL",
			"StandTurnR"
		};
		standFX[]=
		{
			1,
			"Stand",
			"EffectStand",
			"EffectStandTalk",
			"EffectStand",
			"EffectCombatStand",
			"EffectStandStill",
			"CommandFireAtWill",
			"CommandFormation",
			"CommandHoldFire",
			"CommandStop",
			"CommandForward"
		};
		standVars[]=
		{
			1,
			"Stand",
			"StandVar2"
		};
		weaponF[]=
		{
			1,
			"Weapon",
			"WeaponWalkF",
			"WeaponWalkLF",
			"WeaponWalkRF",
			"WeaponWalkL",
			"WeaponWalkR"
		};
		weaponB[]=
		{
			1,
			"Weapon",
			"WeaponWalkLB",
			"WeaponWalkRB",
			"WeaponWalkB"
		};
		weaponTurn[]=
		{
			1,
			"Weapon",
			"WeaponTurnL",
			"WeaponTurnR"
		};
		civilLyingTrans[]=
		{
			2,
			"CivilLying",
			"Lying"
		};
		civilCombatTrans[]=
		{
			2,
			"Combat",
			"Civil"
		};
		civilStandTrans[]=
		{
			2,
			"Stand",
			"Civil"
		};
		civilVars[]=
		{
			0.100000,
			"Civil",
			"CivilStillV1"
		};
		civilTurn[]=
		{
			1,
			"Civil",
			"CivilTurnL",
			"CivilTurnR"
		};
		cargoEquiv[]=
		{
			2,
			"M113Gunner",
			"M113Driver",
			"M113DriverOut",
			"M60Gunner",
			"M60Driver",
			"M60DriverOut",
			"M60Commander",
			"M60CommanderOut",
			"M1A1Gunner",
			"M1A1Driver",
			"M1A1DriverOut",
			"M1A1Commander",
			"Cargo"
		};
		cargoVars[]=
		{
			0.100000,
			"Cargo",
			"CargoVer1",
			"CargoVer2",
			"CargoVer3",
			"CargoVer4",
			"CargoVer5"
		};
		sitDownVars[]=
		{
			1,
			"EffectStandSitDown",
			"EffectStandSitDownVer2",
			"EffectStandSitDownVer1"
		};
	};
	transitionsInterpolated[]={};
	transitionsSimple[]=
	{
		"Lying",
		"LyingDying",
		1,
		"LyingDying",
		"LyingDead",
		1,
		"CivilLying",
		"CivilLyingDying",
		1,
		"CivilLyingDying",
		"CivilLyingDead",
		1,
		"Stand",
		"StandDying",
		1,
		"StandDying",
		"StandDead",
		1,
		"Stand",
		"StandDyingVer2",
		1,
		"StandDyingVer2",
		"StandDeadVer2",
		1,
		"Weapon",
		"WeaponDying",
		1,
		"WeaponDying",
		"WeaponDead",
		1,
		"Weapon",
		"WeaponDyingVer2",
		1,
		"WeaponDyingVer2",
		"WeaponDeadVer2",
		1,
		"Cargo",
		"CargoDying",
		1,
		"CargoDying",
		"CargoDead",
		1,
		"Combat",
		"CombatToWeapon",
		2,
		"CombatToWeapon",
		"Weapon",
		2,
		"Lying",
		"LyingToWeapon",
		2,
		"LyingToWeapon",
		"Weapon",
		2,
		"Weapon",
		"WeaponToLying",
		2,
		"WeaponToLying",
		"Lying",
		2,
		"Combat",
		"CombatReloadMagazine",
		2,
		"CombatReloadMagazine",
		"Combat",
		2,
		"Combat",
		"CombatReloadMGun",
		2,
		"CombatReloadMGun",
		"Combat",
		2,
		"Combat",
		"CombatReloadMortarStart",
		2,
		"CombatReloadMortarStart",
		"CombatReloadMortarEnd",
		2,
		"CombatReloadMortarEnd",
		"Combat",
		2,
		"Combat",
		"CombatThrowGrenadeStart",
		2,
		"CombatThrowGrenadeStart",
		"CombatThrowGrenadeEnd",
		2,
		"CombatThrowGrenadeEnd",
		"Combat",
		2,
		"Stand",
		"StandThrowGrenadeStart",
		2,
		"StandThrowGrenadeStart",
		"StandThrowGrenadeEnd",
		2,
		"StandThrowGrenadeEnd",
		"Stand",
		2,
		"Civil",
		"CivilThrowGrenadeStart",
		2,
		"CivilThrowGrenadeStart",
		"CivilThrowGrenadeEnd",
		2,
		"CivilThrowGrenadeEnd",
		"Civil",
		2,
		"Lying",
		"LyingThrowGrenadeStart",
		2,
		"LyingThrowGrenadeStart",
		"LyingThrowGrenadeEnd",
		2,
		"LyingThrowGrenadeEnd",
		"Lying",
		2,
		"CombatRunF",
		"CombatRunThrowGrenadeStart",
		2,
		"CombatRunThrowGrenadeStart",
		"CombatRunThrowGrenadeEnd",
		2,
		"CombatRunThrowGrenadeEnd",
		"Combat",
		2,
		"CivilRunF",
		"CivilRunThrowGrenadeStart",
		2,
		"CivilRunThrowGrenadeStart",
		"CivilRunThrowGrenadeEnd",
		2,
		"CivilRunThrowGrenadeEnd",
		"Civil",
		2,
		"Lying",
		"LyingReloadMagazine",
		2,
		"LyingReloadMagazine",
		"Lying",
		2,
		"Combat",
		"CombatToBinoc",
		2,
		"CombatToBinoc",
		"Binoc",
		2,
		"Binoc",
		"BinocToCombat",
		2,
		"BinocToCombat",
		"Combat",
		2,
		"Lying",
		"LyingToBinocLying",
		2,
		"LyingToBinocLying",
		"BinocLying",
		2,
		"BinocLying",
		"BinocLyingToLying",
		2,
		"BinocLyingToLying",
		"Lying",
		2,
		"Weapon",
		"WeaponReloadAT",
		2,
		"WeaponReloadAT",
		"Weapon",
		2,
		"Stand",
		"StandToCombat",
		1,
		"StandToCombat",
		"Combat",
		1,
		"Combat",
		"CombatToStand",
		1,
		"CombatToStand",
		"Stand",
		1,
		"Lying",
		"LyingToCombat",
		1.200000,
		"LyingToCombat",
		"Combat",
		1.200000,
		"Combat",
		"CombatToLying",
		1.200000,
		"CombatToLying",
		"Lying",
		1.200000,
		"CombatRunF",
		"CombatRunFToLying",
		1,
		"CombatRunFToLying",
		"Lying",
		1,
		"Lying",
		"LyingToCombatRun",
		1,
		"LyingToCombatRun",
		"CombatRunF",
		1,
		"Civil",
		"CivilToCivilLying",
		1.200000,
		"CivilToCivilLying",
		"CivilLying",
		1.200000,
		"CivilLying",
		"CivilLyingToCivil",
		1.200000,
		"CivilLyingToCivil",
		"Civil",
		1.200000,
		"Combat",
		"CombatGetInCar",
		1,
		"CombatGetInCar",
		"Combat",
		1,
		"Combat",
		"CombatGetInTank",
		1,
		"CombatGetInTank",
		"Combat",
		1,
		"CombatGetOutTank",
		"Combat",
		1,
		"Civil",
		"CivilGetInCar",
		1,
		"CivilGetInCar",
		"Civil",
		1,
		"Civil",
		"CivilGetInTank",
		1,
		"CivilGetInTank",
		"Civil",
		1,
		"CivilGetOutTank",
		"Civil",
		1,
		"Stand",
		"StandGetInCar",
		1,
		"StandGetInCar",
		"Stand",
		1,
		"Stand",
		"StandGetInTank",
		1,
		"StandGetInTank",
		"Stand",
		1,
		"StandGetOutTank",
		"Stand",
		1,
		"Stand",
		"StandToSitDown",
		1,
		"StandToSitDown",
		"EffectStandSitDown",
		1,
		"EffectStandSitDown",
		"SitDownToStand",
		1,
		"SitDownToStand",
		"Stand",
		1,
		"EffectStandSitDown",
		"SitDownDying",
		1,
		"SitDownDying",
		"SitDownDead",
		1,
		"CombatDead",
		"DeadState",
		10,
		"CombatDeadVer2",
		"DeadState",
		10,
		"StandDead",
		"DeadState",
		10,
		"StandDeadVer2",
		"DeadState",
		10,
		"LyingDead",
		"DeadState",
		10,
		"CivilLyingDead",
		"DeadState",
		10,
		"WeaponDead",
		"DeadState",
		10,
		"WeaponDeadVer2",
		"DeadState",
		10,
		"SitDownDead",
		"DeadState",
		10
	};
	transitionsDisabled[]={};
};

class DBS_GR_EastMoves
{
	access=1;
	vehicleActions="CfgVehicleActions";
	class Actions
	{
		class NoActionsAll: CfgManActions
		{
			access=3;
		};
		class NoActions: NoActionsAll
		{
			ladderOnDown="LadderDownStart";
			ladderOnUp="LadderUpStart";
			turnSpeed=1;
			upDegree=-1;
			limitFast=5;
		};
		class DeadActions: NoActions
		{
			upDegree=0;
		};
		class CargoActions: NoActions
		{
			die="DeadState";
		};
		class WeaponActions: NoActions
		{
			
			
			
			
			handGunOn="HandGunCrouch";
			
			
			
			
			
			
			die="WeaponDead";
			civilLying="CivilLying";
			civil="Civil";
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			getInCar="CombatGetInCar";
			getOutCar="Combat";
			getInTank="CombatGetInTank";
			getOutTank="CombatGetOutTank";
			
		










stop="Weapon";
default="Weapon";
weaponOn="Weapon";
up="Weapon";
down="Weapon";
crouch="Weapon";
combat="Weapon";
stand="Weapon";
lying="Weapon";
upDegree=1;
weaponOff="Crouch";
reloadAT="WeaponReloadAT";
walkF="WeaponWalkF";
slowF="WeaponWalkF";
fastF="WeaponWalkF";
walkB="WeaponWalkB";
slowB="WeaponWalkB";
fastB="WeaponWalkB";
walkL="WeaponWalkL";
slowL="WeaponWalkL";
fastL="WeaponWalkL";
walkR="WeaponWalkR";
slowR="WeaponWalkR";
fastR="WeaponWalkR";
walkLF="WeaponWalkLF";
slowLF="WeaponWalkLF";
fastLF="WeaponWalkLF";
walkRF="WeaponWalkRF";
slowRF="WeaponWalkRF";
fastRF="WeaponWalkRF";
walkLB="WeaponWalkLB";
slowLB="WeaponWalkLB";
fastLB="WeaponWalkLB";
walkRB="WeaponWalkRB";
slowRB="WeaponWalkRB";
fastRB="WeaponWalkRB";
turnL="WeaponTurnL";
turnR="WeaponTurnR";};
		class StandActions: NoActions
		{
			stop="Stand";
			default="Stand";
			walkF="StandWalkF";
			walkLF="StandWalkLF";
			walkRF="StandWalkRF";
			walkL="StandWalkL";
			walkR="StandWalkR";
			walkLB="StandWalkLB";
			walkRB="StandWalkRB";
			walkB="StandWalkB";
			slowF="StandWalkF";
			slowLF="StandWalkLF";
			slowRF="StandWalkRF";
			slowL="StandWalkL";
			slowR="StandWalkR";
			slowLB="StandWalkLB";
			slowRB="StandWalkRB";
			slowB="StandWalkB";
			fastF="StandRunF";
			fastLF="StandWalkLF";
			fastRF="StandWalkRF";
			fastL="StandWalkL";
			fastR="StandWalkR";
			fastLB="StandWalkLB";
			fastRB="StandWalkRB";
			fastB="StandWalkB";
			
			
			weaponOn="Weapon";
			weaponOff="Stand";
			binocOn="BinocStand";
			binocOff="Stand";
			handGunOn="HandGunStand";
			strokeFist="StandStrokeFist";
			strokeGun="";
			
			combat="Combat";
			
			stand="Stand";
			civil="Civil";
			civilLying="CivilLying";
			fireNotPossible="Combat";
			throwGrenade="StandThrowGrenadeStart";
			turnL="StandTurnL";
			turnR="StandTurnR";
			getInCar="StandGetInCar";
			getOutCar="Stand";
			getInTank="StandGetInTank";
			getOutTank="StandGetOutTank";
			sitDown="StandToSitDown";
			salute="EffectStandSaluteStart";
			turnSpeed=4;
			limitFast=2.500000;
			die="StandDead";
			takeFlag="StandToStandTakeFlag";
			putDown="StandPutDown";
			upDegree=10;
		




up="CombatToCrouch";

crouch="CombatToCrouch";

down="CombatToLying";

lying="CombatToLying";
};
		class StandStillActions: StandActions
		{
			stop="EffectStandStill";
			default="EffectStandStill";
		};
		class StandStandActions: StandActions
		{
			stop="EffectStand";
			default="EffectStand";
		};
		class StandSaluteActions: StandActions
		{
			stop="EffectStandSalute";
			default="EffectStandSalute";
			salute="";
		};
		class StandTalkActions: StandActions
		{
			stop="EffectStandTalk";
			default="EffectStandTalk";
		};
		class SitActions: StandActions
		{
			turnL="";
			turnR="";
			stop="EffectStandSitDown";
			default="EffectStandSitDown";
			strokeFist="";
			sitDown="";
			die="SitDownDead";
		};
		class CivilActions: StandActions
		{
			stop="Civil";
			default="Civil";
			walkF="CivilWalkF";
			walkLF="CivilWalkLF";
			walkRF="CivilWalkRF";
			walkL="CivilWalkL";
			walkR="CivilWalkR";
			walkLB="CivilWalkLB";
			walkRB="CivilWalkRB";
			walkB="CivilWalkB";
			slowF="CivilWalkF";
			slowLF="CivilWalkLF";
			slowRF="CivilWalkRF";
			slowL="CivilWalkL";
			slowR="CivilWalkR";
			slowLB="CivilWalkLB";
			slowRB="CivilWalkRB";
			slowB="CivilWalkB";
			fastF="CivilRunF";
			fastLF="CivilRunLF";
			fastRF="CivilRunRF";
			fastL="CivilRunL";
			fastR="CivilRunR";
			fastLB="CivilRunLB";
			fastRB="CivilRunRB";
			fastB="CivilRunB";
			down="CivilLying";
			up="CivilLying";
			lying="Lying";
			combat="Combat";
			crouch="Crouch";
			stand="Stand";
			civil="Civil";
			civilLying="CivilLying";
			throwGrenade="CivilThrowGrenadeStart";
			turnL="CivilTurnL";
			turnR="CivilTurnR";
			handGunOn="HandGunStand";
			die="CivilDead";
			getInCar="CivilGetInCar";
			getOutCar="Civil";
			getInTank="CivilGetInTank";
			getOutTank="CivilGetOutTank";
			takeFlag="CivilToCivilTakeFlag";
			putDown="CivilPutDown";
			limitFast=4;
			upDegree=11;
		};
		class CombatActions: NoActions
		{
			stop="Combat";
			default="Combat";
			stopRelaxed="CombatRelaxed";
			reloadMagazine="CombatReloadMagazine";
			reloadMGun="CombatReloadMGun";
			reloadMortar="CombatReloadMortarStart";
			throwGrenade="CombatThrowGrenadeStart";
			walkF="CombatWalkF";
			walkLF="CombatWalkLF";
			walkRF="CombatWalkRF";
			walkL="CombatWalkL";
			walkR="CombatWalkR";
			walkLB="CombatWalkLB";
			walkRB="CombatWalkRB";
			walkB="CombatWalkB";
			slowF="CombatRunF";
			slowLF="CombatRunLF";
			slowRF="CombatRunRF";
			slowL="CombatRunL";
			slowR="CombatRunR";
			slowLB="CombatRunLB";
			slowRB="CombatRunRB";
			slowB="CombatRunB";
			fastF="CombatSprintF";
			fastLF="CombatSprintLF";
			fastRF="CombatSprintRF";
			fastL="CombatRunL";
			fastR="CombatRunR";
			fastLB="CombatRunLB";
			fastRB="CombatRunRB";
			fastB="CombatRunB";
			
			
			
			combat="Combat";
			
			stand="Stand";
			civil="Civil";
			civilLying="CivilLying";
			die="CombatDead";
			weaponOn="Weapon";
			binocOn="Binoc";
			binocOff="Combat";
			handGunOn="HandGunStand";
			takeFlag="CombatToTakeFlag";
			putDown="PutDown";
			medic="Medic";
			treated="Treated";
			strokeFist="";
			strokeGun="CombatStrokeGun";
			turnL="CombatTurnL";
			turnR="CombatTurnR";
			turnLRelaxed="CombatTurnLRelaxed";
			turnRRelaxed="CombatTurnRRelaxed";
			getInCar="CombatGetInCar";
			getOutCar="Combat";
			getInTank="CombatGetInTank";
			getOutTank="CombatGetOutTank";
			turnSpeed=8;
			limitFast=5.500000;
			upDegree=8;
		




up="CombatToCrouch";

crouch="CombatToCrouch";

down="CombatToLying";

lying="CombatToLying";
};
		class CrouchActions: CombatActions
		{
upDegree=6;stopRelaxed="Crouch";



















			stop="Crouch";
			default="Crouch";
			
			reloadMagazine="CrouchReloadMagazine";
			reloadMG="CrouchReloadMagazine";
			die="CrouchDead";
			
			walkF="CrouchWalkF";
			walkLF="CrouchWalkLF";
			walkRF="CrouchWalkRF";
			walkL="CrouchWalkL";
			walkR="CrouchWalkR";
			walkLB="CrouchWalkLB";
			walkRB="CrouchWalkRB";
			walkB="CrouchWalkB";
			slowF="CrouchRunF";
			slowLF="CrouchRunLF";
			slowRF="CrouchRunRF";
			slowL="CrouchRunL";
			slowR="CrouchRunR";
			slowLB="CrouchRunLB";
			slowRB="CrouchRunRB";
			slowB="CrouchRunB";
			fastF="CrouchSprintF";
			fastLF="CrouchSprintLF";
			fastRF="CrouchSprintRF";
			fastL="CrouchRunL";
			fastR="CrouchRunR";
			fastLB="CrouchRunLB";
			fastRB="CrouchRunRB";
			fastB="CrouchRunB";
			binocOn="BinocCrouch";
			binocOff="Crouch";
			handGunOn="HandGunCrouch";
			turnL="CrouchTurnL";
			turnR="CrouchTurnR";
		




up="CrouchToCombat";

combat="CrouchToCombat";

down="CrouchToLying";

lying="CrouchToLying";

throwGrenade="GR12_CrouchThrowStart";


weaponOn="Weapon";};
		class CombatStandingUpActions: CombatActions
		{
			die="LyingDead";
		};
		class CombatRunFActions: CombatActions
		{
			throwGrenade="CombatRunThrowGrenadeStart";
			die="CombatRunDead";
		};
		class CombatRunBActions: CombatActions
		{
			die="CombatRunBDead";
		};
		class CivilRunFActions: CivilActions
		{
			throwGrenade="CivilRunThrowGrenadeStart";
		};
		class CrouchRunFActions: CrouchActions
		{
			throwGrenade="CombatRunThrowGrenadeStart";
			die="CombatRunDead";
		};
		class CrouchRunBActions: CrouchActions
		{
			die="CombatRunBDead";
		};
		class CombatRelaxedActions: CombatActions
		{
			die="CombatRelaxedDead";
		};
		class LyingActions: NoActions
		{
			stop="Lying";
			default="Lying";
			reloadMagazine="LyingReloadMagazine";
			reloadMGun="LyingReloadMagazine";
			throwGrenade="LyingThrowGrenadeStart";
			walkF="LyingCrawlF";
			walkLF="LyingCrawlLF";
			walkRF="LyingCrawlRF";
			walkL="LyingCrawlL";
			walkR="LyingCrawlR";
			walkLB="LyingCrawlLB";
			walkRB="LyingCrawlRB";
			walkB="LyingCrawlB";
			slowF="LyingCrawlF";
			slowLF="LyingCrawlLF";
			slowRF="LyingCrawlRF";
			slowL="LyingCrawlL";
			slowR="LyingCrawlR";
			slowLB="LyingCrawlLB";
			slowRB="LyingCrawlRB";
			slowB="LyingCrawlB";
			fastF="LyingFastCrawlF";
			fastLF="LyingCrawlLF";
			fastRF="LyingCrawlRF";
			fastL="LyingCrawlL";
			fastR="LyingCrawlR";
			fastLB="LyingCrawlLB";
			fastRB="LyingCrawlRB";
			fastB="LyingCrawlB";
			down="Combat";
			
			lying="Lying";
			
			
			stand="Stand";
			civil="Civil";
			civilLying="CivilLying";
			die="LyingDead";
			weaponOn="Weapon";
			weaponOff="Lying";
			binocOn="BinocLying";
			binocOff="Lying";
			handGunOn="HandGunLying";
			turnL="LyingTurnL";
			turnR="LyingTurnR";
			getInCar="CombatGetInCar";
			getOutCar="Combat";
			getInTank="CombatGetInTank";
			getOutTank="CombatGetOutTank";
			takeFlag="CombatToTakeFlag";
			putDown="PutDownLying";
			medic="Medic";
			treated="TreatedLying";
			turnSpeed=3;
			upDegree=4;
		
up="LyingToCrouch";

crouch="LyingToCrouch";

combat="LyingToCombat";
};
		class CrawlingActions: LyingActions
		{
			up="CombatRunF";
			combat="CombatRunF";
		};
		class CivilLyingActions: LyingActions
		{
			stop="CivilLying";
			down="Civil";
			up="Civil";
			walkF="CivilLyingCrawlF";
			walkLF="CivilLyingCrawlLF";
			walkRF="CivilLyingCrawlRF";
			walkL="CivilLyingCrawlL";
			walkR="CivilLyingCrawlR";
			walkLB="CivilLyingCrawlLB";
			walkRB="CivilLyingCrawlRB";
			walkB="CivilLyingCrawlB";
			slowF="CivilLyingCrawlF";
			slowLF="CivilLyingCrawlLF";
			slowRF="CivilLyingCrawlRF";
			slowL="CivilLyingCrawlL";
			slowR="CivilLyingCrawlR";
			slowLB="CivilLyingCrawlLB";
			slowRB="CivilLyingCrawlRB";
			slowB="CivilLyingCrawlB";
			fastF="CivilLyingFastCrawlF";
			fastLF="CivilLyingCrawlLF";
			fastRF="CivilLyingCrawlRF";
			fastL="CivilLyingCrawlL";
			fastR="CivilLyingCrawlR";
			fastLB="CivilLyingCrawlLB";
			fastRB="CivilLyingCrawlRB";
			fastB="CivilLyingCrawlB";
			die="CivilLyingDead";
			takeFlag="CivilLyingToCivilLyingTakeFlag";
			putDown="CivilLyingPutDown";
			upDegree=3;
		};
		class CivilCrawlingActions: CivilLyingActions
		{
		};
		class LadderActions: NoActions
		{
			stop="LadderStatic";
			default="LadderStatic";
			upDegree=10;
			turnSpeed=0.100000;
			ladderOff="LadderDownEnd";
			ladderOffTop="LadderUpEnd";
			ladderOffBottom="LadderDownEnd";
			down="LadderDownLoop";
			up="LadderUpLoop";
			die="StandDead";
		};
		class LadderUpActions: LadderActions
		{
			ladderOff="LadderUpEnd";
		};
		class LadderDownActions: LadderActions
		{
			ladderOff="LadderDownEnd";
		};
		class CombatNoMoveActions: CombatActions
		{
			stopRelaxed="";
			walkF="";
			walkLF="";
			walkRF="";
			walkL="";
			walkR="";
			walkLB="";
			walkRB="";
			walkB="";
			slowF="";
			slowLF="";
			slowRF="";
			slowL="";
			slowR="";
			slowLB="";
			slowRB="";
			slowB="";
			fastF="";
			fastLF="";
			fastRF="";
			fastL="";
			fastR="";
			fastLB="";
			fastRB="";
			fastB="";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			turnSpeed=2;
		};
		class PutDownActions: CombatActions
		{
			
			
			down="Lying";
			up="Combat";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Combat";
			fireNotPossible="Combat";
		
stop="Combat";

default="Combat";
};
		class TakeFlagActions: CombatActions
		{
			stop="Combat";
			default="Combat";
			down="Lying";
			up="Combat";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Combat";
			fireNotPossible="Combat";
		};
		class MedicActions: CombatActions
		{
			stop="Medic";
			default="Medic";
			down="Lying";
			up="Combat";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Combat";
			fireNotPossible="Combat";
		};
		class TreatedActions: CombatActions
		{
			stop="Treated";
			default="Treated";
			down="Lying";
			up="Combat";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Combat";
			fireNotPossible="Combat";
		};
		class StandPutDownActions: StandActions
		{
			
			
			down="Stand";
			up="Stand";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Stand";
			fireNotPossible="Stand";
		
stop="Stand";

default="Stand";
};
		class StandTakeFlagActions: StandActions
		{
			stop="Stand";
			default="Stand";
			down="Stand";
			up="Stand";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Stand";
			fireNotPossible="Stand";
		};
		class CivilPutDownActions: CivilActions
		{
			
			
			down="CivilLying";
			up="Civil";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Civil";
			fireNotPossible="Civil";
		
stop="Civil";

default="Civil";
};
		class CivilTakeFlagActions: CivilActions
		{
			stop="Civil";
			default="Civil";
			down="CivilLying";
			up="Civil";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Civil";
			fireNotPossible="Civil";
		};
		class PutDownLyingActions: LyingActions
		{
			
			
			down="Lying";
			up="Lying";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Lying";
			fireNotPossible="Lying";
		
stop="Lying";

default="Lying";
};
		class TreatedLyingActions: LyingActions
		{
			stop="TreatedLying";
			default="TreatedLying";
			down="Lying";
			up="Lying";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="Lying";
			fireNotPossible="Lying";
		};
		class CivilLyingPutDownActions: CivilLyingActions
		{
			
			
			down="CivilLying";
			up="CivilLying";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="CivilLying";
			fireNotPossible="CivilLying";
		
stop="CivilLying";

default="CivilLying";
};
		class CivilLyingTakeFlagActions: CivilLyingActions
		{
			stop="CivilLying";
			default="CivilLying";
			down="CivilLying";
			up="CivilLying";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			putDownEnd="CivilLying";
			fireNotPossible="CivilLying";
		};
		class BinocActions: CombatNoMoveActions
		{
			stop="Binoc";
			default="Binoc";
			binocOff="Combat";
			upDegree=12;
		};
		class BinocLyingActions: LyingActions
		{
			stop="BinocLying";
			default="BinocLying";
			binocOff="Lying";
			walkF="";
			walkLF="";
			walkRF="";
			walkL="";
			walkR="";
			walkLB="";
			walkRB="";
			walkB="";
			slowF="";
			slowLF="";
			slowRF="";
			slowL="";
			slowR="";
			slowLB="";
			slowRB="";
			slowB="";
			fastF="";
			fastLF="";
			fastRF="";
			fastL="";
			fastR="";
			fastLB="";
			fastRB="";
			fastB="";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			upDegree=2;
			turnSpeed=1;
		};
		class BinocStandActions: StandActions
		{
			stop="BinocStand";
			default="BinocStand";
			binocOff="Stand";
			walkF="";
			walkLF="";
			walkRF="";
			walkL="";
			walkR="";
			walkLB="";
			walkRB="";
			walkB="";
			slowF="";
			slowLF="";
			slowRF="";
			slowL="";
			slowR="";
			slowLB="";
			slowRB="";
			slowB="";
			fastF="";
			fastLF="";
			fastRF="";
			fastL="";
			fastR="";
			fastLB="";
			fastRB="";
			fastB="";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			upDegree=13;
			turnSpeed=2;
		};
		class BinocCrouchActions: CrouchActions
		{
			stop="BinocCrouch";
			default="BinocCrouch";
			binocOff="Crouch";
			walkF="";
			walkLF="";
			walkRF="";
			walkL="";
			walkR="";
			walkLB="";
			walkRB="";
			walkB="";
			slowF="";
			slowLF="";
			slowRF="";
			slowL="";
			slowR="";
			slowLB="";
			slowRB="";
			slowB="";
			fastF="";
			fastLF="";
			fastRF="";
			fastL="";
			fastR="";
			fastLB="";
			fastRB="";
			fastB="";
			turnL="";
			turnR="";
			turnLRelaxed="";
			turnRRelaxed="";
			upDegree=12;
			turnSpeed=2;
		};
	class HandGunStandActions: CombatActions {upDegree=9;stop="HandGunStand";stopRelaxed="HandGunStand";default="HandGunStand";up="HandGunStand";down="HandGunLying";handGunOn="HandGunStand";walkF="HandGunStandWalkF";walkLF="HandGunStandWalkF";walkRF="HandGunStandWalkF";walkL="HandGunStandWalkL";walkR="HandGunStandWalkR";walkLB="HandGunStandWalkB";walkRB="HandGunStandWalkB";walkB="HandGunStandWalkB";slowF="HandGunStandWalkF";slowLF="HandGunStandWalkF";slowRF="HandGunStandWalkF";slowL="HandGunStandWalkL";slowR="HandGunStandWalkR";slowLB="HandGunStandWalkB";slowRB="HandGunStandWalkB";slowB="HandGunStandWalkB";fastF="HandGunStandRunF";fastLF="HandGunStandRunF";fastRF="HandGunStandRunF";fastL="HandGunStandWalkL";fastR="HandGunStandWalkR";fastLB="HandGunStandRunB";fastRB="HandGunStandRunB";fastB="HandGunStandRunB";};class HandGunCrouchActions: CrouchActions {upDegree=7;stop="HandGunCrouch";stopRelaxed="HandGunCrouch";default="HandGunCrouch";up="HandGunStand";down="HandGunLying";handGunOn="HandGunCrouch";walkF="HandGunCrouchWalkF";walkLF="HandGunCrouchWalkF";walkRF="HandGunCrouchWalkF";walkL="HandGunCrouchWalkF";walkR="HandGunCrouchWalkF";walkLB="HandGunCrouchWalkF";walkRB="HandGunCrouchWalkF";walkB="HandGunCrouchWalkF";slowF="HandGunCrouchWalkF";slowLF="HandGunCrouchWalkF";slowRF="HandGunCrouchWalkF";slowL="HandGunCrouchWalkF";slowR="HandGunCrouchWalkF";slowLB="HandGunCrouchWalkF";slowRB="HandGunCrouchWalkF";slowB="HandGunCrouchWalkF";fastF="HandGunCrouchRunF";fastLF="HandGunCrouchRunF";fastRF="HandGunCrouchRunF";fastL="HandGunCrouchRunF";fastR="HandGunCrouchRunF";fastLB="HandGunCrouchRunF";fastRB="HandGunCrouchRunF";fastB="HandGunCrouchRunF";};class HandGunLyingActions: LyingActions {upDegree=5;stop="HandGunLying";stopRelaxed="HandGunLying";default="HandGunLying";up="HandGunStand";down="HandGunLying";handGunOn="HandGunLying";walkF="HandGunLyingCrawlF";walkLF="HandGunLyingCrawlF";walkRF="HandGunLyingCrawlF";walkL="HandGunLyingCrawlF";walkR="HandGunLyingCrawlF";walkLB="HandGunLyingCrawlF";walkRB="HandGunLyingCrawlF";walkB="HandGunLyingCrawlF";slowF="HandGunLyingCrawlF";slowLF="HandGunLyingCrawlF";slowRF="HandGunLyingCrawlF";slowL="HandGunLyingCrawlF";slowR="HandGunLyingCrawlF";slowLB="HandGunLyingCrawlF";slowRB="HandGunLyingCrawlF";slowB="HandGunLyingCrawlF";fastF="HandGunLyingCrawlF";fastLF="HandGunLyingCrawlF";fastRF="HandGunLyingCrawlF";fastL="HandGunLyingCrawlF";fastR="HandGunLyingCrawlF";fastLB="HandGunLyingCrawlF";fastRB="HandGunLyingCrawlF";fastB="HandGunLyingCrawlF";};

class GR_PutDownEntryActions: PutDownActions {stop="PutDown";default="PutDown";};
class GR_StandPutDownEntryActions: StandPutDownActions {stop="StandPutDown";default="StandPutDown";};
class GR_CivilPutDownEntryActions: CivilPutDownActions {stop="CivilPutDown";default="CivilPutDown";};
class GR_PutDownLyingEntryActions: PutDownLyingActions {stop="PutDownLying";default="PutDownLying";};
class GR_CivilLyingPutDownEntryActions: CivilLyingPutDownActions {stop="CivilLyingPutDown";default="CivilLyingPutDown";};
class GR12_CombatEntry: CombatActions {stop="Combat";default="Combat";up="";down="";combat="Combat";crouch="Crouch";lying="Lying";stand="Stand";};
class GR12_CrouchEntry: CrouchActions {stop="Crouch";default="Crouch";up="";down="";combat="Combat";crouch="Crouch";lying="Lying";stand="Stand";};
class GR12_LyingEntry: LyingActions {stop="Lying";default="Lying";up="";down="";combat="Combat";crouch="Crouch";lying="Lying";stand="Stand";};
class GR12_CombatWalkFActions: CombatActions {down="GR12_CombatWalkFToProne";lying="GR12_CombatWalkFToProne";up="GR12_CombatWalkFToCrouch";crouch="GR12_CombatWalkFToCrouch";};
class GR12_CombatWalkLFActions: CombatActions {down="GR12_CombatWalkLFToProne";lying="GR12_CombatWalkLFToProne";up="GR12_CombatWalkLFToCrouch";crouch="GR12_CombatWalkLFToCrouch";};
class GR12_CombatWalkRFActions: CombatActions {down="GR12_CombatWalkRFToProne";lying="GR12_CombatWalkRFToProne";up="GR12_CombatWalkRFToCrouch";crouch="GR12_CombatWalkRFToCrouch";};
class GR12_CombatRunFActions: CombatActions {down="GR12_CombatRunFToProne";lying="GR12_CombatRunFToProne";up="GR12_CombatRunFToCrouch";crouch="GR12_CombatRunFToCrouch";};
class GR12_CombatRunLFActions: CombatActions {down="GR12_CombatRunLFToProne";lying="GR12_CombatRunLFToProne";up="GR12_CombatRunLFToCrouch";crouch="GR12_CombatRunLFToCrouch";};
class GR12_CombatRunRFActions: CombatActions {down="GR12_CombatRunRFToProne";lying="GR12_CombatRunRFToProne";up="GR12_CombatRunRFToCrouch";crouch="GR12_CombatRunRFToCrouch";};
class GR12_CombatSprintFActions: CombatActions {down="GR12_CombatSprintFToProne";lying="GR12_CombatSprintFToProne";up="GR12_CombatSprintFToCrouch";crouch="GR12_CombatSprintFToCrouch";};
class GR12_CombatSprintLFActions: CombatActions {down="GR12_CombatSprintLFToProne";lying="GR12_CombatSprintLFToProne";up="GR12_CombatSprintLFToCrouch";crouch="GR12_CombatSprintLFToCrouch";};
class GR12_CombatSprintRFActions: CombatActions {down="GR12_CombatSprintRFToProne";lying="GR12_CombatSprintRFToProne";up="GR12_CombatSprintRFToCrouch";crouch="GR12_CombatSprintRFToCrouch";};
class GR12_CrouchWalkFActions: CrouchActions {upDegree=8;down="GR12_CrouchWalkFToProne";lying="GR12_CrouchWalkFToProne";up="GR12_CrouchWalkFToCrouch";crouch="GR12_CrouchWalkFToCrouch";};
class GR12_CrouchWalkLFActions: CrouchActions {upDegree=8;down="GR12_CrouchWalkLFToProne";lying="GR12_CrouchWalkLFToProne";up="GR12_CrouchWalkLFToCrouch";crouch="GR12_CrouchWalkLFToCrouch";};
class GR12_CrouchWalkRFActions: CrouchActions {upDegree=8;down="GR12_CrouchWalkRFToProne";lying="GR12_CrouchWalkRFToProne";up="GR12_CrouchWalkRFToCrouch";crouch="GR12_CrouchWalkRFToCrouch";};
class GR12_CrouchRunFActions: CrouchActions {upDegree=8;down="GR12_CrouchRunFToProne";lying="GR12_CrouchRunFToProne";up="GR12_CrouchRunFToCrouch";crouch="GR12_CrouchRunFToCrouch";};
class GR12_CrouchRunLFActions: CrouchActions {upDegree=8;down="GR12_CrouchRunLFToProne";lying="GR12_CrouchRunLFToProne";up="GR12_CrouchRunLFToCrouch";crouch="GR12_CrouchRunLFToCrouch";};
class GR12_CrouchRunRFActions: CrouchActions {upDegree=8;down="GR12_CrouchRunRFToProne";lying="GR12_CrouchRunRFToProne";up="GR12_CrouchRunRFToCrouch";crouch="GR12_CrouchRunRFToCrouch";};
class GR12_CrouchSprintFActions: CrouchActions {upDegree=8;down="GR12_CrouchSprintFToProne";lying="GR12_CrouchSprintFToProne";up="GR12_CrouchSprintFToCrouch";crouch="GR12_CrouchSprintFToCrouch";};
class GR12_CrouchSprintLFActions: CrouchActions {upDegree=8;down="GR12_CrouchSprintLFToProne";lying="GR12_CrouchSprintLFToProne";up="GR12_CrouchSprintLFToCrouch";crouch="GR12_CrouchSprintLFToCrouch";};
class GR12_CrouchSprintRFActions: CrouchActions {upDegree=8;down="GR12_CrouchSprintRFToProne";lying="GR12_CrouchSprintRFToProne";up="GR12_CrouchSprintRFToCrouch";crouch="GR12_CrouchSprintRFToCrouch";};

class GR12_CombatRunFEntry: GR12_CombatEntry {stop="CombatRunF";default="CombatRunF";};

class GR18_LauncherCrouchActions: WeaponActions {



stop="Weapon";
default="Weapon";
weaponOn="Weapon";
up="Weapon";
down="Weapon";
crouch="Weapon";
combat="Weapon";
stand="Weapon";
lying="Weapon";
upDegree=1;
weaponOff="Crouch";
reloadAT="WeaponReloadAT";
walkF="WeaponWalkF";
slowF="WeaponWalkF";
fastF="WeaponWalkF";
walkB="WeaponWalkB";
slowB="WeaponWalkB";
fastB="WeaponWalkB";
walkL="WeaponWalkL";
slowL="WeaponWalkL";
fastL="WeaponWalkL";
walkR="WeaponWalkR";
slowR="WeaponWalkR";
fastR="WeaponWalkR";
walkLF="WeaponWalkLF";
slowLF="WeaponWalkLF";
fastLF="WeaponWalkLF";
walkRF="WeaponWalkRF";
slowRF="WeaponWalkRF";
fastRF="WeaponWalkRF";
walkLB="WeaponWalkLB";
slowLB="WeaponWalkLB";
fastLB="WeaponWalkLB";
walkRB="WeaponWalkRB";
slowRB="WeaponWalkRB";
fastRB="WeaponWalkRB";
turnL="WeaponTurnL";
turnR="WeaponTurnR";};class GR18_LauncherDownActions: GR18_LauncherCrouchActions {
stop="Weapon";
default="Weapon";
weaponOn="Weapon";
up="Weapon";
down="Weapon";
crouch="Weapon";
combat="Weapon";
stand="Weapon";
lying="Weapon";
upDegree=1;
weaponOff="Crouch";
reloadAT="WeaponReloadAT";
walkF="WeaponWalkF";
slowF="WeaponWalkF";
fastF="WeaponWalkF";
walkB="WeaponWalkB";
slowB="WeaponWalkB";
fastB="WeaponWalkB";
walkL="WeaponWalkL";
slowL="WeaponWalkL";
fastL="WeaponWalkL";
walkR="WeaponWalkR";
slowR="WeaponWalkR";
fastR="WeaponWalkR";
walkLF="WeaponWalkLF";
slowLF="WeaponWalkLF";
fastLF="WeaponWalkLF";
walkRF="WeaponWalkRF";
slowRF="WeaponWalkRF";
fastRF="WeaponWalkRF";
walkLB="WeaponWalkLB";
slowLB="WeaponWalkLB";
fastLB="WeaponWalkLB";
walkRB="WeaponWalkRB";
slowRB="WeaponWalkRB";
fastRB="WeaponWalkRB";
turnL="WeaponTurnL";
turnR="WeaponTurnR";};class GR18_LauncherUpActions: WeaponActions {
stop="Weapon";
default="Weapon";
weaponOn="Weapon";
up="Weapon";
down="Weapon";
crouch="Weapon";
combat="Weapon";
stand="Weapon";
lying="Weapon";
upDegree=1;
weaponOff="Crouch";
reloadAT="WeaponReloadAT";
walkF="WeaponWalkF";
slowF="WeaponWalkF";
fastF="WeaponWalkF";
walkB="WeaponWalkB";
slowB="WeaponWalkB";
fastB="WeaponWalkB";
walkL="WeaponWalkL";
slowL="WeaponWalkL";
fastL="WeaponWalkL";
walkR="WeaponWalkR";
slowR="WeaponWalkR";
fastR="WeaponWalkR";
walkLF="WeaponWalkLF";
slowLF="WeaponWalkLF";
fastLF="WeaponWalkLF";
walkRF="WeaponWalkRF";
slowRF="WeaponWalkRF";
fastRF="WeaponWalkRF";
walkLB="WeaponWalkLB";
slowLB="WeaponWalkLB";
fastLB="WeaponWalkLB";
walkRB="WeaponWalkRB";
slowRB="WeaponWalkRB";
fastRB="WeaponWalkRB";
turnL="WeaponTurnL";
turnR="WeaponTurnR";};

class GR19_PatrolActions: NoActions {stop="CombatRelaxed";stopRelaxed="CombatRelaxed";turnL="CombatTurnLRelaxed";turnR="CombatTurnRRelaxed";turnLRelaxed="CombatTurnLRelaxed";turnRRelaxed="CombatTurnRRelaxed";walkF="GR19_PatrolWalkF";walkB="GR19_PatrolWalkB";walkL="GR19_PatrolWalkL";walkR="GR19_PatrolWalkR";walkLF="GR19_PatrolWalkLF";walkRF="GR19_PatrolWalkRF";walkLB="GR19_PatrolWalkLB";walkRB="GR19_PatrolWalkRB";slowF="GR19_PatrolRunF";slowB="GR19_PatrolRunB";slowL="GR19_PatrolRunL";slowR="GR19_PatrolRunR";slowLF="GR19_PatrolRunLF";slowRF="GR19_PatrolRunRF";slowLB="GR19_PatrolRunLB";slowRB="GR19_PatrolRunRB";
fastF="CombatSprintF";
fastLF="CombatSprintLF";
fastRF="CombatSprintRF";
fastB="CombatRunB";
fastL="CombatRunL";
fastR="CombatRunR";
fastLB="CombatRunLB";
fastRB="CombatRunRB";};
class GR34_EastPatrolActions: NoActions {stop="GR34_EastReady";stopRelaxed="GR34_EastReady";turnL="GR34_EastTurnL";turnR="GR34_EastTurnR";turnLRelaxed="GR34_EastTurnL";turnRRelaxed="GR34_EastTurnR";walkF="GR34_EastWalkF";walkB="GR34_EastWalkB";walkL="GR34_EastWalkL";walkR="GR34_EastWalkR";walkLF="GR34_EastWalkLF";walkRF="GR34_EastWalkRF";walkLB="GR34_EastWalkLB";walkRB="GR34_EastWalkRB";slowF="GR34_EastRunF";slowB="GR34_EastRunB";slowL="GR34_EastRunL";slowR="GR34_EastRunR";slowLF="GR34_EastRunLF";slowRF="GR34_EastRunRF";slowLB="GR34_EastRunLB";slowRB="GR34_EastRunRB";
fastF="CombatSprintF";
fastLF="CombatSprintLF";
fastRF="CombatSprintRF";
fastB="CombatRunB";
fastL="CombatRunL";
fastR="CombatRunR";
fastLB="CombatRunLB";
fastRB="CombatRunRB";};};
	class BlendAnims
	{
		aimingDefault[]=
		{
			"hlava",
			1,"gr_head",1,
			"krk",
			1,"gr_neck2",1,"gr_neck",1,
			"zbran",
			1,
			"roura",
			1,
			"lrameno",
			1,
			"prameno",
			1,
			"lbiceps",
			1,"gr_lbicep",1,
			"lloket",
			1,"gr_lforearm",1,
			"lruka",
			1,"gr_lhand",1,
			"pbiceps",
			1,"gr_rbicep",1,
			"ploket",
			1,"gr_rforearm",1,
			"pruka",
			1,"gr_rhand",1,
			"hrudnik",
			0.900000,"gr_spinetop",0.900000,
			"zebra",
			0.500000,"gr_spinemid",0.500000,
			"bricho",
			0.200000,"gr_spinelow",0.200000
		};
		legsDefault[]=
		{
			"lprsty",
			1,
			"pprsty",
			1,
			"lchodidlo",
			1,
			"pchodidlo",
			1,
			"lholen",
			0.950000,
			"pholen",
			0.950000,
			"lstehno",
			0.900000,
			"pstehno",
			0.900000,
			"lzadek",
			0.500000,
			"pzadek",
			0.500000
		};
		headDefault[]=
		{
			"hlava",
			1,"gr_head",1,
			"krk",
			0.500000,"gr_neck2",0.500000,"gr_neck",0.500000
		};
		aimingLying[]=
		{
			"hlava",
			1,"gr_head",1,
			"krk",
			0.900000,"gr_neck2",0.900000,"gr_neck",0.900000,
			"lrameno",
			0.500000,
			"prameno",
			0.500000,
			"hrudnik",
			0.800000,"gr_spinetop",0.800000,
			"zebra",
			0.500000,"gr_spinemid",0.500000
		};
		aimingNo[]={};
		legsNo[]={};
		headNo[]={};
	};
	class Default
	{
		access=3;
		actions="StandActions";
		file="";
		looped=1;
		speed=0.500000;
		disableWeapons=0;
		enableOptics=1;
		disableWeaponsLong=0;
		showWeaponAim=1;
		enableMissile=0;
		enableBinocular=0;
		showItemInHand=0;
		showItemInRightHand=0;
		showHandGun=0;
		onLandBeg=0;
		onLandEnd=0;
		onLadder=0;
		duty=-0.500000;
		visibleSize=1;
		aimPrecision=1;
		recoilSuffix="";
		relSpeedMin=1;
		relSpeedMax=1;
		soundEnabled=1;
		soundOverride="";
		soundEdge1=0.500000;
		soundEdge2=1;
		terminal=0;
		limitGunMovement=1;
		variantsPlayer[]={};
		variantsAI[]=
		{
			""
		};
		equivalentTo="";
		connectAs="";
		variantAfter[]={5,10,20};
		connectFrom[]={};
		connectTo[]={};
		interpolateWith[]={};
		interpolateTo[]={};
		interpolateFrom[]={};
		aiming="aimingDefault";
		legs="legsDefault";
		head="headDefault";
		interpolationSpeed=6;
		interpolationRestart=0;
		preload=0;
	};
	class StandBase: Default
	{
		limitGunMovement=0;
		aiming="aimingNo";
		disableWeapons=1;
		disableWeaponsLong=1;
	};
	class LadderBase: StandBase
	{
		actions="LadderActions";
		aiming="aimingNo";
		legs="legsNo";
		onLadder=1;
		disableWeapons=1;
	};
	class LadderUpBase: LadderBase
	{
		actions="LadderUpActions";
	};
	class LadderDownBase: LadderBase
	{
		actions="LadderDownActions";
	};
	class DefaultDie: Default
	{
		limitGunMovement=0;
		aiming="aimingNo";
		legs="legsNo";
		head="headNo";
		disableWeapons=1;
		interpolationRestart=1;
		soundOverride="fallbody";
		soundEdge1=0.450000;
		soundEdge2=0.450000;
	};
	class States
	{
		class DeadState: Default
		{
file="\dbsgr\anim\a5ef69eaa.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class Stand: StandBase
		{
























			actions="StandActions";
			
			
			looped=1;
			soundEnabled=0;
			
			
			equivalentTo="Stand";
			interpolationSpeed=2;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		










connectTo[]={};






aiming="aimingNo";
variantsPlayer[]={};
variantsAI[]={"GR18_LowReadyIdle1",0.5,"GR18_LowReadyIdle2",0.5};
variantAfter[]={6,11,18};
file="\dbsgr\anim\gr20_patrol_ready.rtm";
speed=-2;};
		class StandVar2: Stand
		{
			
			
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;

variantsAI[]={};

variantsPlayer[]={};

variantAfter[]={0,0,0};
};
		class StandWalkF: StandBase
		{
file="\dbsgr\anim\a8a7d5614.rtm";speed=-1.2333333333333334;























			actions="StandActions";
			
			
			looped=1;
			duty=-0.700000;
			relSpeedMin=0.700000;
			relSpeedMax=1;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandWalkLF: StandWalkF
		{
			file="\dbsgr\anim\f0f5d4313.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkRF: StandWalkF
		{
			file="\dbsgr\anim\f6fb871ed.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkL: StandWalkF
		{
			file="\dbsgr\anim\f1053c5d8.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkR: StandWalkF
		{
			file="\dbsgr\anim\f70cfa607.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkLB: StandWalkF
		{
			file="\dbsgr\anim\fa46cde12.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkRB: StandWalkF
		{
			file="\dbsgr\anim\faace7cec.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandWalkB: StandWalkF
		{
			file="\dbsgr\anim\f88dbea82.rtm";
			speed=-1.530000;
			looped=1;
		};
		class StandRunF: StandWalkF
		{
























			
			
			duty=-0.500000;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		
file="\dbsgr\anim\a3bf21e22.rtm";
speed=-0.6109590387877216;};
		class StandToCombat: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\fe5319a64.rtm";
			speed=-1.800000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToStand: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f43bd41c1.rtm";
			speed=-1.500000;
			looped=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class CombatToLying: Default
		{






















			
			
			
			
			onLandEnd=1;
			enableOptics=0;
			
			soundEnabled=1;
			soundOverride="laydown";
			soundEdge1=0.100000;
			soundEdge2=0.100000;
		






file="\dbsgr\anim\stance_stand_prone.rtm";



looped=0;

actions="GR12_LyingEntry";

connectFrom[]={"Combat",1.0};

connectTo[]={"Lying",1.0};

interpolateTo[]={"LyingDying",1};

interpolateWith[]={};

speed=-1.8;};
		class CombatRunFToLying: Default
		{






















			
			
			
			
			onLandEnd=1;
			disableWeapons=1;
			soundEnabled=1;
			
			soundOverride="laydown";
			soundEdge1=0.100000;
			soundEdge2=0.100000;
		
file="\dbsgr\anim\stance_stand_prone_run.rtm";



looped=0;

actions="GR12_LyingEntry";

connectFrom[]={"CombatRunF",1.0};

connectTo[]={"Lying",1.0};

interpolateTo[]={"LyingDying",1};

interpolateWith[]={};

speed=-1.8;};
		class LyingToCombat: Default
		{






















			
			
			
			
			onLandBeg=1;
			enableOptics=0;
			
			soundEnabled=1;
			soundOverride="standup";
			soundEdge1=0.010000;
			soundEdge2=0.010000;
		
file="\dbsgr\anim\stance_prone_stand.rtm";



looped=0;

actions="GR12_CombatEntry";

connectFrom[]={"Lying",1.0};

connectTo[]={"Combat",1.0};

interpolateTo[]={"CombatDying",1};

interpolateWith[]={};

speed=-1.95;};
		class LyingToCombatRun: Default
		{






















			
			
			
			
			onLandBeg=1;
			disableWeapons=1;
			soundEnabled=1;
			
			soundOverride="standup";
			soundEdge1=0;
			soundEdge2=0;
		
file="\dbsgr\anim\stance_prone_stand.rtm";



looped=0;

actions="GR12_CombatRunFEntry";

connectFrom[]={"Lying",1.0};

connectTo[]={"CombatRunF",1.0};

interpolateTo[]={"CombatRunFDying",1};

interpolateWith[]={};

speed=-1.95;};
		class Combat: Default
		{
























			actions="CombatActions";
			preload=1;
			
			
			looped=1;
			soundEnabled=0;
			duty=-1;
			
			
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;







connectTo[]={};

variantsPlayer[]={};
variantsAI[]={"GR16_CombatIdle1",0.333333,"GR16_CombatIdle2",0.333333,"GR16_CombatIdle3",0.333333};
variantAfter[]={6,11,18};};
		class CombatRelaxed: Combat
		{
			actions="CombatRelaxedActions";
			
			
			looped=1;
			disableWeapons=0;
			
			interpolateTo[]={"CombatRelaxedDying",0.100000,"CombatRelaxedDyingVer2",0.100000};
		










connectTo[]={};






aiming="aimingDefault";
variantsPlayer[]={};
variantsAI[]={"GR18_LowReadyIdle1",0.5,"GR18_LowReadyIdle2",0.5};
variantAfter[]={6,11,18};
file="\dbsgr\anim\gr20_patrol_ready.rtm";
speed=-2;};
		class CombatStillV1: Combat
		{
			
			
			looped=1;
			equivalentTo="Combat";
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;

variantsAI[]={};

variantsPlayer[]={};

variantAfter[]={0,0,0};

connectTo[]={};
};
		class CombatStillPlayer: Combat
		{
			
			
			looped=1;
			equivalentTo="Combat";
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;

variantsAI[]={};

variantsPlayer[]={};

variantAfter[]={0,0,0};

connectTo[]={};
};
		class CombatRelaxedStill: Combat
		{
			actions="CombatRelaxedActions";
			
			
			looped=1;
			disableWeapons=0;
			equivalentTo="CombatRelaxed";
		
file="\dbsgr\anim\a215d1b25.rtm";

speed=-0.3166666667;

variantsAI[]={};

variantsPlayer[]={};

variantAfter[]={0,0,0};

connectTo[]={};
};
		class CombatReloadMagazine: Default
		{
file="\dbsgr\anim\abc269f19.rtm";speed=-2.5;























			preload=1;
			actions="CombatActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToBinoc: Default
		{
			actions="CombatActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_draw.rtm";
speed=-1.3333333333333335;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class Binoc: Default
		{
			actions="BinocActions";
			
			
			
			disableWeapons=0;
			showItemInHand=1;
			soundEnabled=0;
			enableBinocular=1;
			head="headNo";
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_ready.rtm";
speed=-2;
looped=1;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocToCombat: Default
		{
			actions="CombatActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_holster.rtm";
speed=-1.5;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class Crouch: Combat
		{
file="\dbsgr\anim\gr36_a4ed8acc9.rtm";speed=-0.3333333333333333;























			preload=1;
			actions="CrouchActions";
			
			
			
			
			visibleSize=0.600000;
			aimPrecision=0.500000;
			recoilSuffix="halffixed";
		




interpolateWith[]={"CrouchWalkL",0.1,"CrouchWalkR",0.1,"CrouchRunL",0.1,"CrouchRunR",0.1,"CrouchWalkB",0.1,"CrouchRunB",0.1,"CrouchWalkF",0.1,"CrouchRunF",0.1,"CrouchSprintF",0.1,"CrouchWalkLF",0.1,"CrouchWalkRF",0.1,"CrouchWalkLB",0.1,"CrouchWalkRB",0.1,"CrouchRunLF",0.1,"CrouchRunRF",0.1,"CrouchRunLB",0.1,"CrouchRunRB",0.1,"CrouchSprintLF",0.1,"CrouchSprintRF",0.1};

connectTo[]={};

variantsPlayer[]={};
variantsAI[]={"GR16_CrouchIdle1",0.333333,"GR16_CrouchIdle2",0.333333,"GR16_CrouchIdle3",0.333333};
variantAfter[]={6,11,18};};
		class CrouchIM: Combat
		{
			actions="CrouchActions";
			speed=10000000000.000000;
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class CrouchToCombat: Default
		{






















			preload=1;
			
			
			
			
			soundEnabled=0;
			enableOptics=0;
			
			
			
		
file="\dbsgr\anim\gr36_stance_crouch_stand.rtm";



looped=0;

actions="GR12_CombatEntry";

connectFrom[]={"Crouch",1.0};

connectTo[]={"Combat",1.0};

interpolateTo[]={"CombatDying",1};

interpolateWith[]={};

speed=-0.7;};
		class CrouchToCrouchSprintF: Default
		{
file="\dbsgr\anim\a6f126362.rtm";speed=-0.18;











			preload=1;
			actions="CrouchRunFActions";
			
			
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Crouch",0.400000};
			enableOptics=0;
			connectTo[]={"CrouchSprintF",0.400000};
			interpolateTo[]={"Crouch",1};
		};
		class CombatToCrouch: Default
		{






















			preload=1;
			
			
			
			
			soundEnabled=0;
			enableOptics=0;
			
			
			
		
file="\dbsgr\anim\gr36_stance_stand_crouch.rtm";



looped=0;

actions="GR12_CrouchEntry";

connectFrom[]={"Combat",1.0};

connectTo[]={"Crouch",1.0};

interpolateTo[]={"CrouchDying",1};

interpolateWith[]={};

speed=-0.65;};
		class CrouchToLying: Default
		{






















			preload=1;
			
			
			
			
			
			
			soundEnabled=1;
			enableOptics=0;
			soundOverride="laydown";
			soundEdge1=0.100000;
			soundEdge2=0.100000;
			onLandEnd=1;
			
		






file="\dbsgr\anim\gr36_stance_crouch_prone.rtm";



looped=0;

actions="GR12_LyingEntry";

connectFrom[]={"Crouch",1.0};

connectTo[]={"Lying",1.0};

interpolateTo[]={"LyingDying",1};

interpolateWith[]={};

speed=-1.15;};
		class LyingToCrouch: Default
		{






















			preload=1;
			
			
			
			
			
			
			soundEnabled=1;
			enableOptics=0;
			soundOverride="standup";
			soundEdge1=0.010000;
			soundEdge2=0.010000;
			onLandBeg=1;
			
		
file="\dbsgr\anim\gr36_stance_prone_crouch.rtm";



looped=0;

actions="GR12_CrouchEntry";

connectFrom[]={"Lying",1.0};

connectTo[]={"Crouch",1.0};

interpolateTo[]={"CrouchDying",1};

interpolateWith[]={};

speed=-1.2;};
		class CrouchReloadMagazine: Default
		{
file="\dbsgr\anim\a96b2a6e5.rtm";speed=-1.8166666666666667;























			preload=1;
			actions="CrouchActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			visibleSize=0.600000;
			aimPrecision=0.500000;
			recoilSuffix="halffixed";
			connectFrom[]={"Crouch",1};
			connectTo[]={"Crouch",1};
			interpolateTo[]={"CrouchDying",0.100000};
		};
		class CrouchDying: DefaultDie
		{
file="\dbsgr\anim\aa7c6a2ab.rtm";speed=-1.65;











			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			connectFrom[]={"Crouch",1};
			connectTo[]={"CrouchDead",1};
		};
		class CrouchDead: CrouchDying
		{
file="\dbsgr\anim\a6a5e86f2.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CrouchToWeapon: Default
		{
			
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			
			
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		




variantsAI[]={};

variantsPlayer[]={};

looped=0;




speed=-1.0166666666666666;

connectFrom[]={"Crouch",1};

file="\dbsgr\anim\gr42_gr18_launcher_crouch_draw.rtm";
actions="WeaponActions";
connectTo[]={"Weapon",1};};
		class WeaponToCrouch: Default
		{
			actions="CrouchActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Weapon",1.200000};
			
			interpolateTo[]={"CrouchDying",0.100000};
		
file="\dbsgr\anim\gr42_launcher_holster.rtm";

speed=-1.0;

variantsAI[]={};

variantsPlayer[]={};

looped=0;

connectTo[]={"Crouch",0.02};
};
		class LyingToBinocLying: Default
		{
			actions="LyingActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			showItemInHand=1;
			onLandBeg=1;
			onLandEnd=1;
			interpolateTo[]={"LyingDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_prone_draw.rtm";
speed=-1.35;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocLying: Default
		{
			actions="BinocLyingActions";
			
			
			
			disableWeapons=0;
			showItemInHand=1;
			soundEnabled=0;
			enableBinocular=1;
			onLandBeg=1;
			onLandEnd=1;
			duty=-1;
			interpolateTo[]={"LyingDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_prone_ready.rtm";
speed=-2;
looped=1;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocLyingToLying: Default
		{
			actions="LyingActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			onLandBeg=1;
			onLandEnd=1;
			interpolateTo[]={"LyingDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_prone_holster.rtm";
speed=-1.6833333333333331;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class StandToBinocStand: Default
		{
			actions="StandActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			connectFrom[]={"Stand",2};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_draw.rtm";
speed=-1.3333333333333335;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocStand: Default
		{
			actions="BinocStandActions";
			
			
			
			disableWeapons=0;
			showItemInHand=1;
			soundEnabled=0;
			enableBinocular=1;
			connectFrom[]={"StandToBinocStand",1};
			connectTo[]={"BinocStandToStand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_ready.rtm";
speed=-2;
looped=1;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocStandToStand: Default
		{
			actions="StandActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			connectTo[]={"Stand",2};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
file="\dbsgr\anim\gr24_binoc_stand_holster.rtm";
speed=-1.5;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class StandThrowGrenadeStart: Default
		{
			actions="StandActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class StandThrowGrenadeEnd: Default
		{
			actions="StandActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CombatToTakeFlag: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f45e82281.rtm";
			speed=-0.700000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class TakeFlag: Default
		{
			actions="TakeFlagActions";
			file="\dbsgr\anim\f78fefd42.rtm";
			speed=-2.500000;
			looped=1;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CombatToTakeFlag",2};
			connectTo[]={"TakeFlagToCombat",2};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class TakeFlagToCombat: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\fa5f790c0.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToPutDown: Default
		{
file="\dbsgr\anim\a92025e45.rtm";speed=-0.6666666666666666;















			
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
actions="GR_PutDownEntryActions";
};
		class PutDown: Default
		{
file="\dbsgr\anim\a451be3a4.rtm";speed=-2.0;















			actions="PutDownActions";
			
			
			
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CombatToPutDown",2};
			connectTo[]={"PutDownToCombat",2};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class PutDownToCombat: Default
		{
file="\dbsgr\anim\a6f126362.rtm";speed=-1.0;















			actions="CombatActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToMedic: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\fd84295fb.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class Medic: Default
		{
			actions="MedicActions";
			file="\dbsgr\anim\f0abdd0b7.rtm";
			speed=-3;
			looped=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CombatToMedic",2};
			connectTo[]={"MedicToCombat",2};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class MedicToCombat: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f06cd9c5f.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatToTreated: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f2273d3a4.rtm";
			speed=-5;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class Treated: Default
		{
			actions="TreatedActions";
			file="\dbsgr\anim\fbecc4932.rtm";
			speed=-3;
			looped=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CombatToTreated",2};
			connectTo[]={"TreatedToCombat",2};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class TreatedToCombat: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f5f8646ab.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class StandToStandTakeFlag: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f4a4dd9f8.rtm";
			speed=-0.700000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Stand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandTakeFlag: Default
		{
			actions="StandTakeFlagActions";
			file="\dbsgr\anim\fe022ccfd.rtm";
			speed=-2.500000;
			looped=1;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"StandToStandTakeFlag",2};
			connectTo[]={"StandTakeFlagToStand",2};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandTakeFlagToStand: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f15071344.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Stand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandToStandPutDown: Default
		{
file="\dbsgr\anim\a92025e45.rtm";speed=-0.6666666666666666;















			
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Stand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
actions="GR_StandPutDownEntryActions";
};
		class StandPutDown: Default
		{
file="\dbsgr\anim\a451be3a4.rtm";speed=-2.0;















			actions="StandPutDownActions";
			
			
			
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"StandToStandPutDown",2};
			connectTo[]={"StandPutDownToStand",2};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class StandPutDownToStand: Default
		{
file="\dbsgr\anim\a6f126362.rtm";speed=-1.0;















			actions="StandActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Stand",1};
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class CivilToCivilTakeFlag: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\f88659298.rtm";
			speed=-0.700000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Civil",1};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilTakeFlag: Default
		{
			actions="CivilTakeFlagActions";
			file="\dbsgr\anim\fc3a6fdab.rtm";
			speed=-2.500000;
			looped=1;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CivilToCivilTakeFlag",2};
			connectTo[]={"CivilTakeFlagToCivil",2};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilTakeFlagToCivil: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\fdf1a80b2.rtm";
			speed=-1;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Civil",1};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilToCivilPutDown: Default
		{
file="\dbsgr\anim\a92025e45.rtm";speed=-0.6666666666666666;















			
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Civil",1};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		
actions="GR_CivilPutDownEntryActions";
};
		class CivilPutDown: Default
		{
file="\dbsgr\anim\a451be3a4.rtm";speed=-2.0;















			actions="CivilPutDownActions";
			
			
			
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CivilToCivilPutDown",2};
			connectTo[]={"CivilPutDownToCivil",2};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class CivilPutDownToCivil: Default
		{
file="\dbsgr\anim\a6f126362.rtm";speed=-1.0;















			actions="CivilActions";
			
			
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Civil",1};
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class LyingToPutDownLying: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;















			
			
			
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Lying",1};
			interpolateTo[]={"LyingDying",0.100000};
		
actions="GR_PutDownLyingEntryActions";
};
		class PutDownLying: Default
		{
file="\dbsgr\anim\ad175c236.rtm";speed=-1.6666666666666667;















			actions="PutDownLyingActions";
			
			
			
			visibleSize=0.280000;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"LyingToPutDownLying",2};
			connectTo[]={"PutDownLyingToLying",2};
			interpolateTo[]={"LyingDying",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class PutDownLyingToLying: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;















			actions="LyingActions";
			
			
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Lying",1};
			interpolateTo[]={"LyingDying",0.100000};
		};
		class LyingToTreatedLying: Default
		{
			actions="LyingActions";
			file="\dbsgr\anim\ffd264806.rtm";
			speed=-5;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Lying",1};
			interpolateTo[]={"LyingDying",0.100000};
		};
		class TreatedLying: Default
		{
			actions="TreatedLyingActions";
			file="\dbsgr\anim\fe366f0ce.rtm";
			speed=-3;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"LyingToTreatedLying",2};
			connectTo[]={"TreatedLyingToLying",2};
			interpolateTo[]={"LyingDying",0.100000};
		};
		class TreatedLyingToLying: Default
		{
			actions="LyingActions";
			file="\dbsgr\anim\fe18a55e5.rtm";
			speed=-1;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"Lying",1};
			interpolateTo[]={"LyingDying",0.100000};
		};
		class CivilLyingToCivilLyingTakeFlag: Default
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\fb982d27b.rtm";
			speed=-1;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"CivilLying",1};
			interpolateTo[]={"CivilLyingDying",0.100000};
		};
		class CivilLyingTakeFlag: Default
		{
			actions="CivilLyingTakeFlagActions";
			file="\dbsgr\anim\ffddf1ce0.rtm";
			speed=-2.500000;
			looped=1;
			visibleSize=0.280000;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CivilLyingToCivilLyingTakeFlag",2};
			connectTo[]={"CivilLyingTakeFlagToCivilLying",2};
			interpolateTo[]={"CivilLyingDying",0.100000};
		};
		class CivilLyingTakeFlagToCivilLying: Default
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\fa284939d.rtm";
			speed=-1;
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"CivilLying",1};
			interpolateTo[]={"CivilLyingDying",0.100000};
		};
		class CivilLyingToCivilLyingPutDown: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;















			
			
			
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"CivilLying",1};
			interpolateTo[]={"CivilLyingDying",0.100000};
		
actions="GR_CivilLyingPutDownEntryActions";
};
		class CivilLyingPutDown: Default
		{
file="\dbsgr\anim\ad175c236.rtm";speed=-1.6666666666666667;















			actions="CivilLyingPutDownActions";
			
			
			
			visibleSize=0.280000;
			disableWeapons=1;
			disableWeaponsLong=1;
			soundEnabled=0;
			aiming="aimingNo";
			connectFrom[]={"CivilLyingToCivilLyingPutDown",2};
			connectTo[]={"CivilLyingPutDownToCivilLying",2};
			interpolateTo[]={"CivilLyingDying",0.100000};
		
looped=0;

variantsAI[]={};

variantsPlayer[]={};
};
		class CivilLyingPutDownToCivilLying: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;















			actions="CivilLyingActions";
			
			
			looped=0;
			visibleSize=0.280000;
			disableWeapons=1;
			soundEnabled=0;
			connectTo[]={"CivilLying",1};
			interpolateTo[]={"CivilLyingDying",0.100000};
		};
		class CombatReloadMGun: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f2a6ed11b.rtm";
			speed=-2.930000;
			looped=0;
			disableWeapons=1;
		};
		class CombatReloadMortarStart: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f5f3b9db8.rtm";
			speed=-2.415000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
		};
		class CombatReloadMortarEnd: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f71772ab6.rtm";
			speed=-0.700000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
		};
		class CombatThrowGrenadeStart: Default
		{
			actions="CombatActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class CombatThrowGrenadeEnd: Default
		{
			actions="CombatActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CombatRunThrowGrenadeStart: Default
		{
			actions="CombatRunFActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatRunDying",0.100000,"CombatRunDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class CombatRunThrowGrenadeEnd: Default
		{
			actions="CombatRunFActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			connectFrom[]={"Combat",1};
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CombatStrokeGun: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f3923711f.rtm";
			speed=-2.200000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
			connectFrom[]={"Combat",1};
			connectTo[]={"CombatStrokeGunEnd",1};
		};
		class CombatStrokeGunEnd: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\f01ebfb76.rtm";
			speed=10000000000.000000;
			looped=1;
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
			connectTo[]={"Combat",1};
		};
		class CombatRunF: Default
		{
























			preload=1;
			
			
			
			looped=1;
			duty=-0.500000;
			showWeaponAim=0;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		
actions="GR12_CombatRunFActions";

file="\dbsgr\anim\a3bf21e22.rtm";
speed=-0.6109590387877216;};
		class CombatRunLF: CombatRunF
		{






















			preload=0;
			
			
		
actions="GR12_CombatRunLFActions";

file="\dbsgr\anim\aff4ce2ce.rtm";
speed=-0.6109590284637683;};
		class CombatRunRF: CombatRunF
		{






















			preload=0;
			
			
		
actions="GR12_CombatRunRFActions";

file="\dbsgr\anim\ac16b53d6.rtm";
speed=-0.6109590284637683;};
		class CombatRunNF: CombatRunF
		{
			preload=0;
			actions="CombatActions";
		};
		class CombatRunL: CombatRunNF
		{
file="\dbsgr\anim\a6dfbc493.rtm";speed=-0.8166666666666667;























			
			
		};
		class CombatRunR: CombatRunNF
		{
file="\dbsgr\anim\acb034503.rtm";speed=-0.8166666666666667;























			
			
		};
		class CombatRunLB: CombatRunNF
		{
file="\dbsgr\anim\a950a1245.rtm";speed=-0.7333333333333333;





















			actions="CombatRunBActions";
			
			
		};
		class CombatRunRB: CombatRunNF
		{
file="\dbsgr\anim\a7447afb7.rtm";speed=-0.7333333333333333;





















			actions="CombatRunBActions";
			
			
		};
		class CombatRunB: CombatRunNF
		{
file="\dbsgr\anim\a6797ad5a.rtm";speed=-0.7333333333333333;























			actions="CombatRunBActions";
			
			
			soundEdge1=1;
			soundEdge2=0.500000;
		};
		class CombatSprintF: Default
		{
























			preload=1;
			
			looped=1;
			
			
			duty=0.600000;
			showWeaponAim=0;
			enableOptics=0;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		
actions="GR12_CombatSprintFActions";

file="\dbsgr\anim\gr41_east_sprintf.rtm";
speed=-0.4127062408938865;};
		class CombatSprintLF: CombatSprintF
		{






















			preload=0;
			
			
			duty=0.600000;
		
actions="GR12_CombatSprintLFActions";

file="\dbsgr\anim\gr41_east_sprintlf.rtm";
speed=-0.49881036186138555;};
		class CombatSprintRF: CombatSprintF
		{






















			preload=0;
			
			
			duty=0.600000;
		
actions="GR12_CombatSprintRFActions";

file="\dbsgr\anim\gr41_east_sprintrf.rtm";
speed=-0.4904596227440086;};
		class CombatTurnR: Default
		{
			actions="CombatActions";
			
			
			
			soundEnabled=0;
			relSpeedMin=0.900000;
			relSpeedMax=1;
		
file="\dbsgr\anim\gr19_combatturnr.rtm";
speed=-0.6;
looped=1;};
		class CombatTurnL: Default
		{
			actions="CombatActions";
			
			
			
			soundEnabled=0;
			relSpeedMin=0.900000;
			relSpeedMax=1;
		
file="\dbsgr\anim\gr19_combatturnl.rtm";
speed=-0.6;
looped=1;};
		class CombatTurnRRelaxed: CombatTurnR
		{
			
			
		
file="\dbsgr\anim\gr20_combatturnrrelaxed.rtm";
speed=-0.6;
looped=1;};
		class CombatTurnLRelaxed: CombatTurnL
		{
			
			
		
file="\dbsgr\anim\gr20_combatturnlrelaxed.rtm";
speed=-0.6;
looped=1;};
		class CombatWalkF: Default
		{
file="\dbsgr\anim\a8a7d5614.rtm";speed=-1.2333333333333334;























			
			
			
			looped=1;
			duty=-0.700000;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		
actions="GR12_CombatWalkFActions";
};
		class CombatWalkLF: CombatWalkF
		{
file="\dbsgr\anim\a03a7503d.rtm";speed=-1.2333333333333334;





















			
		
actions="GR12_CombatWalkLFActions";
};
		class CombatWalkRF: CombatWalkF
		{
file="\dbsgr\anim\a241b81c9.rtm";speed=-1.2333333333333334;





















			
		
actions="GR12_CombatWalkRFActions";
};
		class CombatWalkL: CombatWalkF
		{
file="\dbsgr\anim\a34b2cbbb.rtm";speed=-1.0666666666666667;























			
		};
		class CombatWalkR: CombatWalkF
		{
file="\dbsgr\anim\a3f8e6847.rtm";speed=-1.0666666666666667;























			
		};
		class CombatWalkLB: CombatWalkF
		{
file="\dbsgr\anim\a8c61a280.rtm";speed=-1.3166666666666667;





















			
		};
		class CombatWalkRB: CombatWalkF
		{
file="\dbsgr\anim\a325f4bf0.rtm";speed=-1.3166666666666667;





















			
		};
		class CombatWalkB: CombatWalkF
		{
file="\dbsgr\anim\ab09d445f.rtm";speed=-1.3166666666666667;























			
		};
		class CrouchRunF: CombatRunF
		{
file="\dbsgr\anim\a8e9756dc.rtm";speed=-0.8166666666666667;























			
			connectAs="CombatRunF";
			interpolateTo[]={"Crouch",1};
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchRunFActions";
};
		class CrouchRunLF: CombatRunLF
		{
file="\dbsgr\anim\ab8b3d534.rtm";speed=-0.8166666666666667;





















			
			connectAs="CombatRunLF";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchRunLFActions";
};
		class CrouchRunRF: CombatRunRF
		{
file="\dbsgr\anim\a539ea455.rtm";speed=-0.8166666666666667;





















			
			connectAs="CombatRunRF";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchRunRFActions";
};
		class CrouchRunL: CombatRunL
		{
file="\dbsgr\anim\a6dfbc493.rtm";speed=-0.8166666666666667;























			actions="CrouchRunFActions";
			connectAs="CombatRunL";
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchRunR: CombatRunR
		{
file="\dbsgr\anim\acb034503.rtm";speed=-0.8166666666666667;























			actions="CrouchRunFActions";
			connectAs="CombatRunR";
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchRunLB: CombatRunLB
		{
file="\dbsgr\anim\a950a1245.rtm";speed=-0.7333333333333333;





















			actions="CrouchRunBActions";
			connectAs="CombatRunLB";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchRunRB: CombatRunRB
		{
file="\dbsgr\anim\a7447afb7.rtm";speed=-0.7333333333333333;





















			actions="CrouchRunBActions";
			connectAs="CombatRunRB";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchRunB: CombatRunB
		{
file="\dbsgr\anim\a6797ad5a.rtm";speed=-0.7333333333333333;























			actions="CrouchRunBActions";
			connectAs="CombatRunB";
			
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkF: CombatWalkF
		{
file="\dbsgr\anim\a8a7d5614.rtm";speed=-1.2333333333333334;























			
			connectAs="CombatWalkF";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchWalkFActions";
};
		class CrouchWalkLF: CombatWalkLF
		{
file="\dbsgr\anim\a03a7503d.rtm";speed=-1.2333333333333334;





















			
			connectAs="CombatWalkLF";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchWalkLFActions";
};
		class CrouchWalkRF: CombatWalkRF
		{
file="\dbsgr\anim\a241b81c9.rtm";speed=-1.2333333333333334;





















			
			connectAs="CombatWalkRF";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchWalkRFActions";
};
		class CrouchWalkL: CombatWalkL
		{
file="\dbsgr\anim\a34b2cbbb.rtm";speed=-1.0666666666666667;























			actions="CrouchActions";
			connectAs="CombatWalkL";
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkR: CombatWalkR
		{
file="\dbsgr\anim\a3f8e6847.rtm";speed=-1.0666666666666667;























			actions="CrouchActions";
			connectAs="CombatWalkR";
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkLB: CombatWalkLB
		{
file="\dbsgr\anim\a8c61a280.rtm";speed=-1.3166666666666667;





















			actions="CrouchActions";
			connectAs="CombatWalkLB";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkRB: CombatWalkRB
		{
file="\dbsgr\anim\a325f4bf0.rtm";speed=-1.3166666666666667;





















			actions="CrouchActions";
			connectAs="CombatWalkRB";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchWalkB: CombatWalkB
		{
file="\dbsgr\anim\ab09d445f.rtm";speed=-1.3166666666666667;























			actions="CrouchActions";
			connectAs="CombatWalkB";
			enableOptics=0;
			
		




interpolateWith[]={"Crouch",0.1};
};
		class CrouchSprintF: CombatSprintF
		{
file="\dbsgr\anim\a3bf21e22.rtm";speed=-0.5666666666666667;























			
			connectAs="CombatSprintF";
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchSprintFActions";
};
		class CrouchSprintLF: CombatSprintLF
		{
file="\dbsgr\anim\aff4ce2ce.rtm";speed=-0.5666666666666667;





















			
			connectAs="CombatSprintLF";
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchSprintLFActions";
};
		class CrouchSprintRF: CombatSprintRF
		{
file="\dbsgr\anim\ac16b53d6.rtm";speed=-0.5666666666666667;





















			
			connectAs="CombatSprintRF";
			enableOptics=0;
		




interpolateWith[]={"Crouch",0.1};

actions="GR12_CrouchSprintRFActions";
};
		class CrouchTurnR: CombatTurnR
		{
			actions="CrouchActions";
			connectAs="CombatTurnR";
		
file="\dbsgr\anim\gr36_gr19_crouchturnr.rtm";
speed=-0.6;
looped=1;};
		class CrouchTurnL: CombatTurnL
		{
			actions="CrouchActions";
			connectAs="CombatTurnL";
		
file="\dbsgr\anim\gr36_gr19_crouchturnl.rtm";
speed=-0.6;
looped=1;};
		class CrouchToBinocCrouch: Default
		{
			actions="CrouchActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			connectFrom[]={"Crouch",2};
			interpolateTo[]={"CrouchDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_crouch_draw.rtm";
speed=-1.3333333333333335;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocCrouch: Default
		{
			actions="BinocCrouchActions";
			
			
			
			disableWeapons=0;
			showItemInHand=1;
			soundEnabled=0;
			enableBinocular=1;
			connectFrom[]={"CrouchToBinocCrouch",1};
			connectTo[]={"BinocCrouchToCrouch",1};
			interpolateTo[]={"CrouchDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_crouch_ready.rtm";
speed=-2;
looped=1;
variantsAI[]={};
variantsPlayer[]={};};
		class BinocCrouchToCrouch: Default
		{
			actions="CrouchActions";
			
			
			
			disableWeapons=1;
			showItemInHand=1;
			soundEnabled=0;
			connectTo[]={"Crouch",2};
			interpolateTo[]={"CrouchDying",0.100000};
		
file="\dbsgr\anim\gr24_binoc_crouch_holster.rtm";
speed=-1.5;
looped=0;
variantsAI[]={};
variantsPlayer[]={};};
		class CivilBase: Default
		{
			aiming="aimingNo";
			actions="CivilActions";
			duty=-1;
			disableWapons=1;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
			interpolationSpeed=3;
		};
		class Civil: CivilBase
		{
file="\dbsgr\anim\a9a6723ce.rtm";speed=-0.3333333333333333;























			
			
			looped=1;
			soundEnabled=0;
			variantAfter[]={1,3,6};
			variantsAI[]=
			{
				"Civil",
				0.200000,
				"CivilStillV1",
				0.800000
			};
			equivalentTo="Civil";
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
			interpolateFrom[]={"CombatThrowGrenadeEnd",1};
		};
		class CivilStillV1: Civil
		{
			actions="CivilActions";
			file="\dbsgr\anim\fb3600e4e.rtm";
			speed=-10;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CivilWalkF: CivilBase
		{
file="\dbsgr\anim\a9afde0a6.rtm";speed=-0.9833333333333333;























			
			
			looped=1;
			duty=-0.700000;
			relSpeedMin=0.700000;
			relSpeedMax=1;
		};
		class CivilWalkLF: CivilWalkF
		{
			file="\dbsgr\anim\f56d25c78.rtm";
		};
		class CivilWalkRF: CivilWalkF
		{
			file="\dbsgr\anim\f0a9273fa.rtm";
		};
		class CivilWalkL: CivilWalkF
		{
			file="\dbsgr\anim\f268650bb.rtm";
		};
		class CivilWalkR: CivilWalkF
		{
			file="\dbsgr\anim\f59327696.rtm";
		};
		class CivilWalkLB: CivilWalkF
		{
			file="\dbsgr\anim\fa2233c8b.rtm";
		};
		class CivilWalkRB: CivilWalkF
		{
			file="\dbsgr\anim\f1b4575c9.rtm";
		};
		class CivilWalkB: CivilWalkF
		{
			file="\dbsgr\anim\f5dda350a.rtm";
		};
		class CivilRunF: CivilWalkF
		{
file="\dbsgr\anim\af1596dd2.rtm";speed=-0.5666666666666667;























			actions="CivilRunFActions";
			
			
			looped=1;
			duty=-0.500000;
		};
		class CivilRunLF: CivilRunF
		{
			file="\dbsgr\anim\f28306126.rtm";
		};
		class CivilRunRF: CivilRunF
		{
			file="\dbsgr\anim\f466d9f22.rtm";
		};
		class CivilRunL: CivilRunF
		{
			file="\dbsgr\anim\f555e4e0d.rtm";
		};
		class CivilRunR: CivilRunF
		{
			file="\dbsgr\anim\f42344601.rtm";
		};
		class CivilRunB: CivilRunF
		{
			actions="CivilActions";
			file="\dbsgr\anim\f712dad6c.rtm";
		};
		class CivilRunLB: CivilRunB
		{
			file="\dbsgr\anim\f70b8c023.rtm";
		};
		class CivilRunRB: CivilRunB
		{
			file="\dbsgr\anim\fa659133a.rtm";
		};
		class CivilTurnR: CivilBase
		{
			actions="CivilActions";
			file="\dbsgr\anim\faae1a6b5.rtm";
			speed=-1.600000;
			looped=1;
			soundEnabled=0;
			relSpeedMin=0.900000;
			relSpeedMax=1;
			duty=-1;
			interpolationSpeed=5;
		};
		class CivilTurnL: CivilBase
		{
			actions="CivilActions";
			file="\dbsgr\anim\f58175adc.rtm";
			speed=-1.600000;
			looped=1;
			soundEnabled=0;
			relSpeedMin=0.900000;
			relSpeedMax=1;
			duty=-1;
			interpolationSpeed=5;
		};
		class CivilThrowGrenadeStart: Default
		{
			actions="CivilActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class CivilThrowGrenadeEnd: Default
		{
			actions="CivilActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CivilRunThrowGrenadeStart: Default
		{
			actions="CivilRunFActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_start.rtm";
speed=-0.6242857456207275;
looped=0;};
		class CivilRunThrowGrenadeEnd: Default
		{
			actions="CivilRunFActions";
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		






file="\dbsgr\anim\gr18_grenade_stand_end.rtm";
speed=-0.5257142543792724;
looped=0;};
		class CivilToCivilLying: Default
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\fa64d0090.rtm";
			speed=-1.500000;
			looped=0;
			onLandEnd=1;
			enableOptics=0;
			soundEnabled=1;
			soundOverride="laydown";
			soundEdge1=0.100000;
			soundEdge2=0.100000;
			interpolateTo[]={"CivilLyingDying",1};
		};
		class CivilLyingToCivil: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\f31aa957a.rtm";
			speed=-2;
			looped=0;
			onLandBeg=1;
			enableOptics=0;
			soundEnabled=1;
			soundOverride="standup";
			soundEdge1=0.010000;
			soundEdge2=0.010000;
			interpolateTo[]={"CivilDying",1,"CivilDyingVer2",1};
		};
		class Lying: Default
		{
file="\dbsgr\anim\aa50b3af0.rtm";speed=-0.3333333333333333;























			preload=1;
			actions="LyingActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			duty=-1;
			visibleSize=0.250000;
			aimPrecision=0.300000;
			recoilSuffix="fixed";
		


connectFrom[]={};
};
		class LyingNoAim: Lying
		{
			preload=0;
			limitGunMovement=0;
			aiming="aimingLying";
			legs="legsNo";
		};
		class LyingStillV1: Lying
		{
			file="\dbsgr\anim\f2a918e37.rtm";
			speed=-6.200000;
		};
		class LyingTurnL: Lying
		{
			preload=0;
			file="\dbsgr\anim\f1c4c4ac1.rtm";
			speed=-4;
			duty=0;
		};
		class LyingTurnR: Lying
		{
			preload=0;
			file="\dbsgr\anim\f5e50347f.rtm";
			speed=-4;
			duty=0;
		};
		class LyingReloadMagazine: LyingNoAim
		{
file="\dbsgr\anim\a44a30631.rtm";speed=-1.3333333333333333;























			preload=1;
			actions="LyingActions";
			
			
			disableWeapons=1;
			looped=0;
			interpolateTo[]={"LyingDying",1};
		};
		class LyingThrowGrenadeStart: LyingNoAim
		{
			
			limitGunMovement=1;
			
			
			disableWeapons=1;
			duty=0;
			interpolateTo[]={"LyingDying",0.100000};
		






file="\dbsgr\anim\gr18_grenade_prone_start.rtm";
speed=-0.6514286041259766;
looped=0;};
		class LyingThrowGrenadeEnd: LyingNoAim
		{
			
			limitGunMovement=1;
			
			
			disableWeapons=1;
			duty=0;
			interpolateTo[]={"LyingDying",0.100000};
		






file="\dbsgr\anim\gr18_grenade_prone_end.rtm";
speed=-0.5485713958740234;
looped=0;};
		class LyingCrawlF: LyingNoAim
		{
file="\dbsgr\anim\a0eafe661.rtm";speed=-1.3166666666666667;























			preload=1;
			actions="CrawlingActions";
			
			
			duty=0;
			disableWeapons=1;
			enableOptics=0;
			soundEnabled=1;
			soundOverride="crawl";
		};
		class LyingFastCrawlF: LyingCrawlF
		{
			actions="CrawlingActions";
			
			
			disableWeapons=1;
			duty=0.600000;
		
file="\dbsgr\anim\a0eafe661.rtm";

speed=-0.9753086419753085;

looped=1;
};
		class LyingCrawlLF: LyingCrawlF
		{
			preload=0;
			file="\dbsgr\anim\fc96e2050.rtm";
			speed=-1;
		};
		class LyingCrawlRF: LyingCrawlF
		{
			preload=0;
			file="\dbsgr\anim\f8738f863.rtm";
			speed=-1;
		};
		class LyingCrawlL: LyingCrawlF
		{
file="\dbsgr\anim\a0d0cebf9.rtm";speed=-0.9833333333333333;























			preload=0;
			actions="LyingActions";
			
			
		};
		class LyingCrawlR: LyingCrawlL
		{
file="\dbsgr\anim\a6e7acc1e.rtm";speed=-0.9833333333333333;























			preload=0;
			
			
		};
		class LyingCrawlLB: LyingCrawlL
		{
			preload=0;
			file="\dbsgr\anim\ffa4848ab.rtm";
			speed=-1.100000;
		};
		class LyingCrawlRB: LyingCrawlL
		{
			preload=0;
			file="\dbsgr\anim\f11027d5a.rtm";
			speed=-1.100000;
		};
		class LyingCrawlB: LyingCrawlL
		{
file="\dbsgr\anim\aa93150c9.rtm";speed=-1.65;























			preload=0;
			
			
		};
		class LyingDying: DefaultDie
		{
file="\dbsgr\anim\ad2358b99.rtm";speed=-1.65;











			preload=1;
			actions="NoActions";
			
			
			onLandEnd=1;
			looped=0;
			soundEnabled=0;
		};
		class CivilLying: Default
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\faaff0960.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			duty=-1;
			disableWapons=1;
			disableWeaponsLong=1;
			visibleSize=0.250000;
			aimPrecision=0.300000;
			recoilSuffix="fixed";
		};
		class CivilLyingNoAim: CivilLying
		{
			limitGunMovement=0;
			aiming="aimingNo";
			legs="legsNo";
		};
		class CivilLyingStillV1: CivilLying
		{
			file="\dbsgr\anim\f09150bc6.rtm";
			speed=-6.200000;
		};
		class CivilLyingCrawlF: CivilLyingNoAim
		{
			actions="CivilCrawlingActions";
			file="\dbsgr\anim\fbae5921d.rtm";
			speed=-1;
			duty=0;
		};
		class CivilLyingFastCrawlF: CivilLyingCrawlF
		{
			actions="CivilCrawlingActions";
			file="\dbsgr\anim\f1b0ea1a5.rtm";
			speed=-0.800000;
			duty=0.600000;
		};
		class CivilLyingCrawlLF: CivilLyingCrawlF
		{
			file="\dbsgr\anim\fc96e2050.rtm";
			speed=-1;
		};
		class CivilLyingCrawlRF: CivilLyingCrawlF
		{
			file="\dbsgr\anim\f8738f863.rtm";
			speed=-1;
		};
		class CivilLyingCrawlL: CivilLyingCrawlF
		{
			actions="CivilLyingActions";
			file="\dbsgr\anim\f70efc73b.rtm";
			speed=-1;
		};
		class CivilLyingCrawlR: CivilLyingCrawlL
		{
			file="\dbsgr\anim\f9474f747.rtm";
			speed=-1;
		};
		class CivilLyingCrawlLB: CivilLyingCrawlL
		{
			file="\dbsgr\anim\ffa4848ab.rtm";
			speed=-1.100000;
		};
		class CivilLyingCrawlRB: CivilLyingCrawlL
		{
			file="\dbsgr\anim\f11027d5a.rtm";
			speed=-1.100000;
		};
		class CivilLyingCrawlB: CivilLyingCrawlL
		{
			file="\dbsgr\anim\f66e16a35.rtm";
			speed=-1.100000;
		};
		class CivilLyingDying: DefaultDie
		{
file="\dbsgr\anim\ad2358b99.rtm";speed=-1.65;











			actions="NoActions";
			
			
			onLandEnd=1;
			looped=0;
			soundEnabled=0;
		};
		class CivilLyingDead: CivilLyingDying
		{
file="\dbsgr\anim\af3ad1616.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class WeaponDying: DefaultDie
		{
file="\dbsgr\anim\ae49eebc4.rtm";speed=-3.316666666666667;











			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			soundEnabled=0;
		};
		class WeaponDyingVer2: WeaponDying
		{
			file="\dbsgr\anim\fa80b7ad2.rtm";
		};
		class WeaponDead: WeaponDying
		{
file="\dbsgr\anim\a864bbfa5.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			
			equivalentTo="WeaponDead";
			
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class WeaponDeadVer2: WeaponDead
		{
			file="\dbsgr\anim\f41da433d.rtm";
		};
		class SitDownDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb95cebea.rtm";
			speed=-0.600000;
			looped=0;
			onLandEnd=1;
			soundEnabled=0;
		};
		class SitDownDead: SitDownDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fff953605.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
		};
		class StandDying: DefaultDie
		{
file="\dbsgr\anim\ab7a24485.rtm";speed=-2.4833333333333334;











			preload=1;
			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			interpolationSpeed=5;
		};
		class StandDead: StandDying
		{
file="\dbsgr\anim\a5ef69eaa.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			
			equivalentTo="StandDead";
			
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class StandDyingVer2: DefaultDie
		{
			preload=1;
			actions="NoActions";
			file="\dbsgr\anim\fc56c9744.rtm";
			speed=-2;
			looped=0;
			onLandEnd=1;
			interpolationSpeed=5;
		};
		class StandDeadVer2: StandDead
		{
			actions="DeadActions";
			file="\dbsgr\anim\f0db5485e.rtm";
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
		};
		class CivilDying: DefaultDie
		{
file="\dbsgr\anim\ab7a24485.rtm";speed=-2.4833333333333334;











			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			interpolateFrom[]={};
			connectTo[]={"CivilDead",1};
		};
		class CivilDead: CivilDying
		{
file="\dbsgr\anim\a5ef69eaa.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			
			
			
			equivalentTo="CivilDead";
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CivilDyingVer2: CivilDying
		{
file="\dbsgr\anim\ae49eebc4.rtm";speed=-3.316666666666667;











			
			connectTo[]={"CivilDeadVer2",1};
		};
		class CivilDeadVer2: CivilDead
		{
file="\dbsgr\anim\a864bbfa5.rtm";speed=10000000000;











			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatDying: DefaultDie
		{
file="\dbsgr\anim\ab7a24485.rtm";speed=-2.4833333333333334;











			preload=1;
			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			connectFrom[]={"Combat",1};
			connectTo[]={"CombatDead",1};
		};
		class CombatDead: CombatDying
		{
file="\dbsgr\anim\a5ef69eaa.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			
			
			equivalentTo="CombatDead";
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatDyingVer2: DefaultDie
		{
file="\dbsgr\anim\ae49eebc4.rtm";speed=-3.316666666666667;











			preload=1;
			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			connectFrom[]={"Combat",1};
			connectTo[]={"CombatDeadVer2",1};
		};
		class CombatDeadVer2: CombatDead
		{
file="\dbsgr\anim\a864bbfa5.rtm";speed=10000000000;











			actions="DeadActions";
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			connectFrom[]={};
			interpolateFrom[]={};
			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatDyingVer3: DefaultDie
		{
file="\dbsgr\anim\afa4127fd.rtm";speed=-2.816666666666667;











			preload=1;
			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			connectFrom[]={"Combat",1};
			connectTo[]={"CombatDeadVer3",1};
		};
		class CombatDeadVer3: CombatDead
		{
file="\dbsgr\anim\af12f64b1.rtm";speed=10000000000;











			actions="DeadActions";
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			connectFrom[]={};
			interpolateFrom[]={};
			
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatRunDying: DefaultDie
		{
file="\dbsgr\anim\a73d44aa1.rtm";speed=-2.066666666666667;











			actions="NoActions";
			
			
			looped=0;
			onLandEnd=1;
			interpolateFrom[]={"CombatRunF",1};
			connectTo[]={"CombatRunDead",1};
		};
		class CombatRunDead: CombatRunDying
		{
file="\dbsgr\anim\a0a49257b.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			
			
			
			equivalentTo="CombatRunDead";
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CombatRunDyingVer2: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\ff44f8c74.rtm";
			speed=-1.600000;
			looped=0;
			onLandEnd=1;
			interpolateFrom[]={"CombatRunF",1};
			connectTo[]={"CombatRunDeadVer2",1};
		};
		class CombatRunDeadVer2: CombatRunDyingVer2
		{
			actions="DeadActions";
			file="\dbsgr\anim\f743f37ea.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			connectTo[]={"DeadState",10};
			equivalentTo="CombatRunDead";
			variantAfter[]={0,0,0};
		};
		class CombatRunBDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\ff61ef0f3.rtm";
			speed=-1.600000;
			looped=0;
			onLandEnd=1;
			interpolateFrom[]={"CombatRunB",1};
			connectTo[]={"CombatRunBDead",1};
		};
		class CombatRunBDead: CombatRunBDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f4a82ee21.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			connectFrom[]={};
			interpolateFrom[]={};
			connectTo[]={"DeadState",10};
			variantsPlayer[]={};
			variantAfter[]={0,0,0};
			equivalentTo="CombatRunBDead";
		};
		class CombatRunBDyingVer2: CombatRunBDying
		{
			file="\dbsgr\anim\f2f0e8e17.rtm";
			connectTo[]={"CombatRunBDeadVer2",1};
		};
		class CombatRunBDeadVer2: CombatRunBDead
		{
			file="\dbsgr\anim\f93e48f14.rtm";
		};
		class CombatRelaxedDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f8cf3f888.rtm";
			speed=-1.600000;
			looped=0;
			onLandEnd=1;
			connectFrom[]={"CombatRelaxed",1};
			connectTo[]={"CombatRelaxedDead",1};
		};
		class CombatRelaxedDead: DefaultDie
		{
			actions="DeadActions";
			file="\dbsgr\anim\f09679ac0.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			connectFrom[]={};
			interpolateFrom[]={};
			connectTo[]={"DeadState",10};
			variantsPlayer[]={};
			variantAfter[]={0,0,0};
		};
		class CombatRelaxedDyingVer2: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f01b41ff1.rtm";
			speed=-1.600000;
			looped=0;
			onLandEnd=1;
			connectFrom[]={"CombatRelaxed",1};
			connectTo[]={"CombatRelaxedDeadVer2",1};
		};
		class CombatRelaxedDeadVer2: DefaultDie
		{
			actions="DeadActions";
			file="\dbsgr\anim\fd927eef7.rtm";
			speed=10000000000.000000;
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			connectFrom[]={};
			interpolateFrom[]={};
			connectTo[]={"DeadState",10};
			equivalentTo="CombatRelaxedDead";
			variantsPlayer[]={};
			variantAfter[]={0,0,0};
		};
		class LyingDead: LyingDying
		{
file="\dbsgr\anim\af3ad1616.rtm";speed=10000000000;











			actions="DeadActions";
			
			
			looped=1;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
		










connectTo[]={};interpolateTo[]={};variantsPlayer[]={};variantsAI[]={};variantAfter[]={0,0,0};
};
		class CargoDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f1e8c7b36.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
		};
		class CargoDead: CargoDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fbc467f0c.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"CargoDying",1};
			connectTo[]={"DeadState",1};
		};
		class CombatToWeapon: Default
		{
			
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		




variantsAI[]={};

variantsPlayer[]={};

looped=0;




speed=-0.9833333333333333;

connectFrom[]={"Combat",1};

file="\dbsgr\anim\gr42_gr18_launcher_crouch_draw.rtm";
actions="WeaponActions";
connectTo[]={"Weapon",1};};
		class LyingToWeapon: Default
		{
			actions="WeaponActions";
			
			
			visibleSize=0.700000;
			
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		
file="\dbsgr\anim\gr42_launcher_draw.rtm";

speed=-1.0166666666666666;

variantsAI[]={};

variantsPlayer[]={};

looped=0;

connectTo[]={"Weapon",0.02};
};
		class WeaponToLying: Default
		{
			actions="WeaponActions";
			
			
			
			visibleSize=0.700000;
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		
file="\dbsgr\anim\gr42_launcher_holster.rtm";

speed=-1.0;

variantsAI[]={};

variantsPlayer[]={};

looped=0;

connectTo[]={"Lying",0.02};
};
		class Weapon: Default
		{
			
			
			
			
			soundEnabled=0;
			enableMissile=1;
			duty=-1;
			visibleSize=0.600000;
			aimPrecision=0.500000;
			recoilSuffix="halffixed";
		




variantsAI[]={};

variantsPlayer[]={};


speed=-0.31666666666666665;


file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;};
		class WeaponWalkF: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_F.rtm";
speed=-0.7599999904632568;
actions="WeaponActions";};
		class WeaponWalkL: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_L.rtm";
speed=-1.0555555820465088;
actions="WeaponActions";};
		class WeaponWalkR: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_R.rtm";
speed=-1.0555555820465088;
actions="WeaponActions";};
		class WeaponWalkB: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_B.rtm";
speed=-0.9288888772328695;
actions="WeaponActions";};
		class WeaponWalkLF: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_LF.rtm";
speed=-0.7600000083475572;
actions="WeaponActions";};
		class WeaponWalkRF: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_RF.rtm";
speed=-0.7600000083475572;
actions="WeaponActions";};
		class WeaponWalkLB: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_LB.rtm";
speed=-0.9288888928474813;
actions="WeaponActions";};
		class WeaponWalkRB: Weapon
		{
			
			
			
			duty=-0.500000;
		




variantsAI[]={};

variantsPlayer[]={};




looped=1;
file="\dbsgr\anim\gr42_gr18_launcher_crouch_RB.rtm";
speed=-0.9288888928474813;
actions="WeaponActions";};
		class WeaponTurnL: Weapon
		{
			
			
			
			duty=-0.500000;
			soundEnabled=0;
		


speed=-0.31666666666666665;

variantsAI[]={};

variantsPlayer[]={};

file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};
		class WeaponTurnR: Weapon
		{
			
			
			
			duty=-0.500000;
			soundEnabled=0;
		


speed=-0.31666666666666665;

variantsAI[]={};

variantsPlayer[]={};

file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};
		class WeaponReloadAT: Weapon
		{
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			interpolateTo[]={"WeaponDying",0.100000,"WeaponDyingVer2",0.100000};
		








file="\dbsgr\anim\gr42_gr34_launcher_reload.rtm";
speed=-2.1;
looped=0;
actions="WeaponActions";
connectTo[]={"Weapon",1};
variantsAI[]={};
variantsPlayer[]={};};
		class WeaponToCombat: Default
		{
			
			
			
			
			disableWeapons=1;
			soundEnabled=0;
			connectFrom[]={"Weapon",2};
			
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		


speed=-1.0;

variantsAI[]={};

variantsPlayer[]={};

looped=0;



file="\dbsgr\anim\gr42_gr18_launcher_crouch_holster.rtm";
actions="CrouchActions";
connectTo[]={"Crouch",1};};
		class HandGunStand: Combat
		{
speed=-0.31666666666666665;























			access=0;
		
actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStand";showHandGun=1;showPrimaryWeapon=0;
interpolateWith[]={"Combat",0.1,"HandGunStand",0.1,"HandGunCrouch",0.1,"HandGunLying",0.1};

file="\dbsgr\anim\gr46_pistol_a945b00e3.rtm";};
		class HandGunCrouch: Crouch
		{
speed=-0.31666666666666665;























			access=0;
		
actions="HandGunCrouchActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunCrouch";showHandGun=1;showPrimaryWeapon=0;
interpolateWith[]={"Crouch",0.1,"HandGunStand",0.1,"HandGunCrouch",0.1,"HandGunLying",0.1};

file="\dbsgr\anim\gr46_pistol_ae352452e.rtm";};
		class HandGunLying: Lying
		{
speed=-0.3333333333333333;























			access=0;
		
actions="HandGunLyingActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunLying";showHandGun=1;showPrimaryWeapon=0;
interpolateWith[]={"Lying",0.1,"HandGunStand",0.1,"HandGunCrouch",0.1,"HandGunLying",0.1};

file="\dbsgr\anim\gr46_pistol_a2ad352e4.rtm";};
		class Driver: Default
		{
			actions="CargoActions";
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-25;
			looped=1;
			soundEnabled=0;
		};
		class Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-1;
			looped=1;
		};
		class Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-10;
			looped=1;
		};
		class Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-10;
			looped=1;
		};
		class Cargo: Driver
		{
			actions="CargoActions";
			file="\dbsgr\anim\gr43_vehicle_f51ec9873.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"CargoVer1",
				0.600000,
				"CargoVer2",
				0.100000,
				"CargoVer3",
				0.100000,
				"CargoVer4",
				0.100000,
				"CargoVer5",
				0.100000,
				"Cargo"
			};
			equivalentTo="Cargo";
			interpolationSpeed=1;
		};
		class CargoVer1: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_fb7873233.rtm";
			speed=-3.800000;
			looped=1;
		};
		class CargoVer2: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_f5c877ae6.rtm";
			speed=-3.800000;
			looped=1;
		};
		class CargoVer3: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_fd1e5f29d.rtm";
			speed=-4.200000;
			looped=1;
		};
		class CargoVer4: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_fdb546a66.rtm";
			speed=-3.200000;
			looped=1;
		};
		class CargoVer5: Cargo
		{
			file="\dbsgr\anim\gr43_vehicle_f3d6a9aa4.rtm";
			speed=-9.600000;
			looped=1;
		};
		class M113Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ff2d789c5.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M113GunnerV1",
				0.700000,
				"M113Gunner"
			};
			interpolateWith[]={"M113GunnerV1",0.500000};
			equivalentTo="M113Gunner";
			interpolationSpeed=1;
			connectTo[]={"M113GunnerDying",1};
		};
		class M113GunnerV1: M113Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_fbe4558cc.rtm";
			speed=-4;
			looped=1;
		};
		class M113GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fd510b077.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M113Gunner",1};
		};
		class M113GunnerDead: M113GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa15ba504.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M113GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class M113Driver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ffc95b718.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M113DriverV1",
				0.700000,
				"M113Driver"
			};
			interpolateWith[]={"M113DriverV1",0.500000};
			equivalentTo="M113Driver";
			interpolationSpeed=1;
		};
		class M113DriverV1: M113Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fffcb9c7e.rtm";
			speed=-4;
			looped=1;
		};
		class M113DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f9cdc2bb5.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M113DriverOutV1",
				0.700000,
				"M113DriverOut"
			};
			interpolateWith[]={"M113DriverOutV1",0.500000};
			equivalentTo="M113DriverOut";
			interpolationSpeed=1;
			connectTo[]={"M113DriverOutDying",1};
		};
		class M113DriverOutV1: M113DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_f08773731.rtm";
			speed=-4;
			looped=1;
		};
		class M113DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f32ca9d28.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M113DriverOut",1};
		};
		class M113DriverOutDead: M113DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fd920a580.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M113DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class M113Medic: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f4d38942a.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M113MedicV1",
				0.700000,
				"M113Medic"
			};
			interpolateWith[]={"M113MedicV1",0.500000};
			equivalentTo="M113Medic";
			interpolationSpeed=1;
		};
		class M113MedicV1: M113Medic
		{
			file="\dbsgr\anim\gr43_vehicle_f76af0910.rtm";
			speed=-4;
			looped=1;
		};
		class Nemocnej: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ff4fa0d4d.rtm";
			speed=10000000000.000000;
			looped=1;
		};
		class M60Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f12e92b55.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60GunnerV1",
				0.700000,
				"M60Gunner"
			};
			interpolateWith[]={"M60GunnerV1",0.500000};
			equivalentTo="M60Gunner";
			interpolationSpeed=1;
		};
		class M60GunnerV1: M60Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f15a86824.rtm";
			speed=-4;
			looped=1;
		};
		class M60Driver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_faf965a61.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60DriverV1",
				0.700000,
				"M60Driver"
			};
			interpolateWith[]={"M60DriverV1",0.500000};
			equivalentTo="M60Driver";
			interpolationSpeed=1;
		};
		class M60DriverV1: M60Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f298f857b.rtm";
			speed=-4;
			looped=1;
		};
		class M60Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f5b0953bb.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60CommanderV1",
				0.700000,
				"M60Commander"
			};
			interpolateWith[]={"M60CommanderV1",0.500000};
			equivalentTo="M60Commander";
			interpolationSpeed=1;
		};
		class M60CommanderV1: M60Commander
		{
			file="\dbsgr\anim\gr43_vehicle_fdcd520bf.rtm";
			speed=-4;
			looped=1;
		};
		class M60DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_feead0e2c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60DriverOutV1",
				0.700000,
				"M60DriverOut"
			};
			interpolateWith[]={"M60DriverOutV1",0.500000};
			equivalentTo="M60DriverOut";
			interpolationSpeed=1;
			connectTo[]={"M60DriverOutDying",1};
		};
		class M60DriverOutV1: M60DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_feb2d24e0.rtm";
			speed=-4;
			looped=1;
		};
		class M60DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f884b53b2.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M60DriverOut",1};
		};
		class M60DriverOutDead: M60DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fbb31b8e8.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M60DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class M60CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f462a2b4b.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M60CommanderOutV1",
				0.700000,
				"M60CommanderOut"
			};
			interpolateWith[]={"M60CommanderOutV1",0.500000};
			equivalentTo="M60CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"M60CommanderOutDying",1};
		};
		class M60CommanderOutV1: M60CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_fd5465134.rtm";
			speed=-4;
			looped=1;
		};
		class M60CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f3bdbd8b8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M60CommanderOut",1};
		};
		class M60CommanderOutDead: M60CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f16385486.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M60CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class M1A1Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f7b720e4e.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M1A1CommanderV1",
				0.700000,
				"M1A1Commander"
			};
			interpolateWith[]={"M1A1CommanderV1",0.500000};
			equivalentTo="M1A1Commander";
			interpolationSpeed=1;
		};
		class M1A1CommanderV1: M1A1Commander
		{
			file="\dbsgr\anim\gr43_vehicle_f83f48c88.rtm";
			speed=-4;
			looped=1;
		};
		class M1A1Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fe588ede3.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M1A1GunnerV1",
				0.700000,
				"M1A1Gunner"
			};
			interpolateWith[]={"M1A1GunnerV1",0.500000};
			equivalentTo="M1A1Gunner";
			interpolationSpeed=1;
		};
		class M1A1GunnerV1: M1A1Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f37a0f7ea.rtm";
			speed=-4;
			looped=1;
		};
		class M1A1Driver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f015f10af.rtm";
			speed=10000000000.000000;
			looped=1;
		};
		class M1A1DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_feccbf92d.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M1A1DriverOutV1",
				0.700000,
				"M1A1DriverOut"
			};
			interpolateWith[]={"M1A1DriverOutV1",0.500000};
			equivalentTo="M1A1DriverOut";
			interpolationSpeed=1;
			connectTo[]={"M1A1DriverOutDying",1};
		};
		class M1A1DriverOutV1: M1A1DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_f9b524cb7.rtm";
			speed=-4;
			looped=1;
		};
		class M1A1DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fbee55cce.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M1A1DriverOut",1};
		};
		class M1A1DriverOutDead: M1A1DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f6ab99118.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M1A1DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class M1A1CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f893cf090.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M1A1CommanderOutV1",
				0.700000,
				"M1A1CommanderOut"
			};
			interpolateWith[]={"M1A1CommanderOutV1",0.500000};
			equivalentTo="M1A1CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"M1A1CommanderOutDying",1};
		};
		class M1A1CommanderOutV1: M1A1CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_f42034934.rtm";
			speed=-4;
			looped=1;
		};
		class M1A1CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f059090e8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M1A1CommanderOut",1};
		};
		class M1A1CommanderOutDead: M1A1CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa200804f.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M1A1CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class BMPGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f6978b010.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPGunnerV1",
				0.700000,
				"BMPGunner"
			};
			interpolateWith[]={"BMPGunnerV1",0.500000};
			equivalentTo="BMPGunner";
			interpolationSpeed=1;
		};
		class BMPGunnerV1: BMPGunner
		{
			file="\dbsgr\anim\gr43_vehicle_f52ff2637.rtm";
			speed=-4;
			looped=1;
		};
		class BMPDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f6b4c2003.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPDriverV1",
				0.700000,
				"BMPDriver"
			};
			interpolateWith[]={"BMPDriverV1",0.500000};
			equivalentTo="BMPDriver";
			interpolationSpeed=1;
		};
		class BMPDriverV1: BMPDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fc1af4158.rtm";
			speed=-4;
			looped=1;
		};
		class BMPCommander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fa7ee341c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPCommanderV1",
				0.700000,
				"BMPCommander"
			};
			interpolateWith[]={"BMPCommanderV1",0.500000};
			equivalentTo="BMPCommander";
			interpolationSpeed=1;
		};
		class BMPCommanderV1: BMPCommander
		{
			file="\dbsgr\anim\gr43_vehicle_f1805d72c.rtm";
			speed=-4;
			looped=1;
		};
		class BMPGunnerOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd3864512.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPGunnerOutV1",
				0.700000,
				"BMPGunnerOut"
			};
			interpolateWith[]={"BMPGunnerOutV1",0.500000};
			equivalentTo="BMPGunnerOut";
			interpolationSpeed=1;
			connectTo[]={"BMPGunnerOutDying",1};
		};
		class BMPGunnerOutV1: BMPGunnerOut
		{
			file="\dbsgr\anim\gr43_vehicle_f478714ae.rtm";
			speed=-4;
			looped=1;
		};
		class BMPGunnerOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fda7bdd9f.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BMPGunnerOut",1};
		};
		class BMPGunnerOutDead: BMPGunnerOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ffb8aaa63.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BMPGunnerOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class BMPDriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f4ea49e03.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPDriverOutV1",
				0.700000,
				"BMPDriverOut"
			};
			interpolateWith[]={"BMPDriverOutV1",0.500000};
			equivalentTo="BMPDriverOut";
			interpolationSpeed=1;
			connectTo[]={"BMPDriverOutDying",1};
		};
		class BMPDriverOutV1: BMPDriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_fbb840560.rtm";
			speed=-4;
			looped=1;
		};
		class BMPDriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fe2a87261.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BMPDriverOut",1};
		};
		class BMPDriverOutDead: BMPDriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff12cd598.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BMPDriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class BMPCommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f803cf5c6.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"BMPCommanderOutV1",
				0.700000,
				"BMPCommanderOut"
			};
			interpolateWith[]={"BMPCommanderOutV1",0.500000};
			equivalentTo="BMPCommanderOut";
			interpolationSpeed=1;
			connectTo[]={"BMPCommanderOutDying",1};
		};
		class BMPCommanderOutV1: BMPCommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_fb13774c0.rtm";
			speed=-4;
			looped=1;
		};
		class BMPCommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fcd49b123.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BMPCommanderOut",1};
		};
		class BMPCommanderOutDead: BMPCommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f2d9deee3.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BMPCommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T72Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f38c93cec.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72GunnerV1",
				0.700000,
				"T72Gunner"
			};
			interpolateWith[]={"T72GunnerV1",0.500000};
			equivalentTo="T72Gunner";
			interpolationSpeed=1;
		};
		class T72GunnerV1: T72Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f4b0b8ea1.rtm";
			speed=-4;
			looped=1;
		};
		class T72Driver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd2ca710a.rtm";
			speed=10000000000.000000;
			looped=1;
		};
		class T72Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ff44f1525.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72CommanderV1",
				0.700000,
				"T72Commander"
			};
			interpolateWith[]={"T72CommanderV1",0.500000};
			equivalentTo="T72Commander";
			interpolationSpeed=1;
		};
		class T72CommanderV1: T72Commander
		{
			file="\dbsgr\anim\gr43_vehicle_f7660e489.rtm";
			speed=-4;
			looped=1;
		};
		class T72DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb9447431.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72DriverOutV1",
				0.700000,
				"T72DriverOut"
			};
			interpolateWith[]={"T72DriverOutV1",0.500000};
			equivalentTo="T72DriverOut";
			interpolationSpeed=1;
			connectTo[]={"T72DriverOutDying",1};
		};
		class T72DriverOutV1: T72DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_fde9afc4e.rtm";
			speed=-4;
			looped=1;
		};
		class T72DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f7c8fd13e.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T72DriverOut",1};
		};
		class T72DriverOutDead: T72DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ffd3f1e7c.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T72DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T72GunnerOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f056bb078.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72GunnerOutV1",
				0.700000,
				"T72GunnerOut"
			};
			interpolateWith[]={"T72GunnerOutV1",0.500000};
			equivalentTo="T72GunnerOut";
			interpolationSpeed=1;
			connectTo[]={"T72GunnerOutDying",1};
		};
		class T72GunnerOutV1: T72GunnerOut
		{
			file="\dbsgr\anim\gr43_vehicle_fbe2cb127.rtm";
			speed=-4;
			looped=1;
		};
		class T72GunnerOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fabbf6fac.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T72GunnerOut",1};
		};
		class T72GunnerOutDead: T72GunnerOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fc7afc29a.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T72GunnerOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T72CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f8a3024de.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T72CommanderOutV1",
				0.700000,
				"T72CommanderOut"
			};
			interpolateWith[]={"T72CommanderOutV1",0.500000};
			equivalentTo="T72CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"T72CommanderOutDying",1};
		};
		class T72CommanderOutV1: T72CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_f8ca8b487.rtm";
			speed=-4;
			looped=1;
		};
		class T72CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fa84ed7f5.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T72CommanderOut",1};
		};
		class T72CommanderOutDead: T72CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff41a6229.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T72CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T80GunnerOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f45a7b8c1.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T80GunnerOutV1",
				0.700000,
				"T80GunnerOut"
			};
			interpolateWith[]={"T80GunnerOutV1",0.500000};
			equivalentTo="T80GunnerOut";
			interpolationSpeed=1;
			connectTo[]={"T80GunnerOutDying",1};
		};
		class T80GunnerOutV1: T80GunnerOut
		{
			file="\dbsgr\anim\gr43_vehicle_fe5532790.rtm";
			speed=-4;
			looped=1;
		};
		class T80GunnerOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f9d5ebbf5.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T80GunnerOut",1};
		};
		class T80GunnerOutDead: T80GunnerOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f2cb3f296.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T80GunnerOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T80CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f95142182.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T80CommanderOutV1",
				0.700000,
				"T80CommanderOut"
			};
			interpolateWith[]={"T80CommanderOutV1",0.500000};
			equivalentTo="T80CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"T80CommanderOutDying",1};
		};
		class T80CommanderOutV1: T80CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_f60198f4b.rtm";
			speed=-4;
			looped=1;
		};
		class T80CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f178226db.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T80CommanderOut",1};
		};
		class T80CommanderOutDead: T80CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f76b92dbb.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T80CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T55Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fe9d32f24.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T55GunnerV1",
				0.700000,
				"T55Gunner"
			};
			interpolateWith[]={"T55GunnerV1",0.500000};
			equivalentTo="T55Gunner";
			interpolationSpeed=1;
		};
		class T55GunnerV1: T55Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_fd8007aef.rtm";
			speed=-4;
			looped=1;
		};
		class T55Commander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb700617a.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T55CommanderV1",
				0.700000,
				"T55Commander"
			};
			interpolateWith[]={"T55CommanderV1",0.500000};
			equivalentTo="T55Commander";
			interpolationSpeed=1;
		};
		class T55CommanderV1: T55Commander
		{
			file="\dbsgr\anim\gr43_vehicle_fdcd4d93b.rtm";
			speed=-4;
			looped=1;
		};
		class T55DriverOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f8bde1dde.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T55DriverOutV1",
				0.700000,
				"T55DriverOut"
			};
			interpolateWith[]={"T55DriverOutV1",0.500000};
			equivalentTo="T55DriverOut";
			interpolationSpeed=1;
			connectTo[]={"T55DriverOutDying",1};
		};
		class T55DriverOutV1: T55DriverOut
		{
			file="\dbsgr\anim\gr43_vehicle_f9e1045b6.rtm";
			speed=-4;
			looped=1;
		};
		class T55DriverOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f455ad595.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T55DriverOut",1};
		};
		class T55DriverOutDead: T55DriverOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb1f7411e.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T55DriverOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class T55CommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3c554e9f.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"T55CommanderOutV1",
				0.700000,
				"T55CommanderOut"
			};
			interpolateWith[]={"T55CommanderOutV1",0.500000};
			equivalentTo="T55CommanderOut";
			interpolationSpeed=1;
			connectTo[]={"T55CommanderOutDying",1};
		};
		class T55CommanderOutV1: T55CommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_f0967fcaa.rtm";
			speed=-4;
			looped=1;
		};
		class T55CommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f9536ed49.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"T55CommanderOut",1};
		};
		class T55CommanderOutDead: T55CommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f3df03b62.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"T55CommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class ZSUGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3cfaa1fc.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUGunnerV1",
				0.700000,
				"ZSUGunner"
			};
			interpolateWith[]={"ZSUGunnerV1",0.500000};
			equivalentTo="ZSUGunner";
			interpolationSpeed=1;
		};
		class ZSUGunnerV1: ZSUGunner
		{
			file="\dbsgr\anim\gr43_vehicle_f9283eed0.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f1be52619.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUDriverV1",
				0.700000,
				"ZSUDriver"
			};
			interpolateWith[]={"ZSUDriverV1",0.500000};
			equivalentTo="ZSUDriver";
			interpolationSpeed=1;
			connectTo[]={"ZSUDriverDying",1};
		};
		class ZSUDriverV1: ZSUDriver
		{
			file="\dbsgr\anim\gr43_vehicle_ff402cbd0.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fe6ffd519.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ZSUDriver",1};
		};
		class ZSUDriverDead: ZSUDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff42d9b2b.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ZSUDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class ZSUCommander: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd43ea6b9.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUCommanderV1",
				0.700000,
				"ZSUCommander"
			};
			interpolateWith[]={"ZSUCommanderV1",0.500000};
			equivalentTo="ZSUCommander";
			interpolationSpeed=1;
		};
		class ZSUCommanderV1: ZSUCommander
		{
			file="\dbsgr\anim\gr43_vehicle_f1c86b311.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUGunnerOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3463fb8a.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUGunnerOutV1",
				0.700000,
				"ZSUGunnerOut"
			};
			interpolateWith[]={"ZSUGunnerOutV1",0.500000};
			equivalentTo="ZSUGunnerOut";
			interpolationSpeed=1;
			connectTo[]={"ZSUGunnerOutDying",1};
		};
		class ZSUGunnerOutV1: ZSUGunnerOut
		{
			file="\dbsgr\anim\gr43_vehicle_f2cac448b.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUGunnerOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f17909fd8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ZSUGunnerOut",1};
		};
		class ZSUGunnerOutDead: ZSUGunnerOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f2a7c871f.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ZSUGunnerOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class ZSUCommanderOut: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_faf867499.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ZSUCommanderOutV1",
				0.700000,
				"ZSUCommanderOut"
			};
			interpolateWith[]={"ZSUCommanderOutV1",0.500000};
			equivalentTo="ZSUCommanderOut";
			interpolationSpeed=1;
			connectTo[]={"ZSUCommanderOutDying",1};
		};
		class ZSUCommanderOutV1: ZSUCommanderOut
		{
			file="\dbsgr\anim\gr43_vehicle_fc7f50904.rtm";
			speed=-4;
			looped=1;
		};
		class ZSUCommanderOutDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fc994a1ce.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ZSUCommanderOut",1};
		};
		class ZSUCommanderOutDead: ZSUCommanderOutDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ffa5c3dff.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ZSUCommanderOutDying",1};
			connectTo[]={"DeadState",1};
		};
		class UH60Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f39e2d6d8.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UH60PilotV1",
				0.700000,
				"UH60Pilot"
			};
			interpolateWith[]={"UH60PilotV1",0.500000};
			equivalentTo="UH60Pilot";
			interpolationSpeed=1;
			connectTo[]={"UH60PilotDying",1};
		};
		class UH60PilotV1: UH60Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_fa3423c4a.rtm";
			speed=-4;
			looped=1;
		};
		class UH60PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f16cf540a.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UH60Pilot",1};
		};
		class UH60PilotDead: UH60PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb70feb2c.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UH60PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class UH60Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fff40c84a.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UH60GunnerV1",
				0.700000,
				"UH60Gunner"
			};
			interpolateWith[]={"UH60GunnerV1",0.500000};
			equivalentTo="UH60Gunner";
			interpolationSpeed=1;
			connectTo[]={"UH60GunnerDying",1};
		};
		class UH60GunnerV1: UH60Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f717255ce.rtm";
			speed=-4;
			looped=1;
		};
		class UH60GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fa2c3d3e7.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UH60Gunner",1};
		};
		class UH60GunnerDead: UH60GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f09b1297e.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UH60GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class AH1Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ffc88f930.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"AH1PilotV1",
				0.700000,
				"AH1Pilot"
			};
			interpolateWith[]={"AH1PilotV1",0.500000};
			equivalentTo="AH1Pilot";
			interpolationSpeed=1;
			connectTo[]={"AH1PilotDying",1};
		};
		class AH1PilotV1: AH1Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_f88222f24.rtm";
			speed=-4;
			looped=1;
		};
		class AH1PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f9b3ec9f5.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"AH1Pilot",1};
		};
		class AH1PilotDead: AH1PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f0108b5ee.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"AH1PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class AH1Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f2916bf07.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"AH1GunnerV1",
				0.700000,
				"AH1Gunner"
			};
			interpolateWith[]={"AH1GunnerV1",0.500000};
			equivalentTo="AH1Gunner";
			interpolationSpeed=1;
			connectTo[]={"AH1GunnerDying",1};
		};
		class AH1GunnerV1: AH1Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f5e9346bc.rtm";
			speed=-4;
			looped=1;
		};
		class AH1GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\ff8e66e10.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"AH1Gunner",1};
		};
		class AH1GunnerDead: AH1GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f18e8ff18.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"AH1GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class A10Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fcb9df3e9.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"A10PilotV1",
				0.700000,
				"A10Pilot"
			};
			interpolateWith[]={"A10PilotV1",0.500000};
			equivalentTo="A10Pilot";
			interpolationSpeed=1;
			connectTo[]={"A10PilotDying",1};
		};
		class A10PilotV1: A10Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_f7eb5e01f.rtm";
			speed=-4;
			looped=1;
		};
		class A10PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb0d26c86.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"A10Pilot",1};
		};
		class A10PilotDead: A10PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f687055db.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"A10PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class CesnaPilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fca0d2586.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"CesnaPilotV1",
				0.700000,
				"CesnaPilot"
			};
			interpolateWith[]={"CesnaPilotV1",0.500000};
			equivalentTo="CesnaPilot";
			interpolationSpeed=1;
			connectTo[]={"CesnaPilotDying",1};
		};
		class CesnaPilotV1: CesnaPilot
		{
			file="\dbsgr\anim\gr43_vehicle_f7497f0c8.rtm";
			speed=-4;
			looped=1;
		};
		class CesnaPilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f08cd6e05.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"CesnaPilot",1};
		};
		class CesnaPilotDead: CesnaPilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f287caf4b.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"CesnaPilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class CesnaCargo: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f81171f4c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"CesnaCargoV1",
				0.700000,
				"CesnaCargo"
			};
			interpolateWith[]={"CesnaCargoV1",0.500000};
			equivalentTo="CesnaCargo";
			interpolationSpeed=1;
			connectTo[]={"CesnaCargoDying",1};
		};
		class CesnaCargoV1: CesnaCargo
		{
			file="\dbsgr\anim\gr43_vehicle_f0f5d8275.rtm";
			speed=-4;
			looped=1;
		};
		class CesnaCargoDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f45b2d0f0.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"CesnaCargo",1};
		};
		class CesnaCargoDead: CesnaCargoDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f0162a436.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"CesnaCargoDying",1};
			connectTo[]={"DeadState",1};
		};
		class Mi17Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f713d74cc.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"Mi17PilotV1",
				0.700000,
				"Mi17Pilot"
			};
			interpolateWith[]={"Mi17PilotV1",0.500000};
			equivalentTo="Mi17Pilot";
			interpolationSpeed=1;
			connectTo[]={"Mi17PilotDying",1};
		};
		class Mi17PilotV1: Mi17Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_f268fb8c4.rtm";
			speed=-4;
			looped=1;
		};
		class Mi17PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fc0ceba46.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Mi17Pilot",1};
		};
		class Mi17PilotDead: Mi17PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff8e27749.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"Mi17PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class Mi24Pilot: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f440101a1.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"Mi24PilotV1",
				0.700000,
				"Mi24Pilot"
			};
			interpolateWith[]={"Mi24PilotV1",0.500000};
			equivalentTo="Mi24Pilot";
			interpolationSpeed=1;
			connectTo[]={"Mi24PilotDying",1};
		};
		class Mi24PilotV1: Mi24Pilot
		{
			file="\dbsgr\anim\gr43_vehicle_fb1e15003.rtm";
			speed=-4;
			looped=1;
		};
		class Mi24PilotDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fcfb5c5b9.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Mi24Pilot",1};
		};
		class Mi24PilotDead: Mi24PilotDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f6580679d.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"Mi24PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class Mi24Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f9e2bbecb.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"Mi24GunnerV1",
				0.700000,
				"Mi24Gunner"
			};
			interpolateWith[]={"Mi24GunnerV1",0.500000};
			equivalentTo="Mi24Gunner";
			interpolationSpeed=1;
			connectTo[]={"Mi24GunnerDying",1};
		};
		class Mi24GunnerV1: Mi24Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f8860c1bf.rtm";
			speed=-4;
			looped=1;
		};
		class Mi24GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb0d45be5.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Mi24Gunner",1};
		};
		class Mi24GunnerDead: Mi24GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fd7ec4458.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"Mi24GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class 5TDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f20c4eab7.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"5TDriverV1",
				0.700000,
				"5TDriver"
			};
			interpolateWith[]={"5TDriverV1",0.500000};
			equivalentTo="5TDriver";
			interpolationSpeed=1;
			connectTo[]={"5TDriverDying",1};
		};
		class 5TDriverV1: 5TDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fedd7db2a.rtm";
			speed=-4;
			looped=1;
		};
		class 5TDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f8c976d6d.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"5TDriver",1};
		};
		class 5TDriverDead: 5TDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fdbf4bcd6.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"5TDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class 5TCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fc65bc904.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"5TCoDriverV1",
				0.700000,
				"5TCoDriver"
			};
			interpolateWith[]={"5TCoDriverV1",0.500000};
			equivalentTo="5TCoDriver";
			interpolationSpeed=1;
			connectTo[]={"5TCoDriverDying",1};
		};
		class 5TCoDriverV1: 5TCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f45825838.rtm";
			speed=-4;
			looped=1;
		};
		class 5TCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fa4065a39.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"5TCoDriver",1};
		};
		class 5TCoDriverDead: 5TCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb3199c9a.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"5TCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class UralDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f1b610cf9.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UralDriverV1",
				0.700000,
				"UralDriver"
			};
			interpolateWith[]={"UralDriverV1",0.500000};
			equivalentTo="UralDriver";
			interpolationSpeed=1;
			connectTo[]={"UralDriverDying",1};
		};
		class UralDriverV1: UralDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f5fca9cf6.rtm";
			speed=-4;
			looped=1;
		};
		class UralDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fd563e602.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UralDriver",1};
		};
		class UralDriverDead: UralDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f1219832f.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UralDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class UralCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f64e1c64d.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UralCoDriverV1",
				0.700000,
				"UralCoDriver"
			};
			interpolateWith[]={"UralCoDriverV1",0.500000};
			equivalentTo="UralCoDriver";
			interpolationSpeed=1;
			connectTo[]={"UralCoDriverDying",1};
		};
		class UralCoDriverV1: UralCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fe446597d.rtm";
			speed=-4;
			looped=1;
		};
		class UralCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fbc1703ab.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UralCoDriver",1};
		};
		class UralCoDriverDead: UralCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f93639190.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UralCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class V3SDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ffef01901.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"V3SDriverV1",
				0.700000,
				"V3SDriver"
			};
			interpolateWith[]={"V3SDriverV1",0.500000};
			equivalentTo="V3SDriver";
			interpolationSpeed=1;
			connectTo[]={"V3SDriverDying",1};
		};
		class V3SDriverV1: V3SDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f1686aae4.rtm";
			speed=-4;
			looped=1;
		};
		class V3SDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f0981d971.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"V3SDriver",1};
		};
		class V3SDriverDead: V3SDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa73d1f66.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"V3SDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class V3SCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fa4896b19.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"V3SCoDriverV1",
				0.700000,
				"V3SCoDriver"
			};
			interpolateWith[]={"V3SCoDriverV1",0.500000};
			equivalentTo="V3SCoDriver";
			interpolationSpeed=1;
			connectTo[]={"V3SCoDriverDying",1};
		};
		class V3SCoDriverV1: V3SCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f3c5e3569.rtm";
			speed=-4;
			looped=1;
		};
		class V3SCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f5e2ac878.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"V3SCoDriver",1};
		};
		class V3SCoDriverDead: V3SCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\ff19f922f.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"V3SCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class JeepDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f4b956153.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"JeepDriverV1",
				0.700000,
				"JeepDriver"
			};
			interpolateWith[]={"JeepDriverV1",0.500000};
			equivalentTo="JeepDriver";
			interpolationSpeed=1;
			connectTo[]={"JeepDriverDying",1};
		};
		class JeepDriverV1: JeepDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f5221273f.rtm";
			speed=-4;
			looped=1;
		};
		class JeepDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f48bea7c1.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"JeepDriver",1};
		};
		class JeepDriverDead: JeepDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f67a9b5d4.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"JeepDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class JeepGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f244f5bbf.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"JeepGunnerV1",
				0.700000,
				"JeepGunner"
			};
			interpolateWith[]={"JeepGunnerV1",0.500000};
			equivalentTo="JeepGunner";
			interpolationSpeed=1;
			connectTo[]={"JeepGunnerDying",1};
		};
		class JeepGunnerV1: JeepGunner
		{
			file="\dbsgr\anim\gr43_vehicle_ffb7f8c76.rtm";
			speed=-4;
			looped=1;
		};
		class JeepGunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fc3b00df8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"JeepGunner",1};
		};
		class JeepGunnerDead: JeepGunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f6bac2fb5.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"JeepGunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class JeepCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb3854b54.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"JeepCoDriverV1",
				0.700000,
				"JeepCoDriver"
			};
			interpolateWith[]={"JeepCoDriverV1",0.500000};
			equivalentTo="JeepCoDriver";
			interpolationSpeed=1;
			connectTo[]={"JeepCoDriverDying",1};
		};
		class JeepCoDriverV1: JeepCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fcd499165.rtm";
			speed=-4;
			looped=1;
		};
		class JeepCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f68eef018.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"JeepCoDriver",1};
		};
		class JeepCoDriverDead: JeepCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fee309c27.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"JeepCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class JeepCoDriverBack: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb5604d6c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"JeepCoDriverBackV1",
				0.700000,
				"JeepCoDriverBack"
			};
			interpolateWith[]={"JeepCoDriverBackV1",0.500000};
			equivalentTo="JeepCoDriverBack";
			interpolationSpeed=1;
			connectTo[]={"JeepCoDriverBackDying",1};
		};
		class JeepCoDriverBackV1: JeepCoDriverBack
		{
			file="\dbsgr\anim\gr43_vehicle_fe031caf4.rtm";
			speed=-4;
			looped=1;
		};
		class JeepCoDriverBackDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f5115376e.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"JeepCoDriverBack",1};
		};
		class JeepCoDriverBackDead: JeepCoDriverBackDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f8379c2b0.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"JeepCoDriverBackDying",1};
			connectTo[]={"DeadState",1};
		};
		class UazDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fc2a1c3e8.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UazDriverV1",
				0.700000,
				"UazDriver"
			};
			interpolateWith[]={"UazDriverV1",0.500000};
			equivalentTo="UazDriver";
			interpolationSpeed=1;
			connectTo[]={"UazDriverDying",1};
		};
		class UazDriverV1: UazDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f220f7f0d.rtm";
			speed=-4;
			looped=1;
		};
		class UazDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f6c5189e8.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UazDriver",1};
		};
		class UazDriverDead: UazDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f7cb84aa1.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UazDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class UazCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_ffebcae30.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"UazCoDriverV1",
				0.700000,
				"UazCoDriver"
			};
			interpolateWith[]={"UazCoDriverV1",0.500000};
			equivalentTo="UazCoDriver";
			interpolationSpeed=1;
			connectTo[]={"UazCoDriverDying",1};
		};
		class UazCoDriverV1: UazCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f0d95088e.rtm";
			speed=-4;
			looped=1;
		};
		class UazCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fd28f8e81.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"UazCoDriver",1};
		};
		class UazCoDriverDead: UazCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f6333dd43.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"UazCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class SkodaDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fc4ff25c8.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"SkodaDriverV1",
				0.700000,
				"SkodaDriver"
			};
			interpolateWith[]={"SkodaDriverV1",0.500000};
			equivalentTo="SkodaDriver";
			interpolationSpeed=1;
			connectTo[]={"SkodaDriverDying",1};
		};
		class SkodaDriverV1: SkodaDriver
		{
			file="\dbsgr\anim\gr43_vehicle_fbdd3830a.rtm";
			speed=-4;
			looped=1;
		};
		class SkodaDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f4723330c.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"SkodaDriver",1};
		};
		class SkodaDriverDead: SkodaDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f98b6ba00.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"SkodaDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class SkodaCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f198ac4cb.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"SkodaCoDriverV1",
				0.700000,
				"SkodaCoDriver"
			};
			interpolateWith[]={"SkodaCoDriverV1",0.500000};
			equivalentTo="SkodaCoDriver";
			interpolationSpeed=1;
			connectTo[]={"SkodaCoDriverDying",1};
		};
		class SkodaCoDriverV1: SkodaCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f9e3f2c01.rtm";
			speed=-4;
			looped=1;
		};
		class SkodaCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f0f4f78b2.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"SkodaCoDriver",1};
		};
		class SkodaCoDriverDead: SkodaCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f5a490f13.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"SkodaCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class SkodaCoDriverBack: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f1cd341c7.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"SkodaCoDriverBackV1",
				0.700000,
				"SkodaCoDriverBack"
			};
			interpolateWith[]={"SkodaCoDriverBackV1",0.500000};
			equivalentTo="SkodaCoDriverBack";
			interpolationSpeed=1;
			connectTo[]={"SkodaCoDriverBackDying",1};
		};
		class SkodaCoDriverBackV1: SkodaCoDriverBack
		{
			file="\dbsgr\anim\gr43_vehicle_f1e5be0a5.rtm";
			speed=-4;
			looped=1;
		};
		class SkodaCoDriverBackDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f50383518.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"SkodaCoDriverBack",1};
		};
		class SkodaCoDriverBackDead: SkodaCoDriverBackDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f7647548a.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"SkodaCoDriverBackDying",1};
			connectTo[]={"DeadState",1};
		};
		class PBRDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f27d07ad1.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"PBRDriverV1",
				0.700000,
				"PBRDriver"
			};
			interpolateWith[]={"PBRDriverV1",0.500000};
			equivalentTo="PBRDriver";
			interpolationSpeed=1;
			connectTo[]={"PBRDriverDying",1};
		};
		class PBRDriverV1: PBRDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f97cf46f1.rtm";
			speed=-4;
			looped=1;
		};
		class PBRDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb7080cbe.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"PBRDriver",1};
		};
		class PBRDriverDead: PBRDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f1d3af6b4.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"PBRDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class PBRGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f104e6778.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"PBRGunnerV1",
				0.700000,
				"PBRGunner"
			};
			interpolateWith[]={"PBRGunnerV1",0.500000};
			equivalentTo="PBRGunner";
			interpolationSpeed=1;
			connectTo[]={"PBRGunnerDying",1};
		};
		class PBRGunnerV1: PBRGunner
		{
			file="\dbsgr\anim\gr43_vehicle_f2ea66a1e.rtm";
			speed=-4;
			looped=1;
		};
		class PBRGunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb8da7d2a.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"PBRGunner",1};
		};
		class PBRGunnerDead: PBRGunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb3941b6c.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"PBRGunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class M2Gunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd11e159d.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"M2GunnerV1",
				0.700000,
				"M2Gunner"
			};
			interpolateWith[]={"M2GunnerV1",0.500000};
			equivalentTo="M2Gunner";
			interpolationSpeed=1;
			connectTo[]={"M2GunnerDying",1};
		};
		class M2GunnerV1: M2Gunner
		{
			file="\dbsgr\anim\gr43_vehicle_f289e1e7c.rtm";
			speed=-4;
			looped=1;
		};
		class M2GunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fc9f736e1.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"M2Gunner",1};
		};
		class M2GunnerDead: M2GunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f5547d478.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"M2GunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class HRLGunner: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fd380da38.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"HRLGunnerV1",
				0.700000,
				"HRLGunner"
			};
			interpolateWith[]={"HRLGunnerV1",0.500000};
			equivalentTo="HRLGunner";
			interpolationSpeed=1;
			connectTo[]={"HRLGunnerDying",1};
		};
		class HRLGunnerV1: HRLGunner
		{
			file="\dbsgr\anim\gr43_vehicle_fedc12f22.rtm";
			speed=-4;
			looped=1;
		};
		class HRLGunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\fb9172ef4.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"HRLGunner",1};
		};
		class HRLGunnerDead: HRLGunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa175e560.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"HRLGunnerDying",1};
			connectTo[]={"DeadState",1};
		};
		class ScudDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f8916766d.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ScudDriverV1",
				0.700000,
				"ScudDriver"
			};
			interpolateWith[]={"ScudDriverV1",0.500000};
			equivalentTo="ScudDriver";
			interpolationSpeed=1;
			connectTo[]={"ScudDriverDying",1};
		};
		class ScudDriverV1: ScudDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f5dac717f.rtm";
			speed=-4;
			looped=1;
		};
		class ScudDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f463c5c0f.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ScudDriver",1};
		};
		class ScudDriverDead: ScudDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fa6c147be.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ScudDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class ScudCoDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fe07c601c.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ScudCoDriverV1",
				0.700000,
				"ScudCoDriver"
			};
			interpolateWith[]={"ScudCoDriverV1",0.500000};
			equivalentTo="ScudCoDriver";
			interpolationSpeed=1;
			connectTo[]={"ScudCoDriverDying",1};
		};
		class ScudCoDriverV1: ScudCoDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f3968a645.rtm";
			speed=-4;
			looped=1;
		};
		class ScudCoDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f4f015cf0.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"ScudCoDriver",1};
		};
		class ScudCoDriverDead: ScudCoDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fcaeedc1b.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ScudCoDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class TractorDriver: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_f3b3a0134.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"TractorDriverV1",
				0.700000,
				"TractorDriver"
			};
			interpolateWith[]={"TractorDriverV1",0.500000};
			equivalentTo="TractorDriver";
			interpolationSpeed=1;
			connectTo[]={"TractorDriverDying",1};
		};
		class TractorDriverV1: TractorDriver
		{
			file="\dbsgr\anim\gr43_vehicle_f543e969c.rtm";
			speed=-4;
			looped=1;
		};
		class TractorDriverDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\f01ef4205.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"TractorDriver",1};
		};
		class TractorDriverDead: TractorDriverDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\fb88ab1b1.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"TractorDriverDying",1};
			connectTo[]={"DeadState",1};
		};
		class Para: Driver
		{
			file="\dbsgr\anim\gr43_vehicle_fb5a88666.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"ParaV1",
				0.700000,
				"Para"
			};
			interpolateWith[]={"ParaV1",0.500000};
			equivalentTo="Para";
			interpolationSpeed=1;
			connectTo[]={"ParaDying",1};
		};
		class ParaV1: Para
		{
			file="\dbsgr\anim\gr43_vehicle_f174eb3ea.rtm";
			speed=-4;
			looped=1;
		};
		class ParaDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\ff8865052.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Para",1};
		};
		class ParaDead: ParaDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\f62b49abd.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"ParaDying",1};
			connectTo[]={"DeadState",1};
		};
		class StandTurnR: StandBase
		{
			actions="StandActions";
			
			
			
			soundEnabled=0;
			relSpeedMin=0.500000;
			relSpeedMax=1;
			duty=-1;
			interpolationSpeed=5;
		
file="\dbsgr\anim\gr20_standturnr.rtm";
speed=-0.6;
looped=1;};
		class StandTurnL: StandBase
		{
			actions="StandActions";
			
			
			
			soundEnabled=0;
			relSpeedMin=0.500000;
			relSpeedMax=1;
			duty=-1;
			interpolationSpeed=5;
		
file="\dbsgr\anim\gr20_standturnl.rtm";
speed=-0.6;
looped=1;};
		class StandStrokeFist: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f9e0d7631.rtm";
			speed=-0.970000;
			looped=0;
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
			connectFrom[]={"Stand",1};
			connectTo[]={"StandStrokeFistEnd",1};
		};
		class StandStrokeFistEnd: Default
		{
			actions="StandActions";
			file="\dbsgr\anim\f774d3fdd.rtm";
			speed=10000000000.000000;
			looped=1;
			disableWeapons=1;
			soundEnabled=0;
			duty=0.600000;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
			connectTo[]={"Stand",1};
		};
		class OnChair: StandBase
		{
			actions="NoActions";
			file="\dbsgr\anim\fd078f194.rtm";
			speed=10000000000.000000;
			looped=1;
			soundEnabled=0;
			duty=-1;
			interpolationSpeed=2;
		};
		class EffectStand: StandBase
		{
			actions="StandStandActions";
			file="\dbsgr\anim\f817972db.rtm";
			speed=-8.800000;
			looped=1;
			soundEnabled=0;
			duty=-1;
			interpolationSpeed=2;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class EffectStandStill: StandBase
		{
			actions="StandStillActions";
			file="\dbsgr\anim\f774d3fdd.rtm";
			speed=10000000000.000000;
			looped=1;
			soundEnabled=0;
			equivalentTo="EffectStandStill";
			interpolationSpeed=1;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class EffectStandTalk: StandBase
		{
			actions="StandTalkActions";
			file="\dbsgr\anim\f6b099828.rtm";
			speed=-14;
			looped=1;
			soundEnabled=0;
			duty=-1;
			interpolationSpeed=2;
		};
		class EffectStandSaluteStart: StandBase
		{
			actions="StandSaluteActions";
			file="\dbsgr\anim\fda95b484.rtm";
			speed=-0.500000;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"Stand",2};
		};
		class EffectStandSalute: StandBase
		{
			actions="StandSaluteActions";
			file="\dbsgr\anim\f4479307e.rtm";
			speed=10000000000.000000;
			looped=1;
			soundEnabled=0;
			connectFrom[]={"EffectStandSaluteStart",1};
			connectTo[]={"EffectStandSaluteEnd",1};
		};
		class EffectStandSaluteEnd: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\fa9a659da.rtm";
			speed=-0.500000;
			looped=0;
			soundEnabled=0;
			connectTo[]={"Stand",2};
		};
		class EffectStandmove: StandBase
		{
			actions="StandStillActions";
			file="\dbsgr\anim\f9ae1d96d.rtm";
			speed=-8.800000;
			looped=1;
			soundEnabled=0;
			equivalentTo="EffectStandStill";
			interpolationSpeed=1;
		};
		class EffectStandSitDown: StandBase
		{
			actions="SitActions";
			file="\dbsgr\anim\f16025e25.rtm";
			speed=-4;
			looped=1;
			soundEnabled=0;
			duty=-1;
			variantsPlayer[]={};
			equivalentTo="EffectStandSitDown";
			interpolateTo[]={"SitDownDying",0.100000};
		};
		class EffectStandSitDownVer1: EffectStandSitDown
		{
			file="\dbsgr\anim\f16025e25.rtm";
			speed=10000000000.000000;
			looped=1;
			interpolateTo[]={"SitDownDying",0.100000};
		};
		class EffectStandSitDownVer2: EffectStandSitDown
		{
			file="\dbsgr\anim\f77691ee5.rtm";
			speed=-4.600000;
			looped=1;
			interpolateTo[]={"SitDownDying",0.100000};
		};
		class EffectStandSitDownStill: EffectStandSitDown
		{
			file="\dbsgr\anim\f77691ee5.rtm";
			speed=10000000000.000000;
			interpolateTo[]={"SitDownDying",0.100000};
		};
		class StandToSitDown: StandBase
		{
			actions="SitActions";
			file="\dbsgr\anim\fe12da02d.rtm";
			speed=-3.200000;
			looped=0;
			soundEnabled=0;
			duty=-1;
		};
		class SitDownToStand: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\f93ccca93.rtm";
			speed=-2.500000;
			looped=0;
			soundEnabled=0;
			duty=-1;
		};
		class FXBase: StandBase
		{
			actions="StandActions";
			looped=0;
			soundEnabled=0;
			duty=-1;
			interpolationSpeed=1;
		};
		class FXStandToTel: FXBase
		{
			file="\dbsgr\anim\fb57e2879.rtm";
			speed=-0.500000;
			connectTo[]={"FXStandToTelHand",1};
		};
		class FXStandToTelHand: FXBase
		{
			file="\dbsgr\anim\fca900e3e.rtm";
			speed=-4.500000;
			showItemInRightHand=1;
		};
		class FXStandTelLoop: FXBase
		{
			file="\dbsgr\anim\f748fb634.rtm";
			speed=-10;
			looped=1;
			showItemInRightHand=1;
		};
		class FXStandDropTel: FXBase
		{
			file="\dbsgr\anim\f71f7be8a.rtm";
			speed=-4;
			interpolateWith[]={"FXStandToTel",1};
		};
		class FXStandFromTable: FXBase
		{
			file="\dbsgr\anim\f80d4b193.rtm";
			speed=-3;
		};
		class FXStandUnivTable: FXBase
		{
			file="\dbsgr\anim\f71ee5b01.rtm";
			speed=-8;
			looped=1;
		};
		class FXStandToTable: FXBase
		{
			file="\dbsgr\anim\fd0edf5e3.rtm";
			speed=-2.500000;
		};
		class FXStandDangle: FXBase
		{
			file="\dbsgr\anim\f57143844.rtm";
			speed=-4;
		};
		class FXStandToDip: FXBase
		{
			file="\dbsgr\anim\f9f157d76.rtm";
			speed=-2;
			connectFrom[]={"Stand",1};
			connectTo[]={"FXStandDip",1};
		};
		class FXStandDip: FXBase
		{
			file="\dbsgr\anim\f7ff445ca.rtm";
			speed=-1.500000;
			looped=1;
		};
		class FXStandFromDip: FXBase
		{
			file="\dbsgr\anim\fb0f76460.rtm";
			speed=-2;
			connectFrom[]={"FXStandDip",1};
			connectTo[]={"Stand",1};
		};
		class FXStandSur: FXBase
		{
			file="\dbsgr\anim\f65bde2c9.rtm";
			speed=-2;
		};
		class FXStandSurDead: FXBase
		{
			file="\dbsgr\anim\fddae41d6.rtm";
			speed=-2;
		};
		class FXStandSurUniv: FXBase
		{
			file="\dbsgr\anim\f69ce0a42.rtm";
			speed=10000000000.000000;
		};
		class FXStandSurDown: FXBase
		{
			file="\dbsgr\anim\f71eb6244.rtm";
			speed=-3.500000;
		};
		class FXStandRotateTable: FXBase
		{
			file="\dbsgr\anim\fe3e2206b.rtm";
			speed=-2;
		};
		class FXStandShowTable: FXBase
		{
			file="\dbsgr\anim\fae9b4434.rtm";
			speed=-3;
		};
		class FXStandEndTable: FXBase
		{
			file="\dbsgr\anim\f14714a26.rtm";
			speed=-5;
		};
		class FXStandStraight: FXBase
		{
			file="\dbsgr\anim\fcd077a62.rtm";
			speed=-2;
		};
		class FXStandBug: FXBase
		{
			file="\dbsgr\anim\fd9a593b6.rtm";
			speed=-10;
		};
		class FXStandhip: FXBase
		{
			file="\dbsgr\anim\fc6f4d5a0.rtm";
			speed=-5;
		};
		class FXStandAtt: FXBase
		{
			file="\dbsgr\anim\fadddbd62.rtm";
			speed=10000000000.000000;
		};
		class FXStandAttVar1: FXBase
		{
			file="\dbsgr\anim\fc6f4d5a0.rtm";
			speed=-3;
		};
		class FXangel: FXBase
		{
			file="\dbsgr\anim\f2b06340b.rtm";
			speed=10000000000.000000;
		};
		class FXangel2: FXBase
		{
			file="\dbsgr\anim\f3228f6cb.rtm";
			speed=10000000000.000000;
		};
		class LadderStatic: LadderBase
		{
			file="\dbsgr\anim\f60bda10e.rtm";
			looped=1;
			soundEnabled=0;
			speed=10000000000.000000;
			duty=-1;
		};
		class LadderUpStart: LadderUpBase
		{
			file="\dbsgr\anim\fcb0f6f00.rtm";
			looped=0;
			soundEnabled=0;
			speed=-0.750000;
			duty=-0.500000;
			connectFrom[]={"Stand",1};
			connectTo[]={"LadderStatic",1};
		};
		class LadderUpLoop: LadderUpBase
		{
			file="\dbsgr\anim\fe6e86584.rtm";
			looped=1;
			soundEnabled=0;
			speed=-0.600000;
			duty=-0.500000;
			interpolateWith[]={"LadderStatic",1};
		};
		class LadderUpEnd: LadderBase
		{
			actions="StandActions";
			file="\dbsgr\anim\f57b9fd2d.rtm";
			looped=0;
			soundEnabled=0;
			speed=-1;
			duty=-0.500000;
			onLadder=0;
			connectFrom[]={"LadderStatic",1};
			connectTo[]={"Stand",1};
		};
		class LadderDownStart: LadderDownBase
		{
			file="\dbsgr\anim\f0302f865.rtm";
			looped=0;
			soundEnabled=0;
			speed=-1;
			duty=-0.500000;
			connectFrom[]={"Stand",1};
			connectTo[]={"LadderStatic",1};
		};
		class LadderDownLoop: LadderDownBase
		{
			file="\dbsgr\anim\fa4908c6c.rtm";
			looped=1;
			soundEnabled=0;
			speed=-0.600000;
			duty=-0.500000;
			interpolateWith[]={"LadderStatic",1};
		};
		class LadderDownEnd: LadderDownBase
		{
			actions="StandActions";
			file="\dbsgr\anim\f2daba760.rtm";
			looped=0;
			soundEnabled=0;
			speed=-1;
			duty=-0.500000;
			onLadder=0;
			connectFrom[]={"LadderStatic",1};
			connectTo[]={"Stand",0.900000};
		};
		class EffectWeaponPanic: Default
		{
			file="\dbsgr\anim\f6e073b2c.rtm";
			speed=-9;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandEngageAtWill: Default
		{
			file="\dbsgr\anim\ffd30c589.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandFireAtWill: Default
		{
			file="\dbsgr\anim\ffd30c589.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandFormation: Default
		{
			file="\dbsgr\anim\f4129fffa.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandHoldFire: Default
		{
			file="\dbsgr\anim\f4899da18.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandStop: Default
		{
			file="\dbsgr\anim\fb15bf4b7.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class CommandForward: Default
		{
			file="\dbsgr\anim\f4cd4e5ac.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class EffectCombatStand: Default
		{
			file="\dbsgr\anim\fcce39d1d.rtm";
			speed=-3;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};
		class StandGetInCar: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\gr43_vehicle_ff0ffd6af.rtm";
			speed=-2.250000;
			looped=0;
			soundEnabled=0;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandGetInTank: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\gr43_vehicle_f24428ac5.rtm";
			speed=-1.300000;
			looped=0;
			soundEnabled=0;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class StandGetOutTank: StandBase
		{
			actions="StandActions";
			file="\dbsgr\anim\gr43_vehicle_fcb1c3f46.rtm";
			speed=-3.065000;
			looped=0;
			soundEnabled=0;
			interpolateTo[]={"StandDying",0.100000,"StandDyingVer2",0.100000};
		};
		class CombatGetInCar: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\gr43_vehicle_f0d4e7381.rtm";
			speed=-1.230000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatGetInTank: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\gr43_vehicle_fd440c2bf.rtm";
			speed=-2.380000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CombatGetOutTank: Default
		{
			actions="CombatActions";
			file="\dbsgr\anim\gr43_vehicle_f8904b82e.rtm";
			speed=-0.915000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			interpolateTo[]={"CombatDying",0.100000,"CombatDyingVer2",0.100000,"CombatDyingVer3",0.100000};
		};
		class CivilGetInCar: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\gr43_vehicle_fbbbec1a3.rtm";
			speed=-1.230000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilGetInTank: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\gr43_vehicle_f339d1637.rtm";
			speed=-2.380000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
		class CivilGetOutTank: Default
		{
			actions="CivilActions";
			file="\dbsgr\anim\gr43_vehicle_f343a144e.rtm";
			speed=-0.915000;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			interpolateTo[]={"CivilDying",0.100000,"CivilDyingVer2",0.100000};
		};
	class HandGunStandWalkF: CombatWalkF {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandWalkF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a8834a349.rtm";};class HandGunStandRunF: CombatRunF {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandRunF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a7ce4c187.rtm";};class HandGunStandWalkB: CombatWalkB {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandWalkB";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a51acca4d.rtm";};class HandGunStandRunB: CombatRunB {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandRunB";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a0671e4ad.rtm";};class HandGunStandWalkL: CombatWalkL {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandWalkL";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a97147680.rtm";};class HandGunStandWalkR: CombatWalkR {
speed=-0.31666666666666665;























actions="HandGunStandActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunStandWalkR";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a38655b13.rtm";};class HandGunCrouchWalkF: CrouchWalkF {
speed=-0.31666666666666665;























actions="HandGunCrouchActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunCrouchWalkF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a8834a349.rtm";};class HandGunCrouchRunF: CrouchRunF {
speed=-0.31666666666666665;























actions="HandGunCrouchActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunCrouchRunF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a7ce4c187.rtm";};class HandGunLyingCrawlF: LyingCrawlF {
speed=-1.3166666666666667;























actions="HandGunLyingActions";variantsAI[]={};variantsPlayer[]={};equivalentTo="HandGunLyingCrawlF";showHandGun=1;showPrimaryWeapon=0;

file="\dbsgr\anim\gr46_pistol_a0eafe661.rtm";};
class GR12_CombatWalkFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatWalkF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatWalkFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatWalkF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatWalkLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatWalkLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatWalkLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatWalkLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatWalkRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatWalkRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatWalkRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatWalkRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatRunFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatRunF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatRunFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatRunF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatRunLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatRunLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatRunLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatRunLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatRunRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatRunRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatRunRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatRunRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatSprintFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatSprintF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatSprintFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatSprintF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatSprintLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatSprintLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatSprintLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatSprintLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CombatSprintRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CombatSprintRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CombatSprintRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CombatSprintRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchWalkFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchWalkF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchWalkFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchWalkF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchWalkLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchWalkLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchWalkLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchWalkLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchWalkRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_walk.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchWalkRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchWalkRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_walk.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchWalkRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchRunFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchRunF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchRunFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchRunF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchRunLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchRunLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchRunLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchRunLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchRunRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_run.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchRunRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchRunRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_run.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchRunRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchSprintFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchSprintF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchSprintFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchSprintF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchSprintLFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchSprintLF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchSprintLFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchSprintLF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchSprintRFToProne: Default {file="\dbsgr\anim\stance_stand_prone_sprint.rtm";looped=0;actions="GR12_LyingEntry";connectFrom[]={"CrouchSprintRF",1.0};connectTo[]={"Lying",1.0};interpolateTo[]={"CombatDying",1};
speed=-1.8;};
class GR12_CrouchSprintRFToCrouch: Default {file="\dbsgr\anim\gr36_stance_stand_crouch_sprint.rtm";looped=0;actions="GR12_CrouchEntry";connectFrom[]={"CrouchSprintRF",1.0};connectTo[]={"Crouch",1.0};interpolateTo[]={"CombatDying",1};
speed=-0.65;};
class GR12_CrouchThrowStart: CombatThrowGrenadeStart {actions="CrouchActions";connectFrom[]={"Crouch",0.001};connectTo[]={"GR12_CrouchThrowEnd",0.001};
file="\dbsgr\anim\gr18_grenade_crouch_start.rtm";
speed=-0.5971428871154786;
looped=0;};
class GR12_CrouchThrowEnd: CombatThrowGrenadeEnd {actions="CrouchActions";connectTo[]={"Crouch",0.001};
file="\dbsgr\anim\gr18_grenade_crouch_end.rtm";
speed=-0.5028571128845215;
looped=0;};

class GR16_CombatIdle1: Combat {file="\dbsgr\anim\idle_r016_combat_1.rtm";speed=-2;looped=0;equivalentTo="Combat";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Combat",0.15};connectTo[]={"Combat",0.15};};
class GR16_CombatIdle2: Combat {file="\dbsgr\anim\idle_r016_combat_2.rtm";speed=-2;looped=0;equivalentTo="Combat";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Combat",0.15};connectTo[]={"Combat",0.15};};
class GR16_CombatIdle3: Combat {file="\dbsgr\anim\idle_r016_combat_3.rtm";speed=-2;looped=0;equivalentTo="Combat";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Combat",0.15};connectTo[]={"Combat",0.15};};
class GR16_CrouchIdle1: Crouch {file="\dbsgr\anim\gr36_idle_r016_crouch_1.rtm";speed=-2;looped=0;equivalentTo="Crouch";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Crouch",0.15};connectTo[]={"Crouch",0.15};};
class GR16_CrouchIdle2: Crouch {file="\dbsgr\anim\gr36_idle_r016_crouch_2.rtm";speed=-2;looped=0;equivalentTo="Crouch";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Crouch",0.15};connectTo[]={"Crouch",0.15};};
class GR16_CrouchIdle3: Crouch {file="\dbsgr\anim\gr36_idle_r016_crouch_3.rtm";speed=-2;looped=0;equivalentTo="Crouch";variantsAI[]={};variantsPlayer[]={};variantAfter[]={0,0,0};connectFrom[]={"Crouch",0.15};connectTo[]={"Crouch",0.15};};

class GR18_LowReadyIdle1: CombatRelaxed {looped=0;equivalentTo="CombatRelaxed";variantsPlayer[]={};variantsAI[]={};connectFrom[]={"CombatRelaxed",0.15};connectTo[]={"CombatRelaxed",0.15};
file="\dbsgr\anim\gr20_patrol_idle1.rtm";
speed=-2;};
class GR18_LowReadyIdle2: CombatRelaxed {looped=0;equivalentTo="CombatRelaxed";variantsPlayer[]={};variantsAI[]={};connectFrom[]={"CombatRelaxed",0.15};connectTo[]={"CombatRelaxed",0.15};
file="\dbsgr\anim\gr20_patrol_idle2.rtm";
speed=-2;};


class GR18_LauncherCrouch: Weapon {speed=-0.31666666666666665;variantsAI[]={};variantsPlayer[]={};interpolateWith[]={"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};
class GR18_LauncherCrouchWalkF: WeaponWalkF {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_F.rtm";
speed=-0.7599999904632568;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkB: WeaponWalkB {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_B.rtm";
speed=-0.9288888772328695;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkL: WeaponWalkL {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_L.rtm";
speed=-1.0555555820465088;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkR: WeaponWalkR {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_R.rtm";
speed=-1.0555555820465088;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkLF: WeaponWalkLF {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_LF.rtm";
speed=-0.7600000083475572;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkRF: WeaponWalkRF {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_RF.rtm";
speed=-0.7600000083475572;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkLB: WeaponWalkLB {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_LB.rtm";
speed=-0.9288888928474813;
actions="WeaponActions";};
class GR18_LauncherCrouchWalkRB: WeaponWalkRB {variantsAI[]={};variantsPlayer[]={};
connectAs="";
interpolateWith[]={"GR18_LauncherCrouchWalkF",0.12,"GR18_LauncherCrouchWalkB",0.12,"GR18_LauncherCrouchWalkL",0.12,"GR18_LauncherCrouchWalkR",0.12,"GR18_LauncherCrouchWalkLF",0.12,"GR18_LauncherCrouchWalkRF",0.12,"GR18_LauncherCrouchWalkLB",0.12,"GR18_LauncherCrouchWalkRB",0.12,"GR18_LauncherCrouch",0.12};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_RB.rtm";
speed=-0.9288888928474813;
actions="WeaponActions";};
class GR18_LauncherDown: Weapon {speed=-0.75;connectFrom[]={"Weapon",1};interpolateWith[]={};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};
class GR18_LauncherUp: Weapon {speed=-0.75;connectFrom[]={"GR18_LauncherCrouch",1};interpolateWith[]={};
file="\dbsgr\anim\gr42_gr18_launcher_crouch_ready.rtm";
actions="WeaponActions";
looped=1;
connectTo[]={};};


class GR19_PatrolReady: CombatRelaxed {actions="GR19_PatrolActions";};class GR19_PatrolWalkF: CombatWalkF {file="\dbsgr\anim\gr20_patrol_walkf.rtm";speed=-1.2333333333333334;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkF";interpolateWith[]={"CombatWalkF",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkB: CombatWalkB {file="\dbsgr\anim\gr20_patrol_walkb.rtm";speed=-1.3166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkB";interpolateWith[]={"CombatWalkB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkL: CombatWalkL {file="\dbsgr\anim\gr20_patrol_walkl.rtm";speed=-1.0666666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkL";interpolateWith[]={"CombatWalkL",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkR: CombatWalkR {file="\dbsgr\anim\gr20_patrol_walkr.rtm";speed=-1.0666666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkR";interpolateWith[]={"CombatWalkR",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkLF: CombatWalkLF {file="\dbsgr\anim\gr20_patrol_walklf.rtm";speed=-1.2333333333333334;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkLF";interpolateWith[]={"CombatWalkLF",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkRF: CombatWalkRF {file="\dbsgr\anim\gr20_patrol_walkrf.rtm";speed=-1.2333333333333334;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkRF";interpolateWith[]={"CombatWalkRF",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkLB: CombatWalkLB {file="\dbsgr\anim\gr20_patrol_walklb.rtm";speed=-1.3166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkLB";interpolateWith[]={"CombatWalkLB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolWalkRB: CombatWalkRB {file="\dbsgr\anim\gr20_patrol_walkrb.rtm";speed=-1.3166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatWalkRB";interpolateWith[]={"CombatWalkRB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunF: CombatRunF {actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunF";interpolateWith[]={"CombatRunF",0.15,"Combat",0.15,"CombatRelaxed",0.15};
file="\dbsgr\anim\gr34_patrol_runf.rtm";
speed=-0.6109590387877216;};class GR19_PatrolRunB: CombatRunB {file="\dbsgr\anim\gr20_patrol_runb.rtm";speed=-0.7333333333333333;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunB";interpolateWith[]={"CombatRunB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunL: CombatRunL {file="\dbsgr\anim\gr20_patrol_runl.rtm";speed=-0.8166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunL";interpolateWith[]={"CombatRunL",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunR: CombatRunR {file="\dbsgr\anim\gr20_patrol_runr.rtm";speed=-0.8166666666666667;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunR";interpolateWith[]={"CombatRunR",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunLF: CombatRunLF {actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunLF";interpolateWith[]={"CombatRunLF",0.15,"Combat",0.15,"CombatRelaxed",0.15};
file="\dbsgr\anim\gr34_patrol_runlf.rtm";
speed=-0.6109590284637683;};class GR19_PatrolRunRF: CombatRunRF {actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunRF";interpolateWith[]={"CombatRunRF",0.15,"Combat",0.15,"CombatRelaxed",0.15};
file="\dbsgr\anim\gr34_patrol_runrf.rtm";
speed=-0.6109590284637683;};class GR19_PatrolRunLB: CombatRunLB {file="\dbsgr\anim\gr20_patrol_runlb.rtm";speed=-0.7333333333333333;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunLB";interpolateWith[]={"CombatRunLB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};class GR19_PatrolRunRB: CombatRunRB {file="\dbsgr\anim\gr20_patrol_runrb.rtm";speed=-0.7333333333333333;actions="CombatActions";variantsAI[]={};variantsPlayer[]={};connectAs="CombatRunRB";interpolateWith[]={"CombatRunRB",0.15,"Combat",0.15,"CombatRelaxed",0.15};};

class GR24_LauncherCrouchReload: WeaponReloadAT {
file="\dbsgr\anim\gr42_gr34_launcher_reload.rtm";
speed=-2.1;
looped=0;
actions="WeaponActions";
connectTo[]={"Weapon",1};
variantsAI[]={};
variantsPlayer[]={};};

class GR34_EastReady: GR19_PatrolReady {file="\dbsgr\anim\gr34_gr34_eastready.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};equivalentTo="GR34_EastReady";
variantsAI[]={"GR34_EastIdle1",.5,"GR34_EastIdle2",.5};};
class GR34_EastIdle1: GR18_LowReadyIdle1 {file="\dbsgr\anim\gr34_gr34_eastidle1.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};equivalentTo="GR34_EastReady";connectFrom[]={"GR34_EastReady",.15};connectTo[]={"GR34_EastReady",.15};};
class GR34_EastIdle2: GR18_LowReadyIdle2 {file="\dbsgr\anim\gr34_gr34_eastidle2.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};equivalentTo="GR34_EastReady";connectFrom[]={"GR34_EastReady",.15};connectTo[]={"GR34_EastReady",.15};};
class GR34_EastTurnL: CombatTurnLRelaxed {file="\dbsgr\anim\gr34_gr34_eastturnl.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastTurnR: CombatTurnRRelaxed {file="\dbsgr\anim\gr34_gr34_eastturnr.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkF: GR19_PatrolWalkF {file="\dbsgr\anim\gr34_gr34_eastwalkf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkB: GR19_PatrolWalkB {file="\dbsgr\anim\gr34_gr34_eastwalkb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkL: GR19_PatrolWalkL {file="\dbsgr\anim\gr34_gr34_eastwalkl.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkR: GR19_PatrolWalkR {file="\dbsgr\anim\gr34_gr34_eastwalkr.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkLF: GR19_PatrolWalkLF {file="\dbsgr\anim\gr34_gr34_eastwalklf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkRF: GR19_PatrolWalkRF {file="\dbsgr\anim\gr34_gr34_eastwalkrf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkLB: GR19_PatrolWalkLB {file="\dbsgr\anim\gr34_gr34_eastwalklb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastWalkRB: GR19_PatrolWalkRB {file="\dbsgr\anim\gr34_gr34_eastwalkrb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunF: GR19_PatrolRunF {file="\dbsgr\anim\gr34_gr34_eastrunf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunB: GR19_PatrolRunB {file="\dbsgr\anim\gr34_gr34_eastrunb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunL: GR19_PatrolRunL {file="\dbsgr\anim\gr34_gr34_eastrunl.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunR: GR19_PatrolRunR {file="\dbsgr\anim\gr34_gr34_eastrunr.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunLF: GR19_PatrolRunLF {file="\dbsgr\anim\gr34_gr34_eastrunlf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunRF: GR19_PatrolRunRF {file="\dbsgr\anim\gr34_gr34_eastrunrf.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunLB: GR19_PatrolRunLB {file="\dbsgr\anim\gr34_gr34_eastrunlb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
class GR34_EastRunRB: GR19_PatrolRunRB {file="\dbsgr\anim\gr34_gr34_eastrunrb.rtm";actions="GR34_EastPatrolActions";variantsPlayer[]={};variantsAI[]={};};
		class VulcanGunner: Driver
		{
			file="\dbsgr\anim\gr44_vulcangunnerstat.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]=
			{
				"VulcanGunnerV1",
				0.700000,
				"VulcanGunner"
			};
			interpolateWith[]=
			{
				"VulcanGunnerV1",
				0.500000
			};
			equivalentTo="VulcanGunner";
			interpolationSpeed=1;
			connectTo[]=
			{
				"VulcanGunnerDying",
				1
			};
		};
		class VulcanGunnerV1: VulcanGunner
		{
			file="\dbsgr\anim\gr44_vulcangunner.rtm";
			speed="- 4";
			looped=1;
		};
		class VulcanGunnerDying: DefaultDie
		{
			actions="NoActions";
			file="\dbsgr\anim\gr44_vulcangunnersmrt.rtm";
			speed="- 1";
			looped=0;
			soundEnabled=0;
			connectFrom[]=
			{
				"VulcanGunner",
				1
			};
		};
		class VulcanGunnerDead: VulcanGunnerDying
		{
			actions="DeadActions";
			file="\dbsgr\anim\gr44_vulcangunnersmrt2.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]=
			{
				"VulcanGunnerDying",
				1
			};
			connectTo[]=
			{
				"DeadState",
				1
			};
		};
	};
	class Interpolations
	{
		standF[]=
		{
			1,
			"Stand",
			"StandWalkF",
			"StandWalkLF",
			"StandWalkRF",
			"StandWalkL",
			"StandWalkR",
			"StandRunF"
		};
		standB[]=
		{
			1,
			"Stand",
			"StandWalkLB",
			"StandWalkRB",
			"StandWalkB"
		};
		combatF[]=
		{
			0.900000,
			"Combat",
			"CombatStillPlayer",
			"CombatRelaxed",
			"CombatRunF",
			"CombatRunLF",
			"CombatRunRF",
			"CombatRunL",
			"CombatRunR",
			"CombatSprintF",
			"CombatSprintLF",
			"CombatSprintRF",
			"CombatWalkF",
			"CombatWalkLF",
			"CombatWalkRF",
			"CombatWalkL",
			"CombatWalkR"
		};
		combatB[]=
		{
			1,
			"Combat",
			"CombatStillPlayer",
			"CombatRelaxed",
			"CombatRunLB",
			"CombatRunRB",
			"CombatRunB",
			"CombatWalkLB",
			"CombatWalkRB",
			"CombatWalkB"
		};
		crouchF[]=
		{
			0.500000,
			"CrouchIM",
			"CrouchRunF",
			"CrouchRunLF",
			"CrouchRunRF",
			"CrouchRunL",
			"CrouchRunR",
			"CrouchSprintF",
			"CrouchSprintLF",
			"CrouchSprintRF"
		};
		crouchFW[]=
		{
			0.500000,
			"CrouchIM",
			"CrouchWalkF",
			"CrouchWalkLF",
			"CrouchWalkRF",
			"CrouchWalkL",
			"CrouchWalkR"
		};
		crouchB[]=
		{
			0.500000,
			"CrouchIM",
			"CrouchRunLB",
			"CrouchRunRB",
			"CrouchRunB",
			"CrouchWalkLB",
			"CrouchWalkRB",
			"CrouchWalkB"
		};
		civilF[]=
		{
			1,
			"Civil",
			"CivilRunF",
			"CivilRunLF",
			"CivilRunRF",
			"CivilRunL",
			"CivilRunR",
			"CivilWalkF",
			"CivilWalkLF",
			"CivilWalkRF",
			"CivilWalkL",
			"CivilWalkR"
		};
		civilB[]=
		{
			1,
			"Civil",
			"CivilWalkLB",
			"CivilWalkRB",
			"CivilWalkB",
			"CivilRunLB",
			"CivilRunRB",
			"CivilRunB"
		};
		lyingF[]=
		{
			1,
			"Lying",
			"LyingCrawlF",
			"LyingFastCrawlF",
			"LyingCrawlLF",
			"LyingCrawlRF",
			"LyingCrawlL",
			"LyingCrawlR"
		};
		lyingB[]=
		{
			1,
			"Lying",
			"LyingCrawlLB",
			"LyingCrawlRB",
			"LyingCrawlB"
		};
		civilLyingF[]=
		{
			1,
			"CivilLying",
			"CivilLyingCrawlF",
			"CivilLyingFastCrawlF",
			"CivilLyingCrawlLF",
			"CivilLyingCrawlRF",
			"CivilLyingCrawlL",
			"CivilLyingCrawlR"
		};
		civilLyingB[]=
		{
			1,
			"CivilLying",
			"CivilLyingCrawlLB",
			"CivilLyingCrawlRB",
			"CivilLyingCrawlB"
		};
		lyingVars[]=
		{
			0.100000,
			"Lying",
			"LyingStillV1",
			"LyingTurnL",
			"LyingTurnR"
		};
		civilLyingVars[]=
		{
			0.100000,
			"CivilLying",
			"CivilLyingStillV1"
		};
		combatVars[]=
		{
			0.100000,
			"Combat",
			"CombatStillPlayer",
			"CombatStillV1"
		};
		combatReleaxedVars[]=
		{
			0.100000,
			"Combat",
			"CombatRelaxed",
			"CombatRelaxedStill"
		};
		combatTurnRelaxed[]=
		{
			0.100000,
			"CombatRelaxed",
			"CombatTurnLRelaxed",
			"CombatTurnRRelaxed"
		};
		combatTurn[]=
		{
			0.100000,
			"Combat",
			"CombatStillPlayer",
			"CombatTurnL",
			"CombatTurnR"
		};
		standTurn[]=
		{
			0.100000,
			"Stand",
			"StandTurnL",
			"StandTurnR"
		};
		standFX[]=
		{
			1,
			"Stand",
			"EffectStand",
			"EffectStandTalk",
			"EffectStand",
			"EffectCombatStand",
			"EffectStandStill",
			"CommandFireAtWill",
			"CommandFormation",
			"CommandHoldFire",
			"CommandStop",
			"CommandForward"
		};
		standVars[]=
		{
			1,
			"Stand",
			"StandVar2"
		};
		weaponF[]=
		{
			1,
			"Weapon",
			"WeaponWalkF",
			"WeaponWalkLF",
			"WeaponWalkRF",
			"WeaponWalkL",
			"WeaponWalkR"
		};
		weaponB[]=
		{
			1,
			"Weapon",
			"WeaponWalkLB",
			"WeaponWalkRB",
			"WeaponWalkB"
		};
		weaponTurn[]=
		{
			1,
			"Weapon",
			"WeaponTurnL",
			"WeaponTurnR"
		};
		civilLyingTrans[]=
		{
			2,
			"CivilLying",
			"Lying"
		};
		civilCombatTrans[]=
		{
			2,
			"Combat",
			"Civil"
		};
		civilStandTrans[]=
		{
			2,
			"Stand",
			"Civil"
		};
		civilVars[]=
		{
			0.100000,
			"Civil",
			"CivilStillV1"
		};
		civilTurn[]=
		{
			1,
			"Civil",
			"CivilTurnL",
			"CivilTurnR"
		};
		cargoEquiv[]=
		{
			2,
			"M113Gunner",
			"M113Driver",
			"M113DriverOut",
			"M60Gunner",
			"M60Driver",
			"M60DriverOut",
			"M60Commander",
			"M60CommanderOut",
			"M1A1Gunner",
			"M1A1Driver",
			"M1A1DriverOut",
			"M1A1Commander",
			"Cargo"
		};
		cargoVars[]=
		{
			0.100000,
			"Cargo",
			"CargoVer1",
			"CargoVer2",
			"CargoVer3",
			"CargoVer4",
			"CargoVer5"
		};
		sitDownVars[]=
		{
			1,
			"EffectStandSitDown",
			"EffectStandSitDownVer2",
			"EffectStandSitDownVer1"
		};
	};
	transitionsInterpolated[]={};
	transitionsSimple[]=
	{
		"Lying",
		"LyingDying",
		1,
		"LyingDying",
		"LyingDead",
		1,
		"CivilLying",
		"CivilLyingDying",
		1,
		"CivilLyingDying",
		"CivilLyingDead",
		1,
		"Stand",
		"StandDying",
		1,
		"StandDying",
		"StandDead",
		1,
		"Stand",
		"StandDyingVer2",
		1,
		"StandDyingVer2",
		"StandDeadVer2",
		1,
		"Weapon",
		"WeaponDying",
		1,
		"WeaponDying",
		"WeaponDead",
		1,
		"Weapon",
		"WeaponDyingVer2",
		1,
		"WeaponDyingVer2",
		"WeaponDeadVer2",
		1,
		"Cargo",
		"CargoDying",
		1,
		"CargoDying",
		"CargoDead",
		1,
		"Combat",
		"CombatToWeapon",
		2,
		"CombatToWeapon",
		"Weapon",
		2,
		"Lying",
		"LyingToWeapon",
		2,
		"LyingToWeapon",
		"Weapon",
		2,
		"Weapon",
		"WeaponToLying",
		2,
		"WeaponToLying",
		"Lying",
		2,
		"Combat",
		"CombatReloadMagazine",
		2,
		"CombatReloadMagazine",
		"Combat",
		2,
		"Combat",
		"CombatReloadMGun",
		2,
		"CombatReloadMGun",
		"Combat",
		2,
		"Combat",
		"CombatReloadMortarStart",
		2,
		"CombatReloadMortarStart",
		"CombatReloadMortarEnd",
		2,
		"CombatReloadMortarEnd",
		"Combat",
		2,
		"Combat",
		"CombatThrowGrenadeStart",
		2,
		"CombatThrowGrenadeStart",
		"CombatThrowGrenadeEnd",
		2,
		"CombatThrowGrenadeEnd",
		"Combat",
		2,
		"Stand",
		"StandThrowGrenadeStart",
		2,
		"StandThrowGrenadeStart",
		"StandThrowGrenadeEnd",
		2,
		"StandThrowGrenadeEnd",
		"Stand",
		2,
		"Civil",
		"CivilThrowGrenadeStart",
		2,
		"CivilThrowGrenadeStart",
		"CivilThrowGrenadeEnd",
		2,
		"CivilThrowGrenadeEnd",
		"Civil",
		2,
		"Lying",
		"LyingThrowGrenadeStart",
		2,
		"LyingThrowGrenadeStart",
		"LyingThrowGrenadeEnd",
		2,
		"LyingThrowGrenadeEnd",
		"Lying",
		2,
		"CombatRunF",
		"CombatRunThrowGrenadeStart",
		2,
		"CombatRunThrowGrenadeStart",
		"CombatRunThrowGrenadeEnd",
		2,
		"CombatRunThrowGrenadeEnd",
		"Combat",
		2,
		"CivilRunF",
		"CivilRunThrowGrenadeStart",
		2,
		"CivilRunThrowGrenadeStart",
		"CivilRunThrowGrenadeEnd",
		2,
		"CivilRunThrowGrenadeEnd",
		"Civil",
		2,
		"Lying",
		"LyingReloadMagazine",
		2,
		"LyingReloadMagazine",
		"Lying",
		2,
		"Combat",
		"CombatToBinoc",
		2,
		"CombatToBinoc",
		"Binoc",
		2,
		"Binoc",
		"BinocToCombat",
		2,
		"BinocToCombat",
		"Combat",
		2,
		"Lying",
		"LyingToBinocLying",
		2,
		"LyingToBinocLying",
		"BinocLying",
		2,
		"BinocLying",
		"BinocLyingToLying",
		2,
		"BinocLyingToLying",
		"Lying",
		2,
		"Weapon",
		"WeaponReloadAT",
		2,
		"WeaponReloadAT",
		"Weapon",
		2,
		"Stand",
		"StandToCombat",
		1,
		"StandToCombat",
		"Combat",
		1,
		"Combat",
		"CombatToStand",
		1,
		"CombatToStand",
		"Stand",
		1,
		"Lying",
		"LyingToCombat",
		1.200000,
		"LyingToCombat",
		"Combat",
		1.200000,
		"Combat",
		"CombatToLying",
		1.200000,
		"CombatToLying",
		"Lying",
		1.200000,
		"CombatRunF",
		"CombatRunFToLying",
		1,
		"CombatRunFToLying",
		"Lying",
		1,
		"Lying",
		"LyingToCombatRun",
		1,
		"LyingToCombatRun",
		"CombatRunF",
		1,
		"Civil",
		"CivilToCivilLying",
		1.200000,
		"CivilToCivilLying",
		"CivilLying",
		1.200000,
		"CivilLying",
		"CivilLyingToCivil",
		1.200000,
		"CivilLyingToCivil",
		"Civil",
		1.200000,
		"Combat",
		"CombatGetInCar",
		1,
		"CombatGetInCar",
		"Combat",
		1,
		"Combat",
		"CombatGetInTank",
		1,
		"CombatGetInTank",
		"Combat",
		1,
		"CombatGetOutTank",
		"Combat",
		1,
		"Civil",
		"CivilGetInCar",
		1,
		"CivilGetInCar",
		"Civil",
		1,
		"Civil",
		"CivilGetInTank",
		1,
		"CivilGetInTank",
		"Civil",
		1,
		"CivilGetOutTank",
		"Civil",
		1,
		"Stand",
		"StandGetInCar",
		1,
		"StandGetInCar",
		"Stand",
		1,
		"Stand",
		"StandGetInTank",
		1,
		"StandGetInTank",
		"Stand",
		1,
		"StandGetOutTank",
		"Stand",
		1,
		"Stand",
		"StandToSitDown",
		1,
		"StandToSitDown",
		"EffectStandSitDown",
		1,
		"EffectStandSitDown",
		"SitDownToStand",
		1,
		"SitDownToStand",
		"Stand",
		1,
		"EffectStandSitDown",
		"SitDownDying",
		1,
		"SitDownDying",
		"SitDownDead",
		1,
		"CombatDead",
		"DeadState",
		10,
		"CombatDeadVer2",
		"DeadState",
		10,
		"StandDead",
		"DeadState",
		10,
		"StandDeadVer2",
		"DeadState",
		10,
		"LyingDead",
		"DeadState",
		10,
		"CivilLyingDead",
		"DeadState",
		10,
		"WeaponDead",
		"DeadState",
		10,
		"WeaponDeadVer2",
		"DeadState",
		10,
		"SitDownDead",
		"DeadState",
		10
	};
	transitionsDisabled[]={};
};
