class CfgPatches
{
	class Platform
	{
		units[] = {"land_Platform"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class House;
	class land_Platform: House
	{
		scope = 1;
		model = "Platform\models\land_Platform.p3d";


	};




};