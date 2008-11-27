#ifndef GATEWAY_GATEWAY_H__
#define GATEWAY_GATEWAY_H__

#include "logic/gw.h"
#include <mp/iothreads.h>
#include <mp/memory.h>
#include <mp/zone.h>

namespace kumo {

class GatewayInterface {
public:
	virtual ~GatewayInterface() { }
	virtual void add_connection(int fd) = 0;
};


}  // namespace user

#endif /* gateway/gateway.h */

