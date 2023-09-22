ifconfig $interface | awk '/ether/{print ($2)}' | grep -v  "autoselect"
