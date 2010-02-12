#ifndef _PPNET_UDP_SOCKET_H
#define _PPNET_UDP_SOCKET_H

#include "socket.h"

namespace PPNet {
	class UDPSocket : public Socket {
		public:
			/*! \brief Creates an \p UDPSocket and binds it to any available 
			 *				 port on the local host machine
			 */
			UDPSocket();
			/*! \brief Creates an \p UDPSocket and binds it to the specified 
			 *				 port on the local host machine.
			 *	\param int The port number for the new socket.
			 */
			UDPSocket(int port);
			/*! \brief Creates an \p UDPSocket and binds it to the specified
			 *				 \p InetAddress and port number.
			 *	\param InetAddress The address to bind the socket.
			 *	\param int The port to bind the socket.
			 */
			UDPSocket(const InetAddress& address, int port);
			/*! \brief Creates an \p UDPSocket and binds it to the specified 
			 *				 \p SocketAddress .
			 * 	\param SocketAddress The socket address to bind the socket.
			 */
			UDPSocket(const SocketAddress& address);
			
			/*! \brief Recieves data from a specific source.
			 *	\param void* The data pointer.
			 *	\param int The length of the data.
			 *	\param int The Flags.
			 *	\param InetAddress The source address.
			 *	\param int The source port.
			 *	\return int The number of bytes actually recieved.
			 */
			int recvFrom(void* buffer, int length, unsigned int uiFlags,
									 const InetAddress& srcAddr, int srcPort);
									 
			/*! \brief Sends data to a specific destination.
			 *	\param void* The data we want to send.
			 *	\param int The length of the data.
			 *	\param int The Flags.
		 	 *	\param InetAddress The destination address.
		 	 *	\param int The destination port number.
		 	 *	\return int The number of bytes actually sent.
		 	 */			 
			int sendTo(const void* payload, int length, unsigned int uiFlags,
								 const InetAddress& destAddr, int destPort);
	};
}

#endif /* _PPNET_UDP_SOCKET_H */