// NPCgenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int reps;
int v1;
int v2;
int v3;
int v4;
string str;
int child;
int adult;
int ageMax;
int fin;

int main()
{
	srand(time(NULL)); //initialize random seed
	//Select number of iterations
	cout << "Number of Charachters to Randomize? \n";
	cin >> reps;
	cout << "\n";

	for (int i = 0; i < reps; i++)
	{
		v1 = rand() % 83 + 1;     // v1 in the range 1 to 83 (Race)

		cout << left << setw(26);

		switch (v1)
		{
		case 1:
			cout << "Fairy ";
			str = "Pixie";
			child = 20;
			adult = 100;
			ageMax = 150;
			break;
		case 2:
			cout << "Brownie ";
			str = "Pixie";
			child = 20;
			adult = 100;
			ageMax = 150;
			break;
		case 3:
			cout << "Nixie ";
			str = "Pixie";
			child = 20;
			adult = 100;
			ageMax = 150;
			break;
		case 4:
			cout << "Imp ";
			str = "Pixie";
			child = 20;
			adult = 100;
			ageMax = 150;
			break;
		case 5:
			cout << "Gnome ";
			str = "Child";
			child = 20;
			adult = 200;
			ageMax = 400;
			break;
		case 6:
			cout << "Dwarf ";
			str = "Child";
			child = 18;
			adult = 200;
			ageMax = 350;
			break;
		case 7:
			cout << "Halfling ";
			str = "Child";
			child = 20;
			adult = 150;
			ageMax = 250;
			break;
		case 8:
			cout << "Human ";
			str = "Child";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 9:
			cout << "Nymph ";
			str = "Child";
			child = 18;
			adult = 1000;
			ageMax = 10000;
			break;
		case 10:
			cout << "Goliath ";
			str = "Child";
			child = 18;
			adult = 50;
			ageMax = 80;
			break;
		case 11:
			cout << "Orc ";
			str = "Child";
			child = 15;
			adult = 30;
			ageMax = 40;
			break;
		case 12:
			cout << "Ogre ";
			str = "Child";
			child = 15;
			adult = 25;
			ageMax = 30;
			break;
		case 13:
			cout << "Cyclops ";
			str = "Child";
			child = 15;
			adult = 25;
			ageMax = 30;
			break;
		case 14:
			cout << "Troll ";
			str = "Child";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 15:
			cout << "Gremlin ";
			str = "Child";
			child = 15;
			adult = 40;
			ageMax = 60;
			break;
		case 16:
			cout << "Goblin ";
			str = "Child";
			child = 15;
			adult = 40;
			ageMax = 60;
			break;
		case 17:
			cout << "Hobgoblin ";
			str = "Child";
			child = 15;
			adult = 40;
			ageMax = 60;
			break;
		case 18:
			cout << "Bugbear ";
			str = "Cub";
			child = 15;
			adult = 50;
			ageMax = 80;
			break;
		case 19:
			cout << "Wood Elf ";
			str = "Child";
			child = 100;
			adult = 650;
			ageMax = 750;
			break;
		case 20:
			cout << "Dark Elf ";
			str = "Child";
			child = 100;
			adult = 650;
			ageMax = 750;
			break;
		case 21:
			cout << "Nobel Elf ";
			str = "Child";
			child = 100;
			adult = 650;
			ageMax = 750;
			break;
		case 22:
			cout << "Teifling ";
			str = "Child";
			child = 18;
			adult = 70;
			ageMax = 110;
			break;
		case 23:
			cout << "Feral Teifling ";
			str = "Child";
			child = 18;
			adult = 70;
			ageMax = 110;
			break;
		case 24:
			cout << "Bluefolk ";
			str = "Child";
			child = 20;
			adult = 200;
			ageMax = 350;
			break;
		case 25:
			cout << "Vampire ";
			str = "Child";
			child = 18;
			adult = 1000;
			ageMax = 12000;
			break;
		case 26:
			cout << "Werewolf ";
			str = "Pup";
			child = 18;
			adult = 100;
			ageMax = 700;
			break;
		case 27:
			cout << "Shade ";
			str = "Child";
			child = 20;
			adult = 500;
			ageMax = 600;
			break;
		case 28:
			cout << "Skulk ";
			str = "Child";
			child = 18;
			adult = 35;
			ageMax = 50;
			break;
		case 29:
			cout << "Shapeshifter ";
			str = "Child";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 30:
			cout << "Warforged ";
			str = "New Model";
			child = 3;
			adult = 20;
			ageMax = 50;
			break;
		case 31:
			cout << "Lizardfolk ";
			str = "Hatchling";
			child = 15;
			adult = 50;
			ageMax = 80;
			break;
		case 32:
			cout << "Dragonborn ";
			str = "Hatchling";
			child = 15;
			adult = 50;
			ageMax = 80;
			break;
		case 33:
			cout << "Tortle ";
			str = "Hatchling";
			child = 15;
			adult = 80;
			ageMax = 120;
			break;
		case 34:
			cout << "Snakefolk ";
			str = "Hatchling";
			child = 15;
			adult = 65;
			ageMax = 100;
			break;
		case 35:
			cout << "Yuan-Ti ";
			str = "Hatchling";
			child = 15;
			adult = 65;
			ageMax = 100;
			break;
		case 36:
			cout << "Birdfolk ";
			str = "Chick";
			child = 15;
			adult = 45;
			ageMax = 60;
			break;
		case 37:
			cout << "Birdfolk(flightless) ";
			str = "Chick";
			child = 15;
			adult = 45;
			ageMax = 60;
			break;
		case 38:
			cout << "Merfolk ";
			str = "Minnow";
			child = 20;
			adult = 100;
			ageMax = 150;
			break;
		case 39:
			cout << "Fishfolk(fish) ";
			str = "Minnow";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 40:
			cout << "Fishfolk(shark) ";
			str = "Pup";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 41:
			cout << "Fishfolk(ray) ";
			str = "Pup";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 42:
			cout << "Fishfolk(eel) ";
			str = "Larva";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 43:
			cout << "Fishfolk(popoise) ";
			str = "Calf";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 44:
			cout << "Fishfolk(whale) ";
			str = "Calf";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 45:
			cout << "Amphibian(frog/toad) ";
			str = "Tadpole";
			child = 18;
			adult = 60;
			ageMax = 70;
			break;
		case 46:
			cout << "Amphibian(salamander) ";
			str = "Hatchling";
			child = 18;
			adult = 60;
			ageMax = 70;
			break;
		case 47:
			cout << "Salamantaur ";
			str = "Hatchling";
			child = 18;
			adult = 60;
			ageMax = 70;
			break;
		case 48:
			cout << "Bigboy(rhino) ";
			str = "Calf";
			child = 15;
			adult = 40;
			ageMax = 50;
			break;
		case 49:
			cout << "Bigboy(hippo) ";
			str = "Calf";
			child = 15;
			adult = 40;
			ageMax = 50;
			break;
		case 50:
			cout << "Bigboy(elephant) ";
			str = "Calf";
			child = 15;
			adult = 40;
			ageMax = 60;
			break;
		case 51:
			cout << "Catfolk(big cat) ";
			str = "Cub";
			child = 18;
			adult = 150;
			ageMax = 250;
			break;
		case 52:
			cout << "Catfolk(house cat) ";
			str = "Kitten";
			child = 18;
			adult = 150;
			ageMax = 250;
			break;
		case 53:
			cout << "Sphinx ";
			str = "Cub";
			child = 18;
			adult = 150;
			ageMax = 250;
			break;
		case 54:
			cout << "Dogfolk ";
			str = "Pup";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 55:
			cout << "Dogfolk(feral) ";
			str = "Pup";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 56:
			cout << "Bearfolk ";
			str = "Cub";
			child = 15;
			adult = 30;
			ageMax = 40;
			break;
		case 57:
			cout << "Beastmen ";
			str = "Pup";
			child = 18;
			adult = 60;
			ageMax = 80;
			break;
		case 58:
			cout << "Primate(ape) ";
			str = "Child";
			child = 18;
			adult = 300;
			ageMax = 400;
			break;
		case 59:
			cout << "Primate(monkey) ";
			str = "Child";
			child = 18;
			adult = 150;
			ageMax = 200;
			break;
		case 60:
			cout << "Marsupial ";
			str = "Joey";
			child = 15;
			adult = 30;
			ageMax = 40;
			break;
		case 61:
			cout << "Monotreme(quills) ";
			str = "Porcupette";
			child = 18;
			adult = 60;
			ageMax = 80;
			break;
		case 62:
			cout << "Monotreme(mole) ";
			str = "Pup";
			child = 18;
			adult = 60;
			ageMax = 80;
			break;
		case 63:
			cout << "Monotreme(platapus) ";
			str = "Puggle";
			child = 18;
			adult = 60;
			ageMax = 80;
			break;
		case 64:
			cout << "Rabbitfolk ";
			str = "Child";
			child = 10;
			adult = 20;
			ageMax = 30;
			break;
		case 65:
			cout << "Edentata(armored) ";
			str = "Pup";
			child = 18;
			adult = 65;
			ageMax = 100;
			break;
		case 66:
			cout << "Edentata(anteater) ";
			str = "Pup";
			child = 18;
			adult = 50;
			ageMax = 60;
			break;
		case 67:
			cout << "Edentata(sloth) ";
			str = "Cub";
			child = 18;
			adult = 60;
			ageMax = 80;
			break;
		case 68:
			cout << "Mustalid(weezle) ";
			str = "Kit";
			child = 18;
			adult = 50;
			ageMax = 60;
			break;
		case 69:
			cout << "Mustalid(otter) ";
			str = "Pup";
			child = 18;
			adult = 50;
			ageMax = 60;
			break;
		case 70:
			cout << "Mustalid(badger) ";
			str = "Kit";
			child = 18;
			adult = 50;
			ageMax = 60;
			break;
		case 71:
			cout << "Sealfolk ";
			str = "Pup";
			child = 18;
			adult = 80;
			ageMax = 120;
			break;
		case 72:
			cout << "Satyr ";
			str = "Kid";
			child = 20;
			adult = 400;
			ageMax = 500;
			break;
		case 73:
			cout << "Faun ";
			str = "Bambi";
			child = 20;
			adult = 400;
			ageMax = 500;
			break;
		case 74:
			cout << "Centaur ";
			str = "Colt";
			child = 18;
			adult = 400;
			ageMax = 500;
			break;
		case 75:
			cout << "Minataur ";
			str = "Calf";
			child = 20;
			adult = 100;
			ageMax = 150;
			break;
		case 76:
			cout << "Ratfolk ";
			str = "Pup";
			child = 10;
			adult = 15;
			ageMax = 20;
			break;
		case 77:
			cout << "Batfolk ";
			str = "Pup";
			child = 18;
			adult = 100;
			ageMax = 150;
			break;
		case 78:
			cout << "Arthropods(insect) ";
			str = "Larva";
			child = 10;
			adult = 20;
			ageMax = 30;
			break;
		case 79:
			cout << "Arthropods(crustation) ";
			str = "Larva";
			child = 20;
			adult = 100;
			ageMax = 150;
			break;
		case 80:
			cout << "Arthropods(spider) ";
			str = "Larva";
			child = 15;
			adult = 40;
			ageMax = 50;
			break;
		case 81:
			cout << "Potato People ";
			str = "Spud";
			child = 10;
			adult = 65;
			ageMax = 100;
			break;
		case 82:
			cout << "Half-Orc ";
			str = "Child";
			child = 15;
			adult = 60;
			ageMax = 75;
			break;
		case 83:
			cout << "Half-Elf ";
			str = "Child";
			child = 20;
			adult = 150;
			ageMax = 180;
			break;
		default:
			cout << v1 << " ";
		}

		v2 = rand() % 13 + 1;     // v2 in the range 1 to 14 (Class)

		cout << left << setw(20);

		switch (v2)
		{
		case 1:
			cout << "Warrior/Knight ";
			break;
		case 2:
			cout << "Barbarian/Berserker ";
			break;
		case 3:
			cout << "Rogue/Assasin ";
			break;
		case 4:
			cout << "Ranger ";
			break;
		case 5:
			cout << "Bard ";
			break;
		case 6:
			cout << "Monk ";
			break;
		case 7:
			cout << "Druid ";
			break;
		case 8:
			cout << "Common Folk ";
			break;
		case 9:
			cout << "Warlock ";
			break;
		case 10:
			cout << "Paladin ";
			break;
		case 11:
			cout << "Sorcerer ";
			break;
		case 12:
			cout << "Cleric/Preist ";
			break;
		case 13:
			cout << "Wizard ";
			break;
		default:
			cout << v2 << " ";
		}

		//?grab profession limitations?
		v3 = rand() % 447 + 1;     // v3 in the range 1 to 447 (Proffession)

		cout << left << setw(32);

		switch(v3)
		{
		case 1:
			cout << "Animal/Monster Handler";
			break;
		case 2:
			cout << "Breeder";
			break;
		case 3:
			cout << "Gamekeeper";
			break;
		case 4:
			cout << "Beekeeper";
			break;
		case 5:
			cout << "Falconer";
			break;
		case 6:
			cout << "Fowler / Plumer";
			break;
		case 7:
			cout << "Groom";
			break;
		case 8:
			cout << "Stablehand";
			break;
		case 9:
			cout << "Horse Trainer";
			break;
		case 10:
			cout << "Master-of-Horses";
			break;
		case 11:
			cout << "Master-of-Hounds ";
			break;
		case 12:
			cout << "Zookeeper";
			break;
		case 13:
			cout << "Ranger";
			break;
		case 14:
			cout << "Fisher";
			break;
		case 15:
			cout << "Hunter";
			break;
		case 16:
			cout << "Trapper ";
			break;
		case 17:
			cout << "Cowherd/Herder/Shepherd";
			break;
		case 18:
			cout << "Dairyboy/Dairymaid";
			break;
		case 19:
			cout << "Baler";
			break;
		case 20:
			cout << "Farmer";
			break;
		case 21:
			cout << "Miller";
			break;
		case 22:
			cout << "Florist";
			break;
		case 23:
			cout << "Forager";
			break;
		case 24:
			cout << "Forester";
			break;
		case 25:
			cout << "Arborist ";
			break;
		case 26:
			cout << "Lumberjack";
			break;
		case 27:
			cout << "Miner";
			break;
		case 28:
			cout << "Quarryman/Quarrywoman";
			break;
		case 29:
			cout << "Prospector ";
			break;
		case 30:
			cout << "Stonemason";
			break;
		case 31:
			cout << "Brickmaker";
			break;
		case 32:
			cout << "Brickmason";
			break;
		case 33:
			cout << "Construction Worker";
			break;
		case 34:
			cout << "Operator";
			break;
		case 35:
			cout << "Carpenter";
			break;
		case 36:
			cout << "Glazier";
			break;
		case 37:
			cout << "Plasterer";
			break;
		case 38:
			cout << "Roofer/Thatcher";
			break;
		case 39:
			cout << "Architect";
			break;
		case 40:
			cout << "General Contractor ";
			break;
		case 41:
			cout << "Roadlayer/Streetlayer ";
			break;
		case 42:
			cout << "Celebrity";
			break;
		case 43:
			cout << "Athlete";
			break;
		case 44:
			cout << "Wrestler";
			break;
		case 45:
			cout << "Gladiator";
			break;
		case 46:
			cout << "Acrobat";
			break;
		case 47:
			cout << "Aerialist/Trapezist";
			break;
		case 48:
			cout << "Contortionist";
			break;
		case 49:
			cout << "Juggler";
			break;
		case 50:
			cout << "Ropewalker / Equilibrist";
			break;
		case 51:
			cout << "Ringmaster/Ringmistress";
			break;
		case 52:
			cout << "Stuntman/Stuntwoman";
			break;
		case 53:
			cout << "Jester";
			break;
		case 54:
			cout << "Clown";
			break;
		case 55:
			cout << "Comedian";
			break;
		case 56:
			cout << "Dancer";
			break;
		case 57:
			cout << "Magician ";
			break;
		case 58:
			cout << "Costumer";
			break;
		case 59:
			cout << "Fashion Designer";
			break;
		case 60:
			cout << "Makeup Artist";
			break;
		case 61:
			cout << "Model";
			break;
		case 62:
			cout << "Actor";
			break;
		case 63:
			cout << "Theater Director";
			break;
		case 64:
			cout << "Stagehand ";
			break;
		case 65:
			cout << "Arranger";
			break;
		case 66:
			cout << "Conductor";
			break;
		case 67:
			cout << "Choirmaster ";
			break;
		case 68:
			cout << "Singer/Soprano";
			break;
		case 69:
			cout << "Musician";
			break;
		case 70:
			cout << "Busker/Street Musician";
			break;
		case 71:
			cout << "Playwright";
			break;
		case 72:
			cout << "Writer";
			break;
		case 73:
			cout << "Poet";
			break;
		case 74:
			cout << "Minstrel ";
			break;
		case 75:
			cout << "Skald";
			break;
		case 76:
			cout << "Painter";
			break;
		case 77:
			cout << "Limner";
			break;
		case 78:
			cout << "Illuminator ";
			break;
		case 79:
			cout << "Glasspainter";
			break;
		case 80:
			cout << "Tattooist";
			break;
		case 81:
			cout << "Sculptor";
			break;
		case 82:
			cout << "Potter ";
			break;
		case 83:
			cout << "Printer";
			break;
		case 84:
			cout << "Restorer ";
			break;
		case 85:
			cout << "Engraver";
			break;
		case 86:
			cout << "Embroiderer";
			break;
		case 87:
			cout << "Dyer ";
			break;
		case 88:
			cout << "Mercer ";
			break;
		case 89:
			cout << "Seamstress/Tailor";
			break;
		case 90:
			cout << "Weaver";
			break;
		case 91:
			cout << "Rugmaker ";
			break;
		case 92:
			cout << "Renderer";
			break;
		case 93:
			cout << "Furrier ";
			break;
		case 94:
			cout << "Taxidermist";
			break;
		case 95:
			cout << "Glovemaker";
			break;
		case 96:
			cout << "Bookbinder";
			break;
		case 97:
			cout << "Cobbler ";
			break;
		case 98:
			cout << "Hatter/Milliner";
			break;
		case 99:
			cout << "Leatherworker";
			break;
		case 100:
			cout << "Tanner";
			break;
		case 101:
			cout << "Saddler";
			break;
		case 102:
			cout << "Lapidary ";
			break;
		case 103:
			cout << "Blacksmith";
			break;
		case 104:
			cout << "Armorer";
			break;
		case 105:
			cout << "Bladesmith";
			break;
		case 106:
			cout << "Weaponsmith";
			break;
		case 107:
			cout << "Accoutrementer/Coinsmith";
			break;
		case 108:
			cout << "Cutler";
			break;
		case 109:
			cout << "Goldsmith/Silversmith";
			break;
		case 110:
			cout << "Jeweler";
			break;
		case 111:
			cout << "Glassworker ";
			break;
		case 112:
			cout << "Bottler ";
			break;
		case 113:
			cout << "Optician";
			break;
		case 114:
			cout << "Bowyer";
			break;
		case 115:
			cout << "Fletcher";
			break;
		case 116:
			cout << "Cartwright ";
			break;
		case 117:
			cout << "Wheelwright";
			break;
		case 118:
			cout << "Cooper/Hooper";
			break;
		case 119:
			cout << "Furniture Artisan";
			break;
		case 120:
			cout << "Whittler/Woodcarver";
			break;
		case 121:
			cout << "Toymaker";
			break;
		case 122:
			cout << "Tinker";
			break;
		case 123:
			cout << "Watchmaker";
			break;
		case 124:
			cout << "Locksmith";
			break;
		case 125:
			cout << "Instrument Maker ";
			break;
		case 126:
			cout << "Luthier";
			break;
		case 127:
			cout << "Candlemaker";
			break;
		case 128:
			cout << "Broom Maker";
			break;
		case 129:
			cout << "Ropemaker";
			break;
		case 130:
			cout << "Soaper ";
			break;
		case 131:
			cout << "Farrier";
			break;
		case 132:
			cout << "Vintner ";
			break;
		case 133:
			cout << "Brewer";
			break;
		case 134:
			cout << "Chef";
			break;
		case 135:
			cout << "Cook";
			break;
		case 136:
			cout << "Kitchen Drudge";
			break;
		case 137:
			cout << "Baker ";
			break;
		case 138:
			cout << "Pastry Chef";
			break;
		case 139:
			cout << "Acater";
			break;
		case 140:
			cout << "Butcher";
			break;
		case 141:
			cout << "Barkeep";
			break;
		case 142:
			cout << "Barmaid/Barboy";
			break;
		case 143:
			cout << "Tunner";
			break;
		case 144:
			cout << "Water Bearer";
			break;
		case 145:
			cout << "Barber";
			break;
		case 146:
			cout << "Lector";
			break;
		case 147:
			cout << "Copyist";
			break;
		case 148:
			cout << "Charcoal Maker";
			break;
		case 149:
			cout << "Chatelaine/Majordomo";
			break;
		case 150:
			cout << "Butler";
			break;
		case 151:
			cout << "Servant";
			break;
		case 152:
			cout << "Maid";
			break;
		case 153:
			cout << "Caregiver";
			break;
		case 154:
			cout << "Nanny/Nursemaid";
			break;
		case 155:
			cout << "Wet Nurse";
			break;
		case 156:
			cout << "Laundry Worker";
			break;
		case 157:
			cout << "Chimney Sweeper";
			break;
		case 158:
			cout << "Food & Drink Taster ";
			break;
		case 159:
			cout << "Porter";
			break;
		case 160:
			cout << "Plumber";
			break;
		case 161:
			cout << "Lamplighter";
			break;
		case 162:
			cout << "Gardener/Landscaper";
			break;
		case 163:
			cout << "Groundskeeper ";
			break;
		case 164:
			cout << "Street Cleaner";
			break;
		case 165:
			cout << "Knacker ";
			break;
		case 166:
			cout << "Exterminator";
			break;
		case 167:
			cout << "Gongfarmer ";
			break;
		case 168:
			cout << "Gravedigger";
			break;
		case 169:
			cout << "Talent Scout";
			break;
		case 170:
			cout << "Trainer";
			break;
		case 171:
			cout << "Longshoreman";
			break;
		case 172:
			cout << "Boatman";
			break;
		case 173:
			cout << "Bosun";
			break;
		case 174:
			cout << "Cabbie/Wagoner";
			break;
		case 175:
			cout << "Cabin Boy/Cabin Girl";
			break;
		case 176:
			cout << "Caravaneer";
			break;
		case 177:
			cout << "Charioteer";
			break;
		case 178:
			cout << "Carter";
			break;
		case 179:
			cout << "Ferryman";
			break;
		case 180:
			cout << "First Mate";
			break;
		case 181:
			cout << "Helmsman";
			break;
		case 182:
			cout << "Navigator";
			break;
		case 183:
			cout << "Purser";
			break;
		case 184:
			cout << "Sailor";
			break;
		case 185:
			cout << "Sea Captain";
			break;
		case 186:
			cout << "Shipwright";
			break;
		case 187:
			cout << "Billboardposter";
			break;
		case 188:
			cout << "Courier/Messenger/Herald";
			break;
		case 189:
			cout << "Interpreter/Translator";
			break;
		case 190:
			cout << "Linguist";
			break;
		case 191:
			cout << "Town Crier";
			break;
		case 192:
			cout << "Grocer";
			break;
		case 193:
			cout << "Merchant";
			break;
		case 194:
			cout << "Draper";
			break;
		case 195:
			cout << "Peddler";
			break;
		case 196:
			cout << "Thriftdealer";
			break;
		case 197:
			cout << "Tradesman";
			break;
		case 198:
			cout << "Vendor ";
			break;
		case 199:
			cout << "Chandler";
			break;
		case 200:
			cout << "Clerk";
			break;
		case 201:
			cout << "Accountant/Bookkeeper";
			break;
		case 202:
			cout << "Actuary ";
			break;
		case 203:
			cout << "Speculator";
			break;
		case 204:
			cout << "Appraiser";
			break;
		case 205:
			cout << "Auctioneer";
			break;
		case 206:
			cout << "Collector";
			break;
		case 207:
			cout << "Animal/Monster Collector";
			break;
		case 208:
			cout << "Debt Collector";
			break;
		case 209:
			cout << "Banker";
			break;
		case 210:
			cout << "Moneychanger";
			break;
		case 211:
			cout << "Moneylender";
			break;
		case 212:
			cout << "Curator ";
			break;
		case 213:
			cout << "Plantation Owner";
			break;
		case 214:
			cout << "Innkeeper ";
			break;
		case 215:
			cout << "Guild Master";
			break;
		case 216:
			cout << "Land Surveyor";
			break;
		case 217:
			cout << "Pathfinder";
			break;
		case 218:
			cout << "Croupier";
			break;
		case 219:
			cout << "Bagniokeeper";
			break;
		case 220:
			cout << "Pimp/Madame";
			break;
		case 221:
			cout << "Prostitute";
			break;
		case 222:
			cout << "Poisoner ";
			break;
		case 223:
			cout << "Poacher";
			break;
		case 224:
			cout << "Cockfighter/Gamefighter";
			break;
		case 225:
			cout << "Fence";
			break;
		case 226:
			cout << "Forger";
			break;
		case 227:
			cout << "Charlatan/Conman";
			break;
		case 228:
			cout << "Extortioner";
			break;
		case 229:
			cout << "Loan Shark";
			break;
		case 230:
			cout << "Crime Boss";
			break;
		case 231:
			cout << "Drug Lord";
			break;
		case 232:
			cout << "Drug Dealer";
			break;
		case 233:
			cout << "Smuggler";
			break;
		case 234:
			cout << "Thief ";
			break;
		case 235:
			cout << "Cutpurse";
			break;
		case 236:
			cout << "Burglar ";
			break;
		case 237:
			cout << "Fugitive";
			break;
		case 238:
			cout << "Highwayman";
			break;
		case 239:
			cout << "Bandit";
			break;
		case 240:
			cout << "Pirate";
			break;
		case 241:
			cout << "Kidnapper";
			break;
		case 242:
			cout << "Assassin";
			break;
		case 243:
			cout << "Raider/Marauder";
			break;
		case 244:
			cout << "Grave Robber/Tomb Raider";
			break;
		case 245:
			cout << "Bounty Hunter";
			break;
		case 246:
			cout << "Blood Hunter/Monster Hunter";
			break;
		case 247:
			cout << "Gambler ";
			break;
		case 248:
			cout << "Ex-Criminal";
			break;
		case 249:
			cout << "Disgraced Noble";
			break;
		case 250:
			cout << "Deserter";
			break;
		case 251:
			cout << "Exile";
			break;
		case 252:
			cout << "Refugee";
			break;
		case 253:
			cout << "Rebel/Political Dissident";
			break;
		case 254:
			cout << "Heretic";
			break;
		case 255:
			cout << "Runaway Slave";
			break;
		case 256:
			cout << "Slave";
			break;
		case 257:
			cout << "Prisoner ";
			break;
		case 258:
			cout << "Drunkar";
			break;
		case 259:
			cout << "Rag-and-Bone Man";
			break;
		case 260:
			cout << "Crossing Sweeper";
			break;
		case 261:
			cout << "Beggar/Pauper ";
			break;
		case 262:
			cout << "Urchin";
			break;
		case 263:
			cout << "Scavenger/Mudlark/Tosher";
			break;
		case 264:
			cout << "Squatter";
			break;
		case 265:
			cout << "Housewife/Househusband";
			break;
		case 266:
			cout << "Elder";
			break;
		case 267:
			cout << "Hermit";
			break;
		case 268:
			cout << "Pilgrim";
			break;
		case 269:
			cout << "Traveler/Wanderer/Vagabond";
			break;
		case 270:
			cout << "Explorer";
			break;
		case 271:
			cout << "Dungeon Delver";
			break;
		case 272:
			cout << "Adventurer";
			break;
		case 273:
			cout << "Folk Hero";
			break;
		case 274:
			cout << "Dean";
			break;
		case 275:
			cout << "Professor";
			break;
		case 276:
			cout << "Teacher";
			break;
		case 277:
			cout << "Abecedarian";
			break;
		case 278:
			cout << "Tutor";
			break;
		case 279:
			cout << "Student ";
			break;
		case 280:
			cout << "Scholar/Researcher";
			break;
		case 281:
			cout << "Apprentice";
			break;
		case 282:
			cout << "Scribe";
			break;
		case 283:
			cout << "Librarian";
			break;
		case 284:
			cout << "Archivist";
			break;
		case 285:
			cout << "Historian";
			break;
		case 286:
			cout << "Cartographer";
			break;
		case 287:
			cout << "Philosopher ";
			break;
		case 288:
			cout << "Theologian";
			break;
		case 289:
			cout << "Astrologer ";
			break;
		case 290:
			cout << "Horologist";
			break;
		case 291:
			cout << "Mathematician";
			break;
		case 292:
			cout << "Engineer ";
			break;
		case 293:
			cout << "Assayer ";
			break;
		case 294:
			cout << "Astronomer";
			break;
		case 295:
			cout << "Archaeologist";
			break;
		case 296:
			cout << "Taxonomist";
			break;
		case 297:
			cout << "Zoologist ";
			break;
		case 298:
			cout << "Entomologist";
			break;
		case 299:
			cout << "Drakologist";
			break;
		case 300:
			cout << "Anthropologist";
			break;
		case 301:
			cout << "Botanist ";
			break;
		case 302:
			cout << "Herbalist";
			break;
		case 303:
			cout << "Chemist";
			break;
		case 304:
			cout << "Apothecary";
			break;
		case 305:
			cout << "Bloodletter ";
			break;
		case 306:
			cout << "Accoucheur/Obstetrician/Midwife";
			break;
		case 307:
			cout << "Nurse";
			break;
		case 308:
			cout << "Veterinarian";
			break;
		case 309:
			cout << "Doctor/Physician";
			break;
		case 310:
			cout << "Surgeon/Chirurgeon";
			break;
		case 311:
			cout << "Mortician";
			break;
		case 312:
			cout << "Optometrist";
			break;
		case 313:
			cout << "Conservationist";
			break;
		case 314:
			cout << "Emperor/Empress";
			break;
		case 315:
			cout << "King/Queen";
			break;
		case 316:
			cout << "Prince/Princess ";
			break;
		case 317:
			cout << " Duke/Duchess";
			break;
		case 318:
			cout << "Marquess/Marchioness";
			break;
		case 319:
			cout << "Count/Earl/Countess";
			break;
		case 320:
			cout << "Viscount/Viscountess";
			break;
		case 321:
			cout << "Baron/Baroness ";
			break;
		case 322:
			cout << "Noble/Aristocrat";
			break;
		case 323:
			cout << "Ward";
			break;
		case 324:
			cout << "Spymaster";
			break;
		case 325:
			cout << "Courtier ";
			break;
		case 326:
			cout << "Master-of-the-Revels";
			break;
		case 327:
			cout << "Lady-in-Waiting";
			break;
		case 328:
			cout << "Steward";
			break;
		case 329:
			cout << "Page";
			break;
		case 330:
			cout << "Orator/Spokesman";
			break;
		case 331:
			cout << "Diplomat";
			break;
		case 332:
			cout << "Chief";
			break;
		case 333:
			cout << "Chancellor";
			break;
		case 334:
			cout << "Senator";
			break;
		case 335:
			cout << "Alderman";
			break;
		case 336:
			cout << "Sheriff";
			break;
		case 337:
			cout << "Knight";
			break;
		case 338:
			cout << "Squire";
			break;
		case 339:
			cout << "Master-of-Coin";
			break;
		case 340:
			cout << "Minister";
			break;
		case 341:
			cout << "Assay Master";
			break;
		case 342:
			cout << "Affeeror ";
			break;
		case 343:
			cout << "Agister";
			break;
		case 344:
			cout << "Tax Collector";
			break;
		case 345:
			cout << "Judge";
			break;
		case 346:
			cout << "Lawyer/Advocate";
			break;
		case 347:
			cout << "Alienist";
			break;
		case 348:
			cout << "Notary ";
			break;
		case 349:
			cout << "Bailiff";
			break;
		case 350:
			cout << "Jailer ";
			break;
		case 351:
			cout << "Guard/Sentinel";
			break;
		case 352:
			cout << "Warden";
			break;
		case 353:
			cout << "Slave Driver";
			break;
		case 354:
			cout << "Torturer";
			break;
		case 355:
			cout << "Executioner";
			break;
		case 356:
			cout << "Bodyguard";
			break;
		case 357:
			cout << "Bouncer";
			break;
		case 358:
			cout << "Tollkeeper ";
			break;
		case 359:
			cout << "Firefighter ";
			break;
		case 360:
			cout << "City Watch";
			break;
		case 361:
			cout << "Drummer/Fifer";
			break;
		case 362:
			cout << "Runner ";
			break;
		case 363:
			cout << "Sapper";
			break;
		case 364:
			cout << "Scout ";
			break;
		case 365:
			cout << "Medic";
			break;
		case 366:
			cout << "Duelist";
			break;
		case 367:
			cout << "Mercenary";
			break;
		case 368:
			cout << "Soldier/Man-at-Arms";
			break;
		case 369:
			cout << "Marksman/Archer";
			break;
		case 370:
			cout << "Siege Artillerist";
			break;
		case 371:
			cout << "Warmage";
			break;
		case 372:
			cout << "Cavalryman/Cavalier";
			break;
		case 373:
			cout << "Marshall";
			break;
		case 374:
			cout << "Inspection Officer";
			break;
		case 375:
			cout << "Quartermaster ";
			break;
		case 376:
			cout << "Detective/Investigator";
			break;
		case 377:
			cout << "Intelligence Officer";
			break;
		case 378:
			cout << "Spy";
			break;
		case 379:
			cout << " Special Force Soldier";
			break;
		case 380:
			cout << "Constable";
			break;
		case 381:
			cout << "Sergeant ";
			break;
		case 382:
			cout << "Sergeant-at-Arms";
			break;
		case 383:
			cout << "Tactician";
			break;
		case 384:
			cout << "Commissar";
			break;
		case 385:
			cout << "Lieutenant";
			break;
		case 386:
			cout << "Captain";
			break;
		case 387:
			cout << "Castellan";
			break;
		case 388:
			cout << "Privateer ";
			break;
		case 389:
			cout << "Admiral";
			break;
		case 390:
			cout << "General ";
			break;
		case 391:
			cout << "Royal Guard ";
			break;
		case 392:
			cout << "Almoner";
			break;
		case 393:
			cout << "Cantor";
			break;
		case 394:
			cout << "Pardoner";
			break;
		case 395:
			cout << "Diviner";
			break;
		case 396:
			cout << "Monk ";
			break;
		case 397:
			cout << "Abbot/Abbess";
			break;
		case 398:
			cout << "Missionary";
			break;
		case 399:
			cout << "Sexton";
			break;
		case 400:
			cout << "Deacon";
			break;
		case 401:
			cout << "Nun";
			break;
		case 402:
			cout << "Confessor";
			break;
		case 403:
			cout << "Exorcist";
			break;
		case 404:
			cout << "Priest";
			break;
		case 405:
			cout << "Prophet";
			break;
		case 406:
			cout << "Cleric ";
			break;
		case 407:
			cout << "Chaplain";
			break;
		case 408:
			cout << "Templar ";
			break;
		case 409:
			cout << "Paladin";
			break;
		case 410:
			cout << "Bishop";
			break;
		case 411:
			cout << "Archbishop";
			break;
		case 412:
			cout << "Cardinal";
			break;
		case 413:
			cout << "High Priest/Pope";
			break;
		case 414:
			cout << "Inquisitor";
			break;
		case 415:
			cout << "Cultist";
			break;
		case 416:
			cout << "Cult Leader ";
			break;
		case 417:
			cout << "Wordsmith";
			break;
		case 418:
			cout << "Bard";
			break;
		case 419:
			cout << "Healer ";
			break;
		case 420:
			cout << "Hearth Witch/Hearth Wizard";
			break;
		case 421:
			cout << "Artificer";
			break;
		case 422:
			cout << "Medium";
			break;
		case 423:
			cout << "Ritualist ";
			break;
		case 424:
			cout << "Runecaster";
			break;
		case 425:
			cout << "Alchemist ";
			break;
		case 426:
			cout << "Mage";
			break;
		case 427:
			cout << "Wizard";
			break;
		case 428:
			cout << "Sorcerer/Sorceress";
			break;
		case 429:
			cout << "Warlock";
			break;
		case 430:
			cout << "Witch";
			break;
		case 431:
			cout << "Illusionist";
			break;
		case 432:
			cout << "Enchanter/Enchantress";
			break;
		case 433:
			cout << "Evoker";
			break;
		case 434:
			cout << "Elementalist";
			break;
		case 435:
			cout << "Meteorologist";
			break;
		case 436:
			cout << "Necromancer";
			break;
		case 437:
			cout << "Summoner";
			break;
		case 438:
			cout << "Conjuror";
			break;
		case 439:
			cout << "Abjurer";
			break;
		case 440:
			cout << "Shapeshifter";
			break;
		case 441:
			cout << "Transmuter";
			break;
		case 442:
			cout << "Shaman";
			break;
		case 443:
			cout << "Witchdoctor";
			break;
		case 444:
			cout << "Seer/Oracle";
			break;
		case 445:
			cout << "Druid";
			break;
		case 446:
			cout << "Sage";
			break;
		case 447:
			cout << "Archmage";
			break;
		default:
			cout << v3 << " ";
		}
		//grab gold bonus / display gold bonus
		v4 = rand() % ageMax + 1; // v4 in the range 1 to ageMax (Age)
		//display age
		cout << " " << v4 << " ";
		//display lifecycle stage
		if (v4 < child)
		{
			cout << str << "\n";
		}
		else if (child < v4 && v4 < adult)
		{
			cout << "Adult\n";
		}
		else
		{
			cout << "Elder\n";
		}
	}
	return 0;
}

