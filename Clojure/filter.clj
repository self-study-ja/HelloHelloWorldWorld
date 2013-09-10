(require '[clojure.string])

(doall (map 
  #(do (print (str %)) (print " "))
  (filter 
    (fn [w] (or (= (first w) \H) (= (first w) \W)))
      (clojure.string/split "GoodBye, God, Hello, World. hell. heven." #"\s+" ))))
(println "")
