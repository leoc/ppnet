#ifndef _PPNET_SOCKET_H
#define _PPNET_SOCKET_H

#include "socket_address.h"

namespace PPNet {
	class Socket {
		public:
			Socket(const SocketAddress& address, int socketType);
			virtual ~Socket();
		
			/*! \brief Binds the \p Socket to a local address.
			 *	\param SocketAddress The local bindpoint.
			 */
			void bind(const SocketAddress& bindpoint);
			
			/*! \brief Binds the \p Socket to a local address and port.
			 *	\param InetAddress The local address.
			 *	\param int The local port.
			 */
			void bind(const InetAddress& address, int port);
			
			/*! \brief Connects this \p Socket to the server.
			 *	\param SocketAddress The endpoint.
			 */
			void connect(const SocketAddress& endpoint);
			
			/*! \brief Connects this \p Socket to the server with a specified timeout.
			 *	\param SocketAddress The endpoint.
			 *	\param int The timout value in milliseconds.
			 */
			void connect(const SocketAddress& endpoint, int timeout);
			
			/*! \brief Gets the local \p InetAddress.
			 *	\return InetAddress The local address.
			 */
			InetAddress getLocalAddress();
			
			/*! \brief Gets the local port number.
			 *	\return int The local port number.
			 */
			int getLocalPort();
		
			/*! \brief Gets the local \p SocketAddress.
			 *	\return SocketAddress The local address.
			 */
			SocketAddress getLocalSocketAddress();
			
			/*! \brief Gets the remote \p InetAddress.
			 *	\return InetAddress The remote address.
			 */
			InetAddress getRemoteAddress();
			
			/*! \brief Gets the remote port number.
			 *	\return int The remote port number.
			 */
			int getRemotePort();
			
			/*! \brief Gets the remote \p SocketAddress.
			 *	\return SocketAddress The remote address.
			 */
			SocketAddress getRemoteSocketAddress();
			
			/*! \brief Sends data through the \p Socket channel.
			 *	\param void* The data to be sent.
			 *	\param int The length of the data.
			 *	\param int The Flags
			 *	\return The number of bytes that has been sent.
			 */
			int send(const void* payload, int length, unsigned int uiFlags);
			
			/*! \brief Recieves data through the \p Socket.
			 *	\param void* The buffer into which bytes are to be transferred.
			 *	\param int The length of the recieved data.
			 *	\param int The Flags.
			 *	\return int The number of bytes that has been read.
			 */
			int	recv(void* buffer, int length, unsigned int uiFlags);
		private:
			SocketAddress localAddress;	/*!< The local \p SocketAddress */
			SocketAddress hostAddress; /*!< The remote \p SocketAddress */
			struct addrinfo addr;
	};
}

#endif /* _PPNET_SOCKET_H */