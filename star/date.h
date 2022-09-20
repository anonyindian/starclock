#include "../etime.h"
#include "hour.h"

#define CALCULATE_STARDATE(unix)(unix/M_HOUR);

#define DEF_STARDATE get_time()/M_HOUR