#include "user.h"

user::user()
{

}

int user::existUser(string id, string email) {
    ifstream fi;
    fi.open("storage/DataUsers/__LIST_USERS__.txt");
    cout << fi.is_open();
    if (! fi.is_open()) return NOT_ACCESS_FILE;
    int n = 0;
    string s; getline(fi, s);
    stringstream ss(s); ss >> n;
    for (int i=1;i<=n;i++) {
        getline(fi, s);
        ss.clear(); ss.str(s);
        string m_code, m_id, m_email;
        ss >> m_code >> m_id >> m_email;
        if (m_id == id && m_email != email) return ERROR;
        if (m_id != id && m_email == email) return ERROR;
        if (m_id == id && m_email == email) return TRUE;
    }
    return FALSE;
}
