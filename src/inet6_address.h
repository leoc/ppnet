#ifndef _PPNET_INET6_ADDRESS_H
#define _PPNET_INET6_ADDRESS_H

#include "inet_address.h"

namespace PPNet {
	class Inet6Address : public InetAddress {
		public:
			/*! \brief Initializes with \p in6addr_any . */
			Inet6Address();
			
			/*! \brief Initializes the \p Inet6Address with the given string as address.
			 *	\param std::string The address.
			 */
			Inet6Address(const std::string& address);
			
		protected:
			in6_addr address;	/*!< The IPv6 address struct we want to ecapsulate */ 
	};
}

#endif