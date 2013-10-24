#!/bin/bash

CMD=$(ls /usr/share/X11/xkb/symbols/?? |
sort |
while read k; do
basename $k;
done |
while read k; do
echo -n "\"$k\", ";
done)
CMD_LEN=$(expr ${#CMD} - 2)
CMD=${CMD:0:$CMD_LEN}
CMD="return new Array($CMD);"
echo -n ${CMD}
