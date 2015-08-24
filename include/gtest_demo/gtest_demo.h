#include <string>

/**
 * Dummy GtestDemo class to test
 */
class GTestDemo
{
public:
  GTestDemo( const std::string& name );
  GTestDemo( const std::string& name, int init_value );

  std::string name( ) const;

  int value( ) const;

  int setInitValue( int init_value );

  int duplicate();

  int add( int value );

  int subtract( int value );

  friend std::ostream& operator<<( std::ostream& out, const GTestDemo& gtd );

private:
  const std::string name_;

  int value_;

};
