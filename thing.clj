; clj -M thing.clj
; author: slab
(loop []
	(let [[op & nums] (clojure.string/split (read-line) #"\s+")
			nums (map #(Integer/parseInt %) nums)
			result (case op
				"+" (reduce + nums)
				"-" (reduce - nums)
				"*" (reduce * nums)
				"/" (reduce / nums)
				(throw (Exception. "Invalid operator")))]
		(println result))
	(recur))
