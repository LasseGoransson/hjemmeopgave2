#include "laaner.h"

Laaner::Laaner()
{

}

Laaner::Laaner(string navn, int nummer): Person(navn)
{
    _nummer = nummer;
}
