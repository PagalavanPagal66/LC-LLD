#include<strings.h>
using namespace std;

class UserProfile{
public:
    int m_problemCnt = 0;
    int m_easyCnt = 0;
    int m_mediumCnt = 0;
    int m_hardCnt = 0;
    int m_contestCnt = 0;
    int m_contestRating = 0;
    UserProfile(string pUsername, string pMobile, string pGmail){
        m_Username = pUsername;
        m_mobile = pMobile;
        m_gmail = pGmail;
    }
    vector<int> getProblemData() const;
private:
    string m_mobile;
    string m_gmail;
    string m_username;
};
