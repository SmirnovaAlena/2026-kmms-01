MAIN=hello_world.cpp
APP=app

[ -f "$APP" ] && rm "$APP"

g++ -fexec-charset=CP866 $MAIN -o $APP

./$APP
