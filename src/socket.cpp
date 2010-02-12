#include "socket.h"

Socket::bind(const SocketAddress& bindpoint) {
	
}

Socket::bind(const InetAddress& address, int port) {
	SocketAddress bindpoint(address, port);
	bind(bindpoint);
}

Socket::connect(const SocketAddress& endpoint) {
		
}

Socket::connect(const SocketAddress& endpoint, int timeout) {
	
}

Socket::connect(const InetAddress& address, int port) {
	
}

Socket::connect(const InetAddress& address, int port, int timeout) {
	
}