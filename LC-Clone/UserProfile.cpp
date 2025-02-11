#include "UserProfile.h"

map<string,int> UserProfile::getProblemData(){
    map<string,int>solvedData;
    solvedData["Total count"] = UserProfile::m_problemCnt;
    solvedData["Easy count"] = UserProfile::m_problemCnt;
    solvedData["Medium count"] = UserProfile::m_problemCnt;
    solvedData["Hard count"] = UserProfile::m_problemCnt;
    return solvedData;
}
