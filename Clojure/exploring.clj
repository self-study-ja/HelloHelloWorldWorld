(defn helloworld
  ([] (println "Goodbye, World"))
  ([world] 
    (println
      (str "Goodbye," world)))
  ([hello world]
    (println (str hello " "  world))))

(helloworld "Hello," "World.")
