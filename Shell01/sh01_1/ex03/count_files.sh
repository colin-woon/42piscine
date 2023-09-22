find . | wc -l | awk -F" " '{print $NF}'
