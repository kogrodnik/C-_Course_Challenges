#include "Printable.hpp"

std::ostream &operator << (std::ostream &os, const Printable &obj) {
    obj.print(os);
    return os;
}