if [ -f "$1" ]; then
	grep -i "bauer\tnicolas" "$1" | awk '{print $(NF - 1)}'
	grep -i "nicolas\tbauer" "$1" | awk '{print $(NF - 1)}'
fi
