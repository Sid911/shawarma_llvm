#include "ast.h"
#include <cassert>

#ifndef SHW_CAST_H
#define SHW_CAST_H

namespace shw {

template<class Dest, class Source> 
Dest *shw_cast(Source *node) {
    if(Dest::canCastTo(node->getClassId())) {
        return dynamic_cast<Dest*>(node);
    }
    return nullptr;
}

}

#endif




