EXECUTE_PROCESS(COMMAND /usr/bin/cmake  -E echo upload tars all)
EXECUTE_PROCESS(COMMAND cmake -P /usr/local/tars/xzer/HelloServer/build/src/run-upload-tars-HelloServer.cmake)
