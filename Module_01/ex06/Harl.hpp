#ifndef HARL_H
#define HARL_H
#include <string>
class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Harl();
        void complain( std::string level );

};
#endif