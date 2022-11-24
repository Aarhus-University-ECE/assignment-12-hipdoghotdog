

#ifndef _DURATION_CLASS_H_
#define _DURATION_CLASS_H_

class Duration
{
private:
    int time;
    int alarm;
    bool alarmHasBeenSet;
    bool checkAndUpdateAlarm();


public:
    Duration();
    Duration(int t);
    ~Duration();

    int getDuration();
    bool tick();
    bool tick(int dt);
    void setAlarm(int t);

};

#endif