EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo upload all)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake -P /usr/local/tars/xzer/XzerServer/build/src/run-upload-XzerServer.cmake)
