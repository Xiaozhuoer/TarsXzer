EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo release all)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake -P /usr/local/tars/xzer/XzerServer/build/src/run-release-XzerServer.cmake)
