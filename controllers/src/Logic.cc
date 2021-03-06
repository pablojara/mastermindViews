#include "controllers/include/Logic.h"
#include <iostream>


Logic::Logic()
{
    game = new Game();
    gameController = new GameController(game);
    startController = new StartController(game);
    //continueController = new ContinueController(game);
}



Controller *Logic::getController()
{
    switch (game->getState())
    {
        case State::INITIAL:
            return startController;
        case State::IN_GAME:
            return gameController;
        case State::FINAL:
            std::cout << "END OF GAME\n";
        case State::EXIT:
        default:
            return NULL;
    }
}