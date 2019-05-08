main(){
  unsigned short memory[64];
  char *input, *pid, *type, *v_addr, *value;

  while(1){
    input = readline("Instruction?");
    pid=strtok(input,",");
    type=strtok(NULL,",");
    v_addr=strtok(NULL,",");
    value=strtok(NULL,",");
    
    if(!strcmp(type,"map")){
      //run map function
        map(pid,v_addr, value);
    }
    else if(!strcmp(type,"store")){
      //do store function
        store(pid, v_addr, value);
    }
    else if(!strcmp(type,"load")){
      //do load function
        load(pid, va_addr);
    }
  }
}
