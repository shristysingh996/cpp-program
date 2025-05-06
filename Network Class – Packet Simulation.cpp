#include <iostream>
#include <string>
#include <queue>
#include <thread>
#include <chrono>
using namespace std;

class Network {
private:
    queue<string> packetQueue;  // Simulated network buffer

public:
    // Simulate sending a packet
    void sendPacket(const string& packet) {
        cout << "Sending packet: " << packet << "...\n";
        this_thread::sleep_for(chrono::milliseconds(500)); // simulate delay
        packetQueue.push(packet);
        cout << "Packet sent.\n";
    }

    // Simulate receiving a packet
    void receivePacket() {
        cout << "Waiting for packet...\n";
        this_thread::sleep_for(chrono::milliseconds(500)); // simulate delay

        if (!packetQueue.empty()) {
            string received = packetQueue.front();
            packetQueue.pop();
            cout << "Packet received: " << received << endl;
        } else {
            cout << "No packets to receive.\n";
        }
    }

    // Simulate transmission of multiple packets
    void transmitPackets(const vector<string>& packets) {
        for (const auto& packet : packets) {
            sendPacket(packet);
        }

        cout << "\nReceiving packets...\n";
        while (!packetQueue.empty()) {
            receivePacket();
        }
    }
};

// Example usage
int main() {
    Network net;

    vector<string> packets = {
        "Hello",
        "This is packet 1",
        "C++ network simulation",
        "End of transmission"
    };

    net.transmitPackets(packets);

    return 0;
}
