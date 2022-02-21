#pragma once

#include <fc/reflect/reflect.hpp>

namespace graphene { namespace protocol {

enum class sidechain_type {
   unknown,
   bitcoin,
   ethereum,
   eos,
   peerplays
};

} }

FC_REFLECT_ENUM(graphene::protocol::sidechain_type,
        (unknown)
        (bitcoin)
        (ethereum)
        (eos)
        (peerplays) )
