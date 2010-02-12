#ifndef _PPNET_TCP_SOCKET_H
#define _PPNET_TCP_SOCKET_H

#include "socket.h"

namespace PPNet {
	class TCPSocket : public Socket {
		public:
			/*! \brief Creates an unbound, unconnected \p TCPSocket */
			TCPSocket();

			/*! \brief Creates a \p TCPSocket and connects it to the 
			 *				 specified address and port number.
			 *	\param std::string The remote host.
			 *	\param int The remote port number.
			 */
			TCPSocket(const std::string& host, int port);
			
			/*! \brief Creates a \p TCPSocket and connects it to the 
			 *				 specified address and port number.
			 *	\param InetAddress The remote address.
			 *	\param int The remote port number.
			 */
			TCPSocket(const InetAddress& addr, int port);
			
			/*! \brief Creates a bound \p TCPSocket and connects it to the 
			 *				 specified address and port number.
			 *	\param std::string The remote host.
			 *	\param int The remote port number.
			 *	\param InetAddress The local address.
			 *	\param int The local port number.
			 */
			TCPSocket(const std::string& host, 		int port, 
								const InetAddress& locAddr, int locPort);

			/*! \brief Creates a bound \p TCPSocket and connects it to the 
			 *				 specified address and port number.
			 *	\param InetAddress The remote address.
			 *	\param int The remote port number.
			 *	\param InetAddress The local address.
			 *	\param int The local port number.
			 */
			TCPSocket(const InetAddress& addr, int port, 
								const InetAddress& locAddr, int locPort);
		
			/*! \brief Binds the \p TCPSocket to a local address.
			 *	\param SocketAddress The local bindpoint.
			 */
			void bind(const SocketAddress& bindpoint);
			
			/*! \brief Connects this \p TCPSocket to the server.
			 *	\param SocketAddress The endpoint.
			 */
			void connect(const SocketAddress& endpoint);
			
			/*! \brief Connects this \p TCPSocket to the server with a specified timeout.
			 *	\param SocketAddress The endpoint.
			 *	\param int The timout value in milliseconds.
			 */
			void connect(const SocketAddress& endpoint, int timeout);
			
			/*! \brief Sends 16 bit \p int data to the \p TCPSockets channel.
			 *	\param int The data to be sent.
			 *	\param int The Flags
			 */
			void send16Bits(const int data, unsigned int uiFlags);
			
			/*! \brief Sends 32 bit \p long data to the \p TCPSockets channel.
			 *	\param int The data to be sent.
			 *	\param int The Flags
			 */
			void send32Bits(const long data, unsigned int uiFlags);
			
			/*! \brief Sends a \p std::string to the \p TCPSockets channel.
			 *	\param std::string The data to be sent.
			 *	\param int The Flags
			 */
			void sendString(const std::string data, unsigned int uiFlags);
			
			/*! \brief Recieves 16 bit \p int data.
			 *	\param int The Flags.
			 *	\return int The recieved 16 bit \p int .
			 */
			int recv16Bits(unsigned int uiFlag);
			
			/*! \brief Recieves 32 bit \p long data.
			 *	\param int The Flags.
			 *	\return long The recieved 32 bit \p long.
			 */
			long recv32Bits(unsigned int uiFlags);
			
			/*! \brief Recieves a \p std::string.
			 *	\param int The Flags.
			 *	\return std::string The recieved string.
			 */
			std::string recvString(unsigned int uiFlags);
	};
}

#endif /* _PPNET_TCP_SOCKET_H */