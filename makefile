CXX = clang++
SDL = -framework SDL2
SDL_image = -framework SDL2_image
SDL_mixer = -framework SDL2_mixer
SDL_ttf = -framework SDL2_ttf

CXXFLAGS = -Wall -c -std=c++11
LDFLAGS = $(SDL) $(SDL_image)
EXE = prog

all: $(EXE)

$(EXE): main.o game.o statemachine.o state.o gamestate.o firstlevel.o inputhandler.o sprite.o resources.o player.o rect.o
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

firstlevel.o: FirstLevel.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

inputhandler.o: InputHandler.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

sprite.o: Sprite.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

resources.o: Resources.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

player.o: Player.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

rect.o: Rect.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f *.o