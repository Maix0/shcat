for fd in $(/usr/bin/env ls /proc/$$/fd); do 
	if [ "$fd" -gt 10 ]; then
		#echo "$fd"
		exec {fd}>&-
	fi;
done
