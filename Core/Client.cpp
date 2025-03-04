#include "SocketWrapperPCH.hpp"

/* Client needs to offer the user a menu where they can select
1. Echo
2. DateAndTime
3. Stats
4. Quit
Take input from the user, send it to the server and listen and display the result
*/

int main()
{
	SocketUtil::StaticInit();
	UDPSocketPtr client_socket = SocketUtil::CreateUDPSocket(INET);
	client_socket->SetNonBlockingMode(false); //Should block
	Client::DoServiceLoop(client_socket);
}

void Client::DoServiceLoop(const UDPSocketPtr client_socket)
{
	bool service_running = true;
	string choice;
	char receive_buffer[kMaxPacketSize];
	char* begin = receive_buffer;
	char* end = begin + sizeof(receive_buffer);
	std::fill(begin, end, 0);
	SocketAddress sender_address;
	int bytes_received = 0;


}

void Client::PrintOptions()
{
}

void Client::GetChoice(std::string& choice)
{
}
