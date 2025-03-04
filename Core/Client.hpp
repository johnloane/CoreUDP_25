#pragma once
class Client
{
public:
	static void DoServiceLoop(const UDPSocketPtr client_socket);
	static void PrintOptions();
	static void GetChoice(std::string& choice);
	static const int32_t kMaxPacketSize = 1300;
};

