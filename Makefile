CXX = g++-5
CXXFLAGS = -std=c++14 -Wall -MMD
EXEC = cc-3k
OBJECTS = main.o ActionBar.o BoostAttack.o BoostDefence.o Cell.o Character.o Controller.o DoorWay.o Dragon.o DragonGold.o Drow.o Dwarf.o Elf.o Enemy.o FloorTile.o Goblin.o Gold.o Grid.o Halfling.o Human.o Item.o Merchant.o MerchantGold.o NormalGold.o Orc.o Passage.o Player.o PoisonHealth.o Potions.o RestoreHealth.o Shade.o SmallGold.o Stairs.o Subject.o TextDisplay.o Troll.o Vampire.o Wall.o WoundAttack.o WoundDefence.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
