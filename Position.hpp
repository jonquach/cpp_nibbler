//
// Position.hpp for  in /home/quach_a/Lab/cpp_nibbler
// 
// Made by Jonathan Quach
// Login  <jonathan.quach@epitech.eu>
// 
// Started on  Sat Mar 28 18:52:57 2015 Jonathan Quach
// Last update Sat Mar 28 19:58:03 2015 Jonathan Quach
//

#ifndef _POSITION_HPP_
#define _POSITION_HPP_

class Position
{
private:
  int x;
  int y;

public:
  Position(int const &, int const &);
  ~Position();

  int getX() const;
  int getY() const;
  void setX(int const &);
  void setY(int const &);
};

#endif