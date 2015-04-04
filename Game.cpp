//
// Game.cpp for qsd in /home/saysan_j/Desktop/cpp_nibbler
// 
// Made by Jean-Paul SAYSANA
// Login   <saysan_j@epitech.net>
// 
// Started on  Thu Apr  2 16:45:00 2015 Jean-Paul SAYSANA
// Last update Sat Apr  4 12:52:56 2015 Jonathan Quach
//

#include "Game.hpp"

Game::Game(int const winX, int const winY, int const x, int const y, IGui *gui)
  : _winX(winX), _winY(winY), _x(x), _y(y), _map(x, y, gui)
{
  this->_loop = true;
  this->_gui = gui;
  this->_gui->createWindow(_winX, _winY);
}

Game	&Game::operator=(Game const &other)
{
  if (this != &other)
    this->_gui = other._gui;
  return (*this);
}

Game::~Game()
{
}

void		Game::displayGame()
{
}

void		Game::playGame()
{
  Snake		_snake(this->_x, this->_y, this->_gui);

  _map.drawObjects();
  while (this->_loop)
    {
      // Game _game(_gui, _caseX, _caseY);
      // _game->startGame();
      this->updateGame();
      move(_ev.getEventType());
      usleep(50000);
    }
}

void		Game::updateGame()
{
  _ev.setEventType(this->_gui->updateEvent());
  if (_ev.getEventType() == QUIT)
    this->_loop = false;
}

void		Game::move(EventType key)
{
  (void)key;
}
