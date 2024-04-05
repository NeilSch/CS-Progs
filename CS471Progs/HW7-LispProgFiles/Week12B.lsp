(setf (get 'Spot 'species) 'dog)
(setf (get 'Spot 'age) 7)
(setf (get 'Spot 'color) 'tan)

(defun main()
  (
   prog (prop)
	
	loop (princ "Please enter a property for spot to find ")
	(
	 setq prop (read)
	      )
	
	(
	 princ (get 'Spot prop)
	       (
		if (equal 'done prop)
		   (go Out)
		 )
	(go loop)
	Out
	)
	) 
)
