#include "Duration_class.h"
#include <stdio.h>

int  main()
{
    Duration d;
    
    printf("Created duration starting at 0: Got %d \n", d.getDuration());
    d.~Duration();
    Duration* s = new Duration(5);
    printf("Created duration starting at 5: Got %d \n", s->getDuration());
    s->tick();
    printf("Added one tick to duration: Got %d \n", s->getDuration());
 
    s->setAlarm(15);

    s->tick(4);
    printf("Added 4 ticks to duration and set an alarm at 15: Got alarm=%d and time=%d \n", s->tick(0), s->getDuration());
    s->tick(6);
    printf("Added 6 ticks to duration and set an alarm at 15: Got time=%d and alarm=%d \n", s->tick(0), s->getDuration());
    printf("Setting alarm in the past \n");
    s->setAlarm(10);

    delete s;

    return 0;
}