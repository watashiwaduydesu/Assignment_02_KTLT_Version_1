#include "user.h"

user::user()
{

}

int user::existUser(string email, string id) {
    ifstream fi;
    fi.open("storage/LIST_USER.txt");
    cout << "1\n";
    if (! fi.is_open()) return NOT_ACCESS_FILE;
    int n = 0;
    string line;
    stringstream stream;
    getline(fi, line);
    stream.str(line); stream >> n;
    for (int i = 0; i < n; ++i) {
        getline(fi, line);
        stream.clear(); stream.str(line);
        string m_code, m_id, m_email;
        stream >> m_code >> m_email >> m_id;
        if (m_id == id || m_email == email) return ERROR;
    }
    return FALSE;
}
