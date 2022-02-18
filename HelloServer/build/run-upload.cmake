EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo upload all)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake -P /usr/local/tars/xzer/HelloServer/build/src/run-upload-HelloServer.cmake)
