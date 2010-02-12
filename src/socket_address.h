#ifndef _PPNET_SOCKET_ADDRESS_H
#define _PPNET_SOCKET_ADDRESS_H

namespace PPNet {
	class SocketAddress {
		public:
			SocketAddress(const std::string& address, int port);
			SocketAddress(const InetAddress& address, int port);
		
			void setPortNumber(int port);
			void setAddress(InetAddress address);
		
			int getPortNumber();
			InetAddress getAddress();
			
		protected:
			InetAddress address;
			int port;
	};
}

#endif