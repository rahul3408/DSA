class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int sec=0;
        int sec1=0;
        int sec2=0;
        sec1=stoi(startTime.substr(0,2))*60*60+stoi(startTime.substr(3,5))*60+stoi(startTime.substr(6,8));
        sec2=stoi(endTime.substr(0,2))*60*60+stoi(endTime.substr(3,5))*60+stoi(endTime.substr(6,8));
        sec=abs(sec1-sec2);
        return sec;
        
    }
};