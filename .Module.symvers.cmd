cmd_drivers/staging/ethosu/Module.symvers :=  sed 's/ko$$/o/'  drivers/staging/ethosu/modules.order | scripts/mod/modpost -m     -o drivers/staging/ethosu/Module.symvers -n -e -i Module.symvers -T - 
