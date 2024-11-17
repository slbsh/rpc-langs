# bash thing.bash
# author: slab
while true; do
	read -a line

	if [[ ${#line[@]} < 2 ]]; then
		echo "Invalid input"
		continue
	fi

	acc=${line[1]}

	for (( i = 2; i < ${#line[@]}; i++ )); do
		case ${line[0]} in
			"+") acc=$(($acc + ${line[$i]}));;
			"-") acc=$(($acc - ${line[$i]}));;
			"*") acc=$(($acc * ${line[$i]}));;
			"/") acc=$(($acc / ${line[$i]}));;
			*)   echo "Invalid operator";;
		esac
	done

	echo $acc
done
