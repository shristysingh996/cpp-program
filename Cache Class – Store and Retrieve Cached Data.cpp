#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Cache {
private:
    unordered_map<string, string> cacheData;

public:
    // Store a key-value pair in the cache
    void store(const string& key, const string& value) {
        cacheData[key] = value;
        cout << "Stored: [" << key << "] = \"" << value << "\"\n";
    }

    // Retrieve value for a given key
    string retrieve(const string& key) const {
        auto it = cacheData.find(key);
        if (it != cacheData.end()) {
            cout << "Retrieved: [" << key << "] = \"" << it->second << "\"\n";
            return it->second;
        } else {
            cout << "Key \"" << key << "\" not found in cache.\n";
            return "";
        }
    }

    // Display all cached entries
    void displayCache() const {
        cout << "\nCurrent Cache:\n";
        for (const auto& pair : cacheData) {
            cout << "[" << pair.first << "] = \"" << pair.second << "\"\n";
        }
    }
};

// Example usage
int main() {
    Cache myCache;

    myCache.store("user1", "Alice");
    myCache.store("user2", "Bob");
    myCache.store("session1", "XYZ123");

    myCache.retrieve("user1");
    myCache.retrieve("user3");  // Non-existent

    myCache.displayCache();

    return 0;
}
