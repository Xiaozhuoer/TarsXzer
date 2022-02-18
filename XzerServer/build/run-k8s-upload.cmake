EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo upload k8s all)
EXECUTE_PROCESS(COMMAND cmake -P /usr/local/tars/xzer/XzerServer/build/run-k8s-upload-XzerServer.cmake)
