EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo http://172.25.0.3:3000/api/upload_tars_file -Fsuse=@XzerServer-merge.tars -Fapplication=TestApp -Fserver_name=XzerServer)
EXECUTE_PROCESS(COMMAND curl http://172.25.0.3:3000/api/upload_tars_file?ticket=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1aWQiOiJhZG1pbiIsImlhdCI6MTY0NTA2NjIxMywiZXhwIjoxNjQ2MDE2NjEzfQ.nJtXvFEKsNOCY70Qv97xz_bXqpsw1poUsOmTsMTiCFU -Fsuse=@XzerServer-merge.tars -Fapplication=TestApp -Fserver_name=XzerServer)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo 
---------------------------------------------------------------------------)
