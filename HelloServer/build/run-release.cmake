EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo release all)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake -P /usr/local/tars/xzer/HelloServer/build/src/run-release-HelloServer.cmake)
