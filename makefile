OBJS	= AirMedic.o AirPeopleFactory.o Army.o BrokenTransportState.o main.o Citizen.o ConcreteCountry.o ConcreteCountryFactory.o ConcreteMediator.o Country.o CountryFactory.o LandCitizen.o LandMedic.o LandPeopleFactory.o Medic.o Memento.o mementostorage.o Navy.o People.o PeopleAliveState.o PeopleDeadState.o PeopleInjuredState.o PeopleIterator.o Pilot.o SeaMedic.o Transport.o Soldier.o WaterPeopleFactory.o PeopleFactory.o PeopleStatus.o WarEngine.o WarPhaseEarly.o WarPhase.o WarPhaseMiddle.o WarPhaseLate.o WorkingTransportState.o Mediator.o Facade.o
SOURCE	= AirMedic.cpp AirPeopleFactory.cpp Army.cpp BrokenTransportState.cpp main.cpp Citizen.cpp ConcreteCountry.cpp ConcreteCountryFactory.cpp ConcreteMediator.cpp Country.cpp CountryFactory.cpp LandCitizen.cpp LandMedic.cpp LandPeopleFactory.cpp Medic.cpp Memento.cpp mementostorage.cpp Navy.cpp People.cpp PeopleAliveState.cpp PeopleDeadState.cpp PeopleInjuredState.cpp PeopleIterator.cpp Pilot.cpp SeaMedic.cpp Transport.cpp Soldier.cpp WaterPeopleFactory.cpp PeopleFactory.cpp PeopleStatus.cpp WarEngine.cpp WarPhaseEarly.cpp WarPhase.cpp WarPhaseMiddle.cpp WarPhaseLate.cpp WorkingTransportState.cpp Mediator.cpp Facade.cpp
HEADER	= AirMedic.h AirPeopleFactory.h Army.h BrokenTransportState.h Citizen.h ConcreteCountry.h ConcreteCountryFactory.h ConcreteMediator.h Country.h CountryFactory.h LandCitizen.h LandMedic.h LandPeopleFactory.h Medic.h Memento.h mementostorage.h Navy.h People.h PeopleAliveState.h PeopleDeadState.h PeopleFactory.h PeopleInjuredState.h PeopleIterator.h PeopleStatus.h Pilot.h SeaMedic.h Soldier.h stateMem.h Transport.h TransportState.h WaterPeopleFactory.h WarEngine.h WarPhase.h WarPhaseEarly.h WarPhaseMiddle.h WarPhaseLate.h WorkingTransportState.h Mediator.h Facade.h
OUT	= main.out
CC	 = g++
FLAGS	 = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

AirMedic.o: AirMedic.cpp
	$(CC) $(FLAGS) AirMedic.cpp

AirPeopleFactory.o: AirPeopleFactory.cpp
	$(CC) $(FLAGS) AirPeopleFactory.cpp

Army.o: Army.cpp
	$(CC) $(FLAGS) Army.cpp

BrokenTransportState.o: BrokenTransportState.cpp
	$(CC) $(FLAGS) BrokenTransportState.cpp

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

Citizen.o: Citizen.cpp
	$(CC) $(FLAGS) Citizen.cpp

ConcreteCountry.o: ConcreteCountry.cpp
	$(CC) $(FLAGS) ConcreteCountry.cpp

ConcreteCountryFactory.o: ConcreteCountryFactory.cpp
	$(CC) $(FLAGS) ConcreteCountryFactory.cpp

ConcreteMediator.o: ConcreteMediator.cpp
	$(CC) $(FLAGS) ConcreteMediator.cpp

Country.o: Country.cpp
	$(CC) $(FLAGS) Country.cpp

CountryFactory.o: CountryFactory.cpp
	$(CC) $(FLAGS) CountryFactory.cpp

LandCitizen.o: LandCitizen.cpp
	$(CC) $(FLAGS) LandCitizen.cpp

LandMedic.o: LandMedic.cpp
	$(CC) $(FLAGS) LandMedic.cpp

LandPeopleFactory.o: LandPeopleFactory.cpp
	$(CC) $(FLAGS) LandPeopleFactory.cpp

Medic.o: Medic.cpp
	$(CC) $(FLAGS) Medic.cpp

Memento.o: Memento.cpp
	$(CC) $(FLAGS) Memento.cpp

mementostorage.o: mementostorage.cpp
	$(CC) $(FLAGS) mementostorage.cpp

Navy.o: Navy.cpp
	$(CC) $(FLAGS) Navy.cpp

People.o: People.cpp
	$(CC) $(FLAGS) People.cpp

PeopleAliveState.o: PeopleAliveState.cpp
	$(CC) $(FLAGS) PeopleAliveState.cpp

PeopleDeadState.o: PeopleDeadState.cpp
	$(CC) $(FLAGS) PeopleDeadState.cpp

PeopleInjuredState.o: PeopleInjuredState.cpp
	$(CC) $(FLAGS) PeopleInjuredState.cpp

PeopleIterator.o: PeopleIterator.cpp
	$(CC) $(FLAGS) PeopleIterator.cpp

Pilot.o: Pilot.cpp
	$(CC) $(FLAGS) Pilot.cpp

SeaMedic.o: SeaMedic.cpp
	$(CC) $(FLAGS) SeaMedic.cpp

Transport.o: Transport.cpp
	$(CC) $(FLAGS) Transport.cpp

Soldier.o: Soldier.cpp
	$(CC) $(FLAGS) Soldier.cpp

WaterPeopleFactory.o: WaterPeopleFactory.cpp
	$(CC) $(FLAGS) WaterPeopleFactory.cpp

PeopleFactory.o: PeopleFactory.cpp
	$(CC) $(FLAGS) PeopleFactory.cpp

PeopleStatus.o: PeopleStatus.cpp
	$(CC) $(FLAGS) PeopleStatus.cpp

WarEngine.o: WarEngine.cpp
	$(CC) $(FLAGS) WarEngine.cpp

WarPhaseEarly.o: WarPhaseEarly.cpp
	$(CC) $(FLAGS) WarPhaseEarly.cpp

WarPhase.o: WarPhase.cpp
	$(CC) $(FLAGS) WarPhase.cpp

WarPhaseMiddle.o: WarPhaseMiddle.cpp
	$(CC) $(FLAGS) WarPhaseMiddle.cpp

WarPhaseLate.o: WarPhaseLate.cpp
	$(CC) $(FLAGS) WarPhaseLate.cpp

WorkingTransportState.o: WorkingTransportState.cpp
	$(CC) $(FLAGS) WorkingTransportState.cpp

Mediator.o: Mediator.cpp
	$(CC) $(FLAGS) Mediator.cpp

Facade.o: Facade.cpp
	$(CC) $(FLAGS) Facade.cpp


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)