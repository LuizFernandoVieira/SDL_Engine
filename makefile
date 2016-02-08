CXX = clang++
SDL = -framework SDL2

CXXFLAGS = -Wall -c -std=c++11
LDFLAGS = $(SDL)
EXE = prog

all: $(EXE)

$(EXE): main.o game.o statemachine.o state.o gamestate.o screen.o gamescreen.o inputhandler.o
	$(CXX) $(LDFLAGS) $^ -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

game.o: Game.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

statemachine.o: StateMachine.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

state.o: State.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

gamestate.o: GameState.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

screen.o: Screen.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

gamescreen.o: GameScreen.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

inputhandler.o: InputHandler.cpp
	$(CXX) $(CXXFLAGS) $< -o $@	

clean:
	rm -f *.o