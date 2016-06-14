#include <ptlib.h>

#include "etc/utils.hpp"

#include "h323.h"
#include "h323caps.h"
#include "h245.h"

namespace h323p
{

PBoolean isExtendedVideoCapability(H323Capability const & capability_)
{
    const H323Capability::MainTypes mainType = capability_.GetMainType();
    const unsigned int subType = capability_.GetSubType();

    return H323Capability::e_Video == mainType
            && H245_VideoCapability::e_extendedVideoCapability == subType;
}

} // namespace h323p
