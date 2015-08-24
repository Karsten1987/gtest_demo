#include <iostream>

#include <gtest_demo/gtest_demo.h>

GTestDemo::GTestDemo( const std::string& name ):
  name_(name),
  value_(0)
{
}

GTestDemo::GTestDemo( const std::string& name, int init_value ):
  name_(name),
  value_(init_value)
{
}

std::string GTestDemo::name() const
{
  return name_;
}

int GTestDemo::value( ) const
{
  return value_;
}

int GTestDemo::setInitValue( int init_value )
{
  value_ = init_value;
  return value_;
}

int GTestDemo::duplicate( )
{
  value_ *= 2;
  return value_;
}

int GTestDemo::add( int value )
{
  value_ += value;
  return value_;
}

int GTestDemo::subtract( int value )
{
  value_ -= value;
  return value_;
}

std::ostream& operator<<(std::ostream& out, const GTestDemo& gtd){
     return out << "GTestDemo with name \'" << gtd.name() << "\' has value of " << gtd.value();
}
