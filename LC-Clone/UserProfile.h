#include<strings.h>
#include<map>
using namespace std;

enum ProblemDifficulty{
    
};

class UserProfile{
public:
    int m_problemCnt = 0;
    int m_easyCnt = 0;
    int m_mediumCnt = 0;
    int m_hardCnt = 0;
    int m_contestCnt = 0;
    int m_contestRating = 0;
    UserProfile(string pUsername, string pMobile, string pGmail){
        m_userName = pUsername;
        m_mobile = pMobile;
        m_gmail = pGmail;
    }
    map<string,int> getProblemData() const;
private:
    string m_mobile;
    string m_gmail;
    string m_userName;
};
