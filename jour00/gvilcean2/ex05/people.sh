ldapsearch -Q  "uid=z*" | grep "cn: " | sed 's/cn: //g' | sort -dfr
