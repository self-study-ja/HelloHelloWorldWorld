;; lein2 exec logic.clj

(ns hello-world.logic
  (:refer-clojure :exclude [==])
  (:use [clojure.core.logic]))

(defrel message category message)
(fact message :hello "Hello, World.")
(fact message :bye "Goodbye, World.")

(println 
  (first
  (run* [q]
    (message :hello q))))
