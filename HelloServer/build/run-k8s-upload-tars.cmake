EXECUTE_PROCESS(COMMAND /usr/bin/cmake  -E echo upload k8s tars all)
EXECUTE_PROCESS(COMMAND cmake -P /usr/local/tars/xzer/HelloServer/build/run-k8s-upload-tars-HelloServer.cmake)
