#ifndef HASH_PASSWORD_H
#define HASH_PASSWORD_H

#include <string>

using namespace std;

class hash_password
{
public:
    static int hashKey(string key) {
        long long value = 0ll, MOD = 1000000009ll;
        for (int i=0;i<(int)key.size();i++) {
            value = (value * 307 + key[i]) % MOD;
        }
        return (int) value;
    }

    static bool match(string key, int value) {
        return hashKey(key) == value;
    }
};

#endif // HASH_PASSWORD_H
