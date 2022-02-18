EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo http://172.25.0.3:3000/api/upload_and_publish -Fsuse=@XzerServer.tgz -Fapplication=TestApp -Fmodule_name=XzerServer -Fcomment=developer-auto-upload)
EXECUTE_PROCESS(COMMAND curl http://172.25.0.3:3000/api/upload_and_publish?ticket=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1aWQiOiJhZG1pbiIsImlhdCI6MTY0NTA2NjIxMywiZXhwIjoxNjQ2MDE2NjEzfQ.nJtXvFEKsNOCY70Qv97xz_bXqpsw1poUsOmTsMTiCFU -Fsuse=@XzerServer.tgz -Fapplication=TestApp -Fmodule_name=XzerServer -Fcomment=developer-auto-upload)
EXECUTE_PROCESS(COMMAND /usr/bin/cmake -E echo 
---------------------------------------------------------------------------)
