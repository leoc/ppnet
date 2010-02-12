#ifndef _PPNET_IP_ADDRESS_H
#define _PPNET_IP_ADDRESS_H

#include <string>

namespace PPNet {
	class InetAddress {
		public:
			/*! \brief Initializes the \p InetAddress. 
			 *	\param int The family of this \p InetAddress.
			 */
			InetAddress(int fam) : family(fam) {
			
			}
		
			/*! \brief Returns the family of this address.
			 *	\return int Either AF_INET or AF_INET6.
			 */
			int getFamily() {
				return family;
			}
			
			
			
		private:
			int family;
	}; 
}

#endif /* _PPNET_IP_ADDRESS_H */