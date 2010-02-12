#ifndef _PPNET_SERVER_SOCKET_H
#define _PPNET_SERVER_SOCKET_H

#include "socket.h"

namespace PPNet {
	
	class ServerSocket : public Socket {
		public:
			/*! \brief Creates an unbound server socket. */
			ServerSocket();
			
			/*! \brief Creates a server socket and binds it to the specified port
			 *	\param int The port number to bind the server socket.
			 */
			ServerSocket(int port);
			
			/*! \bind Creates a server socket and binds it to the specified
			 *				local port number, with the specified backlog.
			 *	\param int The local port number.
			 *	\param int The backlog.
			 */
			ServerSocket(int port, int backlog);
			
			/*! \bind Creates a server socket and binds it to the specified
			 *				\p InetAddress and port number.
			 *	\param InetAddress The local address the server will bind to
			 *	\param int The local port number
			 *	\param int The listen backlog
			 */
			ServerSocket(InetAddress address, int port, int backlog);
			
			/*! \brief Listens for incoming connections and accepts them. */
			TCPSocket* accept();
	};
}

#endif /* _PPNET_SERVER_SOCKET_H */