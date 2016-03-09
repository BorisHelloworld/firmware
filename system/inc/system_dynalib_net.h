/**
 ******************************************************************************
 * @file    system_dynalib_network.h
 * @authors mat
 * @date    04 March 2015
 ******************************************************************************
  Copyright (c) 2015 Particle Industries, Inc.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************
 */

#ifndef SYSTEM_DYNALIB_NETWORK_H
#define	SYSTEM_DYNALIB_NETWORK_H

#include "dynalib.h"

#ifdef DYNALIB_EXPORT
#include "system_network.h"
#endif

DYNALIB_BEGIN(system_net)
DYNALIB_FN(system_net, network_config, const void*(network_handle_t, uint32_t, void*))
DYNALIB_FN(system_net, network_connect, void(network_handle_t, uint32_t, uint32_t, void*))
DYNALIB_FN(system_net, network_connecting, bool(network_handle_t, uint32_t, void*))
DYNALIB_FN(system_net, network_disconnect, void(network_handle_t, uint32_t, void*))
DYNALIB_FN(system_net, network_ready, bool(network_handle_t, uint32_t, void*))
DYNALIB_FN(system_net, network_on, void(network_handle_t, uint32_t, uint32_t, void*))
DYNALIB_FN(system_net, network_off, void(network_handle_t, uint32_t, uint32_t, void*))
DYNALIB_FN(system_net, network_listen, void(network_handle_t, uint32_t, void*))
DYNALIB_FN(system_net, network_listening, bool(network_handle_t, uint32_t, void*))
DYNALIB_FN(system_net, network_has_credentials, bool(network_handle_t, uint32_t, void*))
DYNALIB_FN(system_net, network_set_credentials, int(network_handle_t, uint32_t, NetworkCredentials*, void*))
DYNALIB_FN(system_net, network_clear_credentials, bool(network_handle_t, uint32_t, NetworkCredentials*, void*))
DYNALIB_END(system_net)


#endif	/* SYSTEM_DYNALIB_NETWORK_H */

