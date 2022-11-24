#include "Duration_class.h"
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

Duration::Duration()
{
    time = 0;
    alarmHasBeenSet = false;
}
Duration::Duration(int t)
{
    assert(t >= 0);
    time = t;
    alarmHasBeenSet = false;
}
Duration::~Duration()
{}
int Duration::getDuration()
{
    return time;
}
bool Duration::tick()
{
    time = time + 1;
    return checkAndUpdateAlarm();
}
bool Duration::tick(int dt)
{
    assert(dt >= 0);
    time = time + dt;
    return checkAndUpdateAlarm();
}
void Duration::setAlarm(int t)
{
    if (t < time) {
        printf("Can't set alarm in the past\n");
        alarmHasBeenSet = false;
    }
    else if (t > time) {
    alarm = t;
    alarmHasBeenSet = true;
    }
}
bool Duration::checkAndUpdateAlarm()
{
    if (alarmHasBeenSet = true)
    {
        if (time > alarm)
        {
            alarmHasBeenSet = false;
            return true;
        }
    }
    return false;
}
