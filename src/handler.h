#ifndef _PPNET_HANDLER_H
#define _PPNET_HANDLER_H

#include "ppthread/thread.h"

namespace PPNet {
	class Handler : public PPThread::Thread {
		public:
			Handler(Socket socket);
			~Handler();
			
		private:
			
	};
}

#endif