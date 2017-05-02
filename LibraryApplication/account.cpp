#include "account.h"

account::account() {

}

int account::existAccountName(string account_name) {
    ifstream fi;
    fi.open("storage/DataAccounts/__LIST_ACCOUNT_NAME__.txt");
    if (! fi.is_open()) return NOT_ACCESS_FILE;
    int n = 0;
    string s; getline(fi, s);
    stringstream ss(s); ss >> n;
    for (int i=1;i<=n;i++) {
        getline(fi, s);
        if (s == account_name) return TRUE;
    }
    return FALSE;
}
