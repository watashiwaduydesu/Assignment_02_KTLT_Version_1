#include "user.h"

user::user() : code(""), email(""), id(""), username(""), telephone("") {
    this->birthdate.setDate(0,0,0);
}

user::user(string code) : user()
{
    ifstream fi;
    string link = "storage/DataUsers/";
    link.append(code.append(".txt"));
    fi.open(link);
    if (fi.is_open()) {
        getline(fi, this->code);
        getline(fi, this->email);
        getline(fi, this->id);
        getline(fi, this->username);
        string line; stringstream stream;
        getline(fi, line); stream.str(line);
        int d = 0, m = 0, y = 0;
        stream >> d >> m >> y;
        this->birthdate.setDate(y, m, d);
        getline(fi, this->telephone);
        getline(fi, line); stream.clear(); stream.str(line);
        int n = 0;
        stream >> n;
        for(int i=1;i<=n;i++) {
            getline(fi, line);
            this->list_account.push_back(line);
        }
    }
    fi.close();
}

void user::showInformation() {
    cout << "---------------USER---------------\n";
    cout << this->username << "/" << this->code << endl;
    cout << this->email << "/" << this->id << "/" << this->telephone << endl;
    cout << this->list_account.size() << endl;
    for (auto u : this->list_account) cout << u << "/";
    cout << endl;
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
