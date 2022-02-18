EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo 172.25.0.3:3000/api/upload_tars_file -Fsuse=@HelloServer-merge.tars -Fapplication=TestApp -Fserver_name=HelloServer)
EXECUTE_PROCESS(COMMAND curl 172.25.0.3:3000/api/upload_tars_file?ticket=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1aWQiOiJhZG1pbiIsImlhdCI6MTY0NTA2MjM0NywiZXhwIjoxNjQ2MDEyNzQ3fQ.ZxwoWXSjBWhvBMdPm4fgSM415xTaPtCM_2bkovm-WQg -Fsuse=@HelloServer-merge.tars -Fapplication=TestApp -Fserver_name=HelloServer)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo 
---------------------------------------------------------------------------)
